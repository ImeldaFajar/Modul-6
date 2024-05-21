#include <iostream>
#include <stack>
using namespace std;

bool isPalindrome(string kalimat) {
  string KalimatHurufKecil = "";
  for (char c : kalimat) {
    if (isalpha(c)) {
      KalimatHurufKecil += tolower(c);
    }
  }

  stack<char> s;

  for (char c : KalimatHurufKecil) {
    s.push(c);
  }

  int i = 0;
  while (!s.empty() && i < KalimatHurufKecil.length()) {
    if (s.top() != KalimatHurufKecil[i]) {
      return false;
    }
    s.pop();
    i++;
  }

  return true;
}

int main() {
  string kalimat;

  cout << "Masukkan kalimat: ";
  getline(cin, kalimat);

  if (isPalindrome(kalimat)) {
    cout << kalimat << " adalah kalimat palindrom." << endl;
  } else {
    cout << kalimat << " bukan kalimat palindrom." << endl;
  }

  return 0;
}