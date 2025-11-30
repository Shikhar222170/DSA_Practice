#include <bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int>& arr) {
    if (arr.size() == 0) return 0;

    int i = 0;
    for (int j = 1; j < arr.size(); j++) {
        if (arr[i] != arr[j]) {  // Found unique element
            i++;
            arr[i] = arr[j];
        }
    }
    return i + 1;  // new length
}

int main() {
    int nElements;
    cout << "Enter number of elements in array : ";
    cin >> nElements;

    vector<int> arr(nElements);
    cout << "Enter elements : ";
    for (int i = 0; i < nElements; i++) {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());   // IMPORTANT

    int newLength = removeDuplicates(arr);

    cout << "Array after removing duplicate elements : ";
    for (int i = 0; i < newLength; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
