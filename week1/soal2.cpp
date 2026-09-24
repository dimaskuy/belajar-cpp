#include <iostream>
using namespace std;

int main() {
  int bil, genap, higher, sen;
  sen = 0;
  genap = 0;
  higher = 0;

  cin >> bil;
  while (bil != sen) {
    if (bil % 2 == 0) {
      genap++;
      if (bil > higher) {
        higher = bil;
      }
    }
    cin >> bil;
  }

  cout << genap << " " << higher << endl;
}