objects = init.o jsapi.o
js_path = /usr/local/include/mozjs-38/
gpp = g++ -DDEBUG -std=c++11

libmozrs: $(objects)
	$(gpp) -fPIC -shared -DDEBUG -o libmozrs.so -I/usr/local/include/mozjs-38/ $(objects) -lmozjs-38

init.o: 
	$(gpp) -I$(js_path) -fPIC -shared -c src/init.cpp

jsapi.o:
	$(gpp) -I$(js_path) -fPIC -shared -c src/jsapi.cpp

install:
	cp libmozrs.so /lib/libmozrs.so

clean:
	rm $(objects)

