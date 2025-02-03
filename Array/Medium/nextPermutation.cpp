#include <bits/stdc++.h>
using namespace std;

void nextPermutation(vector<int>& a) {
    int n = a.size();
    int ind = -1; // Index to find the first decreasing element

    // Step 1: Find the first decreasing element from the right
    for (int i = n - 2; i >= 0; i--) {
        if (a[i] < a[i + 1]) {
            ind = i; // Store the index
            break;
        }
    }

    // Step 2: If no such element is found, reverse the array (last permutation case)
    if (ind == -1) {
        reverse(a.begin(), a.end());
        return;
    }

    // Step 3: Find the element just larger than a[ind] to the right of ind
    for (int i = n - 1; i > ind; i--) {
        if (a[i] > a[ind]) {
            swap(a[i], a[ind]); // Swap the elements
            break;
        }
    }

    // Step 4: Reverse the elements after the index ind
    reverse(a.begin() + ind + 1, a.end());
}

int main() {
    vector<int> a = {1, 2, 3}; // Example array input

    cout << "Original Array: ";
    for (int num : a) {
        cout << num << " ";
    }
    cout << endl;

    nextPermutation(a);

    cout << "Next Permutation: ";
    for (int num : a) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}

