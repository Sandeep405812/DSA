#include<bits/stdc++.h>
using namespace std;

int main() {

    vector<int> v = {1,2,2,3,3,4};

    for(int i = 1; i < v.size(); i++) {
        if(v[i] < v[i-1]) {
            cout << "Not Sorted";
            return 0;
        }
    }

    cout << "Sorted";

    return 0;
}

//T(c)=O(n)