#include <iostream>
using namespace std;

void calculateAndPrint(int *speed, int *energy, int *precision, int i) {
    float total = (3 * (*speed)) + (4 * (*energy)) - (2 * (*precision));
    cout << "Total efisiensi robot " << i << ": " << total << endl;
}

int main() {
    int n;
    int speed[100];
    int energy[100];
    int precision[100];

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> speed[i];
        cin >> energy[i];
        cin >> precision[i];
    }

    for (int i = 0; i < n; i++) {
        calculateAndPrint(&speed[i], &energy[i], &precision[i], i + 1);
    }

    return 0;
}