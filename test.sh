#!/bin/bash
assert() {
  expected="$1"
  input="$2"

  # gcc main.cpp
  # ./9cc "$input" > tmp.s
  # cc -o tmp tmp.s
  # ./tmp
  actual="$(echo "$input" | ./a.out)"

  if [ "$actual" = "$expected" ]; then
    echo "$input => $actual"
  else
    echo "$input => $expected expected, but got $actual"
    exit 1
  fi
}

assert 0 0
assert 3 3
assert 14 14
assert 1234 1234

echo OK
