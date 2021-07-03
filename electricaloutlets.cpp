#include <iostream>
using namespace std;

int main() {
    int k, i;
    int appliances = 1;
    int numTestCases, numPowerStrips, powerStripOutlets;
    cin >> numTestCases;

    for (k = 0; k < numTestCases; k++) {
        cin >> numPowerStrips;
        for (i = 0; i < numPowerStrips; i++) {
            cin >> powerStripOutlets;
            appliances += powerStripOutlets;
        }
        appliances -= numPowerStrips;
        cout << appliances << endl;
        appliances = 1;
    }

    return 0;
}