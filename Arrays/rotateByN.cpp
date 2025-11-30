#include <bits/stdc++.h>
using namespace std;

void rotateArrByN(vector<int> &arr, int pos) {
    int n = arr.size();
    pos = pos % n;   // important

    // Step 1: store last pos elements
    vector<int> temp(pos);
    for (int i = 0; i < pos; i++) {
        temp[i] = arr[n - pos + i];
    }

    // Step 2: shift remaining elements to the right
    for (int i = n - 1; i >= pos; i--) {
        arr[i] = arr[i - pos];
    }

    // Step 3: put temp elements at the beginning
    for (int i = 0; i < pos; i++) {
        arr[i] = temp[i];
    }

    // Print
    cout << "Rotated array is: ";
    for (int x : arr) cout << x << " ";
}

int main() {
    int num;
    cout << "Enter number of elements in Array: ";
    cin >> num;

    vector<int> arr(num);
    cout << "Enter elements: ";
    for (int i = 0; i < num; i++) {
        cin >> arr[i];
    }

    int pos;
    cout << "Enter rotation position: ";
    cin >> pos;

    rotateArrByN(arr, pos);

    return 0;
}
