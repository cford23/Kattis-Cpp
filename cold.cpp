#include <iostream>
using namespace std;

int main() {

    int count = 0;
    int temps, k, num;
    cin >> temps;

    for (k = 0; k < temps; k++) {
        cin >> num;
        if (num < 0)
            count++;
    }

    cout << count << endl;

    return 0;
}