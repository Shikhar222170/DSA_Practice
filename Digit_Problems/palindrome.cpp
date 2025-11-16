#include<iostream>
using namespace std;
int main(){
    int rem,num,palindrome=0;
    bool isnegative=false;
    cout<<"Enter no to check";
    cin>>num;
    int original = num;
    if(num<0){
        isnegative=true;
        num=-num;
    }
    int temp=num;
    while (temp>0)
    {
        rem=temp%10;
        temp/=10;
        palindrome=palindrome*10+rem;
    }
    if(isnegative){
        palindrome=-palindrome;
    }
    if(palindrome==original){
        cout<<original<<" "<<"Is palindrome";
        
    }
    else{
        cout<<original<<" "<<"Is not palindrome";
        
    }
    
}