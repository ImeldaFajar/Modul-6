#include <iostream>
#include <stack>

using namespace std;

void KalimatTerbalik (string kalimat) {
  stack<char> s;

  for (char c : kalimat ) {
    s.push(c);
  }

  string KalimatTerbalik = "";

  while (!s.empty()) {
    KalimatTerbalik += s.top();
    s.pop();
  }

  cout << "Kalimat terbalik: " << KalimatTerbalik << endl;
}

int main() {
  string kalimat;
  cout << "Masukkan kalimat (minimal 3 kata): ";
  getline(cin, kalimat);

  if (kalimat.size() < 3) {
    cout << "Kalimat harus minimal 3 kata!" << endl;
    return 1;
  }

  KalimatTerbalik (kalimat);

  return 0;
}