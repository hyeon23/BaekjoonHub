#include <iostream>
#include <vector>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  string s;
  getline(cin, s);
  string code;
  getline(cin, code);
  vector<int> arr(200, 0);
  int result = 0;
  int size = s.length();

  for (int i = 0; i < s.length(); ++i) {
    int index = s[i] - '!';
    if (arr[index] == 0) {
      arr[index] = i + 1;
    }
  }

  for (int i = 0; i < code.length(); ++i) {
    int index = code[i] - '!';

    result *= size;
    result += arr[index];
    result %= 900528;
  }

  cout << result << "\n";
  return 0;
}