#指定要编译的文件是libfun1.a libfun2.so libapi1.so
all:libapi1.so

#编译libfun1.a需要依赖fun1.cpp和fun.h
#如果依赖发生了变化，将重新编译fun1.a
libapi1.so:api.h api1.cpp
	g++ -fPIC -shared -o libapi1.so api1.cpp


# clean 用于清理编译结果文件，仅在make clean才会执行
clean:
	rm -f libapi1.so