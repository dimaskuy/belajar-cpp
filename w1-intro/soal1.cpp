#include <iostream>
using namespace std;

int main() {
  int bil, neg, pos, sen;
  string hasil;
  sen = 0;
  neg = 0;
  pos = 0;

  cin >> bil;
  while (bil != sen) {
    if (bil < 0) {
      neg++;
    } else if (bil > 0) {
      pos++;
    }
    cin >> bil;
  }

  if (neg > pos) {
    hasil = "negatif";
  } else if (pos > neg) {
    hasil = "positif";
  } else {
    hasil = "imbang";
  }

  cout << neg << " " << pos << " " << hasil << endl;
}