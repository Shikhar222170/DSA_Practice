#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter number for Divisors:";
    cin>>num;
    cout<<"Divisors are:";
    for (int i = 1; i <(int)num/2+1; i++)
    {
        if(num%i==0){
            cout<<i<<" ";
        }
    }
    
}