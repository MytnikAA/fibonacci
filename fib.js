#!/usr/bin/jjs
function fibRec(n) {
  if (n < 2) {
    return n;
  } else {
    return fibRec(n - 1) + fibRec(n - 2);
  }
}
n = arguments[0];
print("JavaScript Nashorn done:\n" + fibRec(n));
