#include <iostream>
using namespace std;

int main() {
    string word;
    int numOfEs, k;

    cin >> word;
    numOfEs = word.length() - 2;
    
    cout << "h";
    for (k = 0; k < numOfEs * 2; k++)
        cout << "e";
    cout << "y" << endl;

    return 0;
}