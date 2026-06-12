#include<bits/stdc++.h>
using namespace std;

int main() {

    // Basic pair storing two integer values
    pair<int, int> p = {1, 4};

    // Accessing pair elements using first and second
    cout << p.first << " " << p.second << endl;

    // Nested pair:
    // first = 1
    // second = {3, 4}
    pair<int, pair<int, int>> p1 = {1, {3, 4}};

    cout << p1.first << " "
         << p1.second.first << " "
         << p1.second.second << endl;

    cout << endl;

    // Array of pairs
    pair<int, int> arr[] = {{1, 1}, {3, 4}};

    // Finding number of elements in the array
    int n = sizeof(arr) / sizeof(arr[0]);

    // Traversing the array of pairs
    for (int i = 0; i < n; i++) {
        cout << arr[i].first << " "
             << arr[i].second << endl;
    }

    return 0;
}