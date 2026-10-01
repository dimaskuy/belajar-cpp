#include <iostream>
using namespace std;

float calculatePower(int *physical, int *magic, int *defense) {
    float total = (2 * (*physical)) + (3 * (*magic)) - (0.5 * (*defense));
    return total;
}

int main() {
    int n;
    cin >> n;
    float collection[100];

    for (int i = 0; i < n; i++) {
        int physical, magic, defense;
        cin >> physical;
        cin >> magic;
        cin >> defense;
        collection[i] = calculatePower(&physical, &magic, &defense);
    }

    for (int i = 0; i < n; i++) {
        cout << "Total kekuatan petualang " << i+1 << ": " << collection[i] << endl;
    }
    return 0;
}