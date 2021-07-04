#include <iostream>
using namespace std;

int main() {
    int judges, alreadyRated, k;
    float rating, minRating, maxRating;
    float overall = 0;

    cin >> judges;
    cin >> alreadyRated;

    for (k = 0; k < alreadyRated; k++) {
        cin >> rating;
        overall += rating;
    }

    // Best score
    maxRating = (overall + ((judges - alreadyRated) * 3)) / judges;

    // Worst score
    minRating = (overall + ((judges - alreadyRated) * -3)) / judges;

    cout << minRating << " " << maxRating << endl;

    return 0;
}