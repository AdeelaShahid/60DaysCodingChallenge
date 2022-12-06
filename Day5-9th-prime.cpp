//PRIME NUMBER
#include<iostream>
using namespace std;
int main()
{
    int flag=0,i,n;
    cout<<"enter any number"<<endl;
    cin>>n;
    
     for(i=2; i<=n/2; i++)
     {
        if(n%i==0)
        cout<<"number is not prime"<<endl;
        flag=1;
        break;
     }
        if(flag==0)
    
        cout<<"number is prime"<<endl;
     
     return 0;
    
}