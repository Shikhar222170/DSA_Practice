#include <iostream>
using namespace std;
int main(){
int i,n;
cout<<"enter the height"<<endl;
cin>>n;

for ( i =0; i <n; i++)
{
    for ( char j = 'E'-i; j <='E'; j++)
    {
        cout<<j<<" ";
        
    }
    cout<<"\n";
    
}
}