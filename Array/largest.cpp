#include<bits/stdc++.h>
using namespace std;

/*
    Problem: Find the largest element in an array

    Brute Force Approach:
    1. Sort the array.
    2. The last element will be the largest.
    Time Complexity: O(n log n)
    Space Complexity: O(1)

    Optimal Approach:
    1. Assume first element is the largest.
    2. Traverse the array and update the largest element whenever a bigger value is found.
    Time Complexity: O(n)
    Space Complexity: O(1)
*/

int main() {

    int arr[] = {1, 2, 3, 4, 5};

    // Calculate number of elements in the array
    int n = sizeof(arr) / sizeof(arr[0]);

    // Assume first element is the largest
    int largest = arr[0];

    // Traverse the array and find the maximum element
    for(int i = 1; i < n; i++) {
        if(arr[i] > largest) {
            largest = arr[i];
        }
    }

    cout << "Largest Element: " << largest << endl;

    return 0;
}