#指定要编译的文件是libfun1.a和libfun2.so
all:libfun1.a \
	libfun2.so

#编译libfun1.a需要依赖fun1.cpp和fun.h
#如果依赖发生了变化，将重新编译fun1.a
libfun1.a:fun.h fun1.cpp
	g++ -c -o libfun1.a fun1.cpp

libfun2.so:fun.h fun2.cpp
	g++ -fPIC -shared -o libfun2.so fun2.cpp


# clean 用于清理编译结果文件，仅在make clean才会执行
clean:
	rm -f libfun1.a libfun2.so


