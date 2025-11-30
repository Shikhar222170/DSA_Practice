#include<bits/stdc++.h>
using namespace std;

void moveZerosToEnd(vector<int> &arr){
    int j = 0;
    int length = arr.size();
    for (int i = 0; i < length; i++)
    {
        if (arr[i] != 0)
        {
            swap(arr[i],arr[j]);
            j++;
        }
        
    }
     cout << "Array after shifting all zeros is: ";
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
    moveZerosToEnd(arr);
}