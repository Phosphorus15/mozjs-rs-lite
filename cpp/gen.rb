$dir = ARGV[0] || "/usr/local/include/mozjs-38/";

def to_snake_case(string)
  string.gsub(/::/, '/').
  gsub(/([A-Z]+)([A-Z][a-z])/,'\1_\2').
  gsub(/([a-z\d])([A-Z])/,'\1_\2').
  tr("-", "_").
  downcase
end

def common_gen(subfile)
	conflict = []
	file = $dir + subfile
	output = File.new("./src/#{subfile[0..-3]}.cpp" , "w+")
	api = ""
	output.write "// Auto-generated file for #{subfile} by mozjs-rs generator\n// Modify if necessary\n\n"
	output.write "#define JS_HAS_CTYPES\n\n"
	output.write "#include <jsapi.h>\n\nusing namespace JS;\n\n extern \"C\" {\n"
	File.open(file).each_line do |line|
		if line.start_with? "extern JS_PUBLIC_API" then
			api = (line.gsub /\(.+\)/).next[1..-2]
		else if api.size != 0 then
			puts api
			puts line
			params = (line.gsub /\(.+\;/).next rescue next
			if line.scan("=").size != 0 || line.scan("return").size != 0 || line.scan("ASSERT").size != 0 || line.scan("...").size != 0 then
				api = ""
				next
			end
			fdef = line.gsub(/.+\(/).next
			if conflict.include? fdef then
				api = ""
				next
			end
			conflict << fdef
			output.write "// #{api} #{line}"
			api = "void *" if api.rstrip.end_with? "*"
			output.write "#{api} "
			output.write to_snake_case(fdef[0..-2])
			output.write (params.gsub /(([A-Za-z_0-9:]+|[A-Za-z_-_0-9:]+\<[A-Za-z:*_]+\>))\*\s/ , 'void* ')[0..-2]
			output.write " {\n"
			puts line
			invoke = line.gsub /((const.{1}|.{0})([A-Za-z_0-9:]+|[A-Za-z_-_0-9:]+\<[A-Za-z:*_]+\>))((\*|\&)+)\s/ , '(\1 \4) '
			unique = invoke.gsub /([A-Za-z_0-9:]+|[A-Za-z_-_0-9:]+\<[A-Za-z:_*0-9]+\>)\s+([A-Za-z_]+)/, '\2'
			unique = unique.gsub /\(void\)/, "()"
			output.write "\t"
			output.write "return (#{api}) " if api != 'void'
			output.write "#{unique}"
			output.write "}\n"
			output.write "\n"
			api = ""
		end
	end
end
output.write("\n}\n")
end

common_gen "jsapi.h"

