#include<bits/stdc++.h>
using namespace std;

int main() {

    vector<int> v = {1, 2, 4, 7, 7, 5};

    // BRUTE FORCE APPROACH
    
/*
    sort(v.begin(), v.end());

    int largest = v.back();
    int secondLargest = -1;

    for(int i = v.size() - 2; i >= 0; i--) {
        if(v[i] != largest) {
            secondLargest = v[i];
            break;
        }
    }

    cout << "Brute Force Answer: " << secondLargest << endl;
    *\

    /*
        Time Complexity: O(n log n)
        Space Complexity: O(1)
    */





    // OPTIMAL APPROACH (ONE PASS)

    
    int largestElement = v[0];
    int secondLargestElement = -1;

    for(int i = 1; i < v.size(); i++) {

        if(v[i] > largestElement) {
            secondLargestElement = largestElement;
            largestElement = v[i];
        }
         //for duplicate element
        else if(v[i] < largestElement &&
                v[i] > secondLargestElement) {
            secondLargestElement = v[i];
        }
    }

    cout << "Optimal Answer: "
         << secondLargestElement << endl;
    

    /*
        Time Complexity: O(n)
        Space Complexity: O(1)
    */

    return 0;
}