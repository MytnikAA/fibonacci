#include<iostream>
#include<string>
#include<stdlib.h>
#include<map>

using namespace std;

const int RECURSION = 0;
const int ITERATIVE = 1;
map <string, int> methodMapping = {
									{"r", RECURSION},
									{"i", ITERATIVE}
								};

long fibRec(int n) 
{
	if (n < 2) {
		return n;
	} else {
		return fibRec(n - 1) + fibRec(n - 2);
	}
}

long fibIter(int n) 
{
	long first = 1;
	long second = 1;
	for (int i = 2; i < n; i++) {
		long next = first + second;
		first = second;
		second = next;
	}
	return second;
}


int main(int argc, char * argv[]) 
{
	int n = atoi(argv[1]);
	string method = argv[2];
	long fib = 0;
	switch (methodMapping[method]) 
	{
		case RECURSION:
		{
			fib = fibRec(n);
			break;
		}
		case ITERATIVE:
		{
			fib = fibIter(n);
			break;
		}
	}
	cout << "C++ done " << method <<"\n" << fib << endl;
	return 0;
}
