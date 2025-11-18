#include<iostream>
using namespace std;
int fact(int num){
    if (num == 1 || num==0)
        return 1;
    else{
        return num*fact(num-1);
    }
   
}
int main(){
    int num;
    cout<<"Enter no u want factorial:";
    cin>>num;
    cout<<"Factorial of "<< num <<" is :"<<fact(num);
}
