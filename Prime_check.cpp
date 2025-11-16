#include<iostream>
using namespace std;
int main(){
    int num,prime=-1;
    cout<<"Enter number to check Prime:";
    cin>>num;
    if (num<2)
    {
        prime++;
    }
    else{
    for (int i = 2; i < (int)num/2+1; i++)
    {
        if(num%i==0){
            prime++;
            break;
        }
    }
}
    if(prime==-1){
        cout<<num<<" is a prime number";
    }
    else{
        cout<<num<<" is Not a prime number";
    }
 
}   
    
