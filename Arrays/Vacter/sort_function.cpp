#include <iostream>
#include <vector>
#include <algorithm> // Include the algorithm header for sort function
using namespace std;

int main() {
    vector<int> numbers = {5, 2, 8, 1, 9, 3};

    cout << "Before sorting:" << endl;
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    // Sorting the vector in ascending order
    sort(numbers.begin(), numbers.end());

    cout << "After sorting:" << endl;
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
