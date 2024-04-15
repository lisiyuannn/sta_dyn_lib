#include <iostream>
#include "fun.h"
#include "api.h"
using namespace std;

int main(int argc, char *argv[], char *envp[]) {

	cout << "argc = " << argc << endl;

	for (int i = 0; i < argc; ++i)
	{
		cout << "NO." << i << " is " << argv[i] << endl;
	}
	cout << "************" << endl;

	fun1();
	fun2();
	api1();

	return 0;
}