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

int main() {
  string s;
  cin >> s;
  cout << number(s) << "\n";

  return 0;
}
