// URL - https://open.kattis.com/problems/jackolanternjuxtaposition
#include <iostream>
using namespace std;

int main() {
    int eyeDesigns, noseDesigns, mouthDesigns;

    cin >> eyeDesigns >> noseDesigns >> mouthDesigns;
    cout << (eyeDesigns * noseDesigns * mouthDesigns) << endl;

    return 0;
}