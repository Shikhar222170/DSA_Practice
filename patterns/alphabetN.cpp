#include<bits/stdc++.h>
using namespace std;

void alphabetN(int size){

    for (int i = 0; i <= size ;i++)
    {
        for (int j = 0; j <= size; j++)
        {
            if (j==0 || j==size || i==j)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
            
        }
      cout<<endl;  
    }
    
}

int main(){
    int height;
    cout<<"Enter height of N : ";
    cin>>height;
    alphabetN(height);
}