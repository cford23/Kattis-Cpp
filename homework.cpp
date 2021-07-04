#include <iostream>
#include <vector>
using namespace std;

int main() {
    string problems, sub;
    vector<int> array;
    int pos, value, rangePos, start, end, k;
    string delimiter = ";";
    cin >> problems;

    while (problems.find(";") != string::npos) {
        pos = problems.find(";");
        sub = problems.substr(0, pos);
        if (sub.find("-") != string::npos) {
            // Split 1-3 into 1, 2, 3 and add each to array
            rangePos = sub.find("-");
            start = stoi(sub.substr(0, rangePos));
            end = stoi(sub.substr(rangePos + 1, sub.length()));
            for (k = start; k <= end; k++)
                array.push_back(k);
        }
        else {
            // substring is a single int
            value = stoi(sub);
            array.push_back(value);
        }
        problems.erase(0, pos + delimiter.length());
    }
    if (problems.find("-") != string::npos) {
        rangePos = problems.find("-");
        start = stoi(problems.substr(0, rangePos));
        end = stoi(problems.substr(rangePos + 1, problems.length()));
        for (k = start; k <= end; k++)
            array.push_back(k);
    }
    else {
        value = stoi(problems);
        array.push_back(value);
    }
    problems.erase(0, pos + delimiter.length());

    cout << array.size() << endl;

    return 0;
}