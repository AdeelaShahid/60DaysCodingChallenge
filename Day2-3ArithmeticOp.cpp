//Arithmetic opertaions||Basic calculator

#include<iostream>
using namespace std;
int main()
{
    int a,b,add,sub,mul,div;
    cout<<"enter your first number "<<endl;
    cin>>a;
    cout<<"enter your second number "<<endl;
    cin>>b;
    cout<<"adding "<<a<<" and "<<b<< " is"<<endl;
    add=a+b;
    cout<<add<<endl;
    cout<<"subtracting "<<a<< " and "<<b<<endl;
    sub=a-b;
    cout<<sub<<endl;
    cout<<"multiplying "<<a<<" and "<<b<<endl;
    mul=a*b;
    cout<<mul<<endl;
    cout<<"dividing "<<a<<" and "<<b<<endl;
    div=a/b;
    cout<<div<<endl;
    return 0;
}