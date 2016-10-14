#include<iostream>
#include<stdlib.h>

using namespace std;

long fibRec(int n) 
{
	if (n < 2) {
		return n;
	} else {
		return fibRec(n - 1) + fibRec(n - 2);
	}
}

int main(int argc, char * argv[]) 
{
	int n = atoi(argv[1]);
	long fib = fibRec(n);
	cout << "C++ done\n" << fib << endl;
	return 0;
}
