#include <cassert>
#include <iostream>
#include <string>

using namespace std;

int number(const string& s) {
  int ret = 0;
  for (char c : s) {
    ret *= 10;
    ret += c - '0';
  }
  return ret;
}

int calc(const string& s) {
  return number(s);
}

void test_calc() {
  assert(calc("0") == 0);
  assert(calc("3") == 3);
  assert(calc("14") == 14);
  assert(calc("1234") == 1234);
}

int main() {
  test_calc();

  string s;
  cin >> s;
  cout << calc(s) << "\n";

  return 0;
}
