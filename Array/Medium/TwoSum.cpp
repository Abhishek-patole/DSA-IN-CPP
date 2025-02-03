#include "bits/stdc++.h"

using namespace std;

vector<int> twoSumBetter(vector<int> &a, int target) {
    map<int, int> mp;  // Map to store the number and its index.
    
    for (int i = 0; i < a.size(); i++) {
        int current = a[i];
        int complement = target - current;

        // Check if the complement is already in the map.
        if (mp.find(complement) != mp.end()) {
            return {mp[complement], i};  // Return indices of the pair.
        }

        // Add the current number and its index to the map.
        mp[current] = i;
    }

    return {-1, -1};  // Return {-1, -1} if no pair is found.
}

vector<int> twoSumBrute(vector<int> &a, int target) {
    for (int i = 0; i < a.size(); i++) {
        for (int j = i + 1; j < a.size(); j++) {
            if (a[i] + a[j] == target) {
                return {i, j};  // Return indices as a vector.
            }
        }
    }
    return {-1, -1};  // Return {-1, -1} if no pair is found.
}

int main() {
    vector<int> a;
    int n, target;

    cout << "Enter the number of elements: ";
    cin >> n;
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        a.push_back(num);  // Populate the vector with user input.
    }

    cout << "Enter the target value: ";
    cin >> target;

    vector<int> ans = twoSumOptimal(a, target);

    if (ans[0] == -1 && ans[1] == -1) {
        cout << "No valid pair found." << endl;
    } else {
        cout << "Indices: ";
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";  // Print both indices.
        }
        cout << endl;  // New line for cleaner output.
    }

    return 0;
}

