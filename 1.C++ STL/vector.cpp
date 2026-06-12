#include <bits/stdc++.h>
using namespace std;

int main() {

    // Creating an empty vector
    vector<int> v;

    // Adding elements
    v.push_back(10);
    v.push_back(20);
    v.emplace_back(30);
    v.push_back(40);

    // First and last element
    cout << "Front: " << v.front() << endl;
    cout << "Back: " << v.back() << endl;

    // Size of vector
    cout << "Size: " << v.size() << endl;

    cout << "\nTraversing Vector\n";

    // 1. Index Based Loop
    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    // 2. Range-Based Loop
    for(auto x : v) {
        cout << x << " ";
    }
    cout << endl;

    // 3. Iterator
    for(auto it = v.begin(); it != v.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}