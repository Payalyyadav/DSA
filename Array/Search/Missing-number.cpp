#include<iostream>
#include<vector>
using namespace std;

int findMissingElement(vector<int> values) {
    int missingValue = 0;
    for (int i = 0; i < values.size(); i++) {
        missingValue ^= values[i];
    }
    for (int i = 1; i <= values.size() + 1; i++) {
        missingValue ^= i;
    }
    return missingValue;
}

int main() {
    vector<int> values = {1, 2, 3, 5};
    int missingValue = findMissingElement(values);
    cout << "The missing number is: " << missingValue << endl;
    return 0;
}