#include <iostream>
#include <algorithm>
using namespace std;

int Search(int arr[], int n, int key) {
    // Check if the key exists in the array using binary_search
    bool present = binary_search(arr, arr + n, key);

    if (present) {
        // Find the lower bound (the first element >= key)
        int* lower = lower_bound(arr, arr + n, key);

        // Calculate the index by subtracting the pointer to the array
        int index = lower - arr;
        return index;
    } else {
        return -1; // Key not found in the array
    }
}

int main() {
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int key;
    cin >> key;

    int ans = Search(arr, n, key);
    cout<<ans<<endl;

    return 0;
}
