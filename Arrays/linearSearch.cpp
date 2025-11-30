#include<bits/stdc++.h>
using namespace std;

int linearSearch(vector<int> &arr , int key){
    
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == key)
        {
            return i;
        }   
    }
    return -1;
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
    int key;
    cout<<"Enter element is to be searched : ";
    cin>>key;
    int result = linearSearch(arr,key);
    if(result == -1)
        cout<<"Element not found";       
    else
        cout<<"Element is at index : "<<result;
}