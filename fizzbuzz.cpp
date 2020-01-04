// URL - https://open.kattis.com/problems/fizzbuzz
#include <iostream>
using namespace std;

int main() {

    int fizz, buzz, num, k;
    cin >> fizz >> buzz >> num;

    for (k = 1; k <= num; k++) {
        if (k % fizz == 0 && k % buzz == 0)
            cout << "FizzBuzz" << endl;
        else if (k % fizz == 0)
            cout << "Fizz" << endl;
        else if (k % buzz == 0)
            cout << "Buzz" << endl;
        else
            cout << k << endl;
        
    }

    return 0;
}