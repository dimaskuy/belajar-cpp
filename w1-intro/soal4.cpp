#include <iostream>
using namespace std;

int main() {
  int n;
  int sum = 0;

  cout << "Bilangan: ";
  cin >> n;

  for (int i = 1; i < n; i++) {
    if (n % i == 0) {
      sum += i;
    }
  }

  if (sum == n) {
    cout << "sempurna" << endl;
  } else {
    cout << "bukan sempurna" << endl;
  }

  return 0;
}