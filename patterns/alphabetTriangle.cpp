#include<iostream>
using namespace std;
int main(){
    int i,j,k,n;
    cout<<"enter height of pattern"<<"\n";
    cin>>n;
   
    
     for ( j = 1; j <=n ; j++)
        {char alpha='A';
             for ( i = 0; i<n-j+1; i++){
       cout<<" ";
    }
            for ( k = 1; k <=2*j-1; k++)
            {
               if(k<j){
                   cout<<alpha;
                   alpha++;}
                else{
                    cout<<alpha;
                    alpha--;
                }      
            }
            cout<<"\n";
        }
    
}
