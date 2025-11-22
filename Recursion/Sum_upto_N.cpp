#include<iostream>
using namespace std;
int sumUptoN(int num){
    int sum=0;
    if (num == 1)
        return 1;
    else{
        return num+sumUptoN(num-1);
    }
   
}
int main(){
    int num;
    cout<<"Enter no till u want sum:";
    cin>>num;
    cout<<"Sum upto "<< num <<" terms is :"<<sumUptoN(num);
}
