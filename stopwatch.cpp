// URL - https://open.kattis.com/problems/stopwatch
#include <iostream>
using namespace std;

int main() {
    int stopwatchPresses, k;
    int start, stop;
    int total = 0;

    cin >> stopwatchPresses;
    if (stopwatchPresses % 2 == 0) {
        for (k = 0; k < stopwatchPresses / 2; k++) {
            cin >> start;
            cin >> stop;
            total += (stop - start);
        }
        cout << total << endl;
    }
    else {
        for (k = 0; k < stopwatchPresses; k++)
            cin >> start;
        cout << "still running" << endl;
    }

    return 0;
}