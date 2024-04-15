#头文件目录
INCLUDEDIR = -I/root/cpp/api -I/root/cpp/tools
#库文件目录
LIBDIR = -L/root/cpp/api -L/root/cpp/tools
#要编译的文件
all:demo
#要编译的文件所需依赖
demo:demo.cpp
	g++ -o demo demo.cpp $(INCLUDEDIR) $(LIBDIR) -lapi1 -lfun1 -lfun2

#清除编译文件
clean:
	rm -f demo