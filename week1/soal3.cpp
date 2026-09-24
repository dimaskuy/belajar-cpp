#include <iostream>
using namespace std;

int main() {
  int n;
  int count = 0;

  cout << "Masukkan: ";
  cin >> n;
  if (n <= 1) {
    cout << "bukan prima";
  } else {
    for (int i = 1; i <= n; i++) {
      if (n % i == 0)
        count++;
    }

    if (count > 2) {
      cout << "bukan prima";
    } else {
      cout << "prima";
    }
  }
  return 0;
}