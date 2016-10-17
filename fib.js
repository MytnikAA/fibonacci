#!/usr/bin/jjs
function fibRec(n) {
  if (n < 2) {
    return n;
  } else {
    return fibRec(n - 1) + fibRec(n - 2);
  }
}

function fibIter(n){
	var first = 1;
	var second = 1;
	for (var i = 2; i < n; i++) {
		var next = first + second;
		first = second;
		second = next;
	}
	return second;
}

n = arguments[0];
method = arguments[1];
var fib = 0;
switch (method) {
	case 'r':
		fib = fibRec(n);
		break;
	case 'i':
				fib = fibIter(n);
		break;
}
print("JavaScript done by " + method + ":\n" + 	fib);
