#!/usr/bin/python3
import sys

def fibRec(n):
    if n < 2:
        return n
    else:
        return fibRec(n - 1) + fibRec(n - 2)

def fibIter(n):
	prv = 0;
	nxt = 1;
	for i in range(1, n):
		cur = prv + nxt
		prv = nxt
		nxt = cur
	return nxt

n = int(sys.argv[1])
method = sys.argv[2]
fibonacci = 0
if method == "i":
	fibonacci = fibIter(n)
elif method == "r":
	fibonacci = fibRec(n)
print("Python 3 done\n" + str(fibonacci))

