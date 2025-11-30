#include<bits/stdc++.h>
using namespace std;
vector<int> unionArray(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();
        vector<int> uni;
        int j = 0,i = 0;
        while(i < n1 && j < n2){
            if(nums1[i] <= nums2[j]){
                if (uni.empty() || uni.back() != nums1[i])
                    uni.push_back(nums1[i]);
                i++;
            }
            else{
                if (uni.empty() || uni.back() != nums2[j])
                    uni.push_back(nums2[j]);
                j++;
            }
        }
        while(i < n1){
            if (uni.empty() || uni.back() != nums1[i])
                    uni.push_back(nums1[i]);
                i++;
        }

        while(j < n2){
            if (uni.empty() || uni.back() != nums2[j])
                    uni.push_back(nums2[j]);
                j++;
        }
        
        return uni;
    }

int main() {
    int num1;
    cout << "Enter number of elements in Array1: ";
    cin >> num1;

    vector<int> arr1(num1);
    cout << "Enter elements: ";
    for (int i = 0; i < num1; i++) {
        cin >> arr1[i];
    }

    int num2;
    cout << "Enter number of elements in Array2: ";
    cin >> num2;

    vector<int> arr2(num2);
    cout << "Enter elements: ";
    for (int i = 0; i < num2; i++) {
        cin >> arr2[i];
    }
    vector<int> result = unionArray(arr1, arr2);

    cout << "Union of both arrays: ";
    for (int x : result)
        cout << x << " ";
    cout << endl;

    return 0;
}