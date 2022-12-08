#include<iostream>
using namespace std;
int cube(int x)
{
    int C;
    C=(x*x*x);
    return C;

}
int main()
{
    int x,C;
    cout<<"enter the number"<<endl;
    cin>>x;
    C=cube(x);
    cout<<"the cube of the given number is " <<C<<endl;
    return 0;

}
