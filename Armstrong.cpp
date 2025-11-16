#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int num,rem,len=0,original;
    double arm=0;
    cout<<"Enter number";
    cin>>num;
    len=int(log10(num)+1);
    original=num;
    while (num>0)
    {
        rem=num%10;
        num/=10;
        arm+=pow(rem,len);
    }
    if(int(arm)==original){
        cout<<original<<" is armstrong number";
    }
    else{
        cout<<original<<" is not armstrong number";
    }

    
}