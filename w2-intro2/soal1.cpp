#include <iostream>
using namespace std;

int main() {
    int n[100];
    char tampung[100];
    int i = 0;
    int count = 0;

    while (true) {
        cin >> n[i];

        if (n[i] < 0) {
            cout << "Ga boleh negatif!!";
            return 1;
        }

        if (n[i] == 0) {
            break;
        }

        int d1 = n[i] / 10;
        int d2 = n[i] % 10;

        if ((d1 + d2) % 2 == 0) {
            tampung[count] = n[i];
            count++;
        }

        i++;
    }

    for (int j = 0; j < count; j++) {
        cout << tampung[j];
    }

    cout << endl;
    return 0;
}
