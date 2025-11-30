#include<bits/stdc++.h>
using namespace std;
int rotateArrBy1(vector<int> &arr){
    int temp = arr[0];
    int length = arr.size();
    for (int i = 1; i < length; i++)
    {
        arr[i-1] = arr[i]; 
    }
    arr[length-1] = temp;
    //print
    cout<<"Rotated array is : ";
    for (int j = 0; j < length; j++)
    {
        cout<<arr[j]<<" ";
    }
    return 0;
    
}





int main(){
    int num;
    cout<<"Enter number of element in Array : ";
    cin>>num;
    cout<<"Enter elements : ";
    vector<int> arr(num);
    for (int i = 0; i < num; i++)
    {
        cin>>arr[i];
    }
    rotateArrBy1(arr);
}