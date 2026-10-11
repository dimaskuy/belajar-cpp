#include <iostream>

using namespace std;

int main() {
    int bil1 = 2, bil2 = 3, hasil;
    hasil = bil1 > bil2; // lebih dari
    cout << hasil << endl;
    hasil = bil1 >= bil2; // lebih smdgn
    cout << hasil << endl;
    hasil = bil1 < bil2; // kurang dari
    cout << hasil << endl;
    hasil = bil1 <= bil2; // kurang smdgn
    cout << hasil << endl;
    hasil = bil1 == bil2; // sama/equal
    cout << hasil << endl;
    hasil = bil1 != bil2; // tidak sama
    cout << hasil << endl;
    return 0;
}
