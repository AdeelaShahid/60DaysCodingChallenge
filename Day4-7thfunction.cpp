#include<iostream>
using namespace std;
int add(int a, int b)
{
    int c=(a+b);
    return c;
}
int sub(int a, int b){
    int c=(a-b);
    return c;
}
int prod(int a, int b){
    int c=(a*b);
    return c;
}
int main()
{
    int x,y;
    cout<<"enter the number "<<endl;
    cin>>x>>y;
    cout<<"the sum is"<<add(x,y)<<endl;
    cout<<"the sub is"<<sub(x,y)<<endl;
    cout<<"the prod is"<<prod(x,y)<<endl;
    return 0;
}