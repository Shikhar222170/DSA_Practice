#include<iostream>
using namespace std;
int main(){
int num,reminder,count=0;
cout<<"Enter the number:";
cin>>num;
while (num>0)
{
    count+=1;
    num/=10;
}
cout<<count<<" "<<"Digits";
}