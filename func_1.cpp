#include <iostream>
#include <vector>
using namespace std;

// Function to find all indices of a given key
vector<int> findAllIndices(const vector<int>& arr, int key) {
    vector<int> indices;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == key) {
            indices.push_back(i);  // store index
        }
    }
    return indices;
}

int main() {
    // Test Case 1: Multiple occurrences
    vector<int> arr1 = {1, 2, 3, 2, 4, 2, 5};
    vector<int> result1 = findAllIndices(arr1, 2);
    cout << "Indices of 2: ";
    for (int idx : result1) cout << idx << " ";
    cout << endl;

    // Test Case 2: Key not present
    vector<int> arr2 = {10, 20, 30, 40};
    vector<int> result2 = findAllIndices(arr2, 25);
    cout << "Indices of 25: ";
    if (result2.empty()) cout << "Not found";
    else for (int idx : result2) cout << idx << " ";
    cout << endl;

    // Test Case 3: Empty array
    vector<int> arr3 = {};
    vector<int> result3 = findAllIndices(arr3, 5);
    cout << "Indices of 5: ";
    if (result3.empty()) cout << "Not found";
    else for (int idx : result3) cout << idx << " ";
    cout << endl;

    return 0;
}
