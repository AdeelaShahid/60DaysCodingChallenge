//calculate area and perimeter of the square and rectangle
#include<iostream>
using namespace std;
int area(int s)
{
    return(s*s);
    
}
int area(int l, int b)
{
    int a=(l*b);
    return a;
}
int peri(int s)
{
    int a=(4*s);
    return a;
}
int peri(int l, int b)
{
    int a=(2*(l+b));
    return a;
}
int main()
{
    int side, length, breadth;
    cout<<"enter side of the square "<<endl;
    cin>>side;
    cout<<"enter length and breadth of the rectangle "<<endl;
    cin>>length>>breadth;
    cout<<"Area of Square "<<area(side)<<endl;
    cout<<"Area of Rectangle "<<area(length,breadth)<<endl;
    cout<<"Perimeter of Square "<<peri(side)<<endl;
    cout<<"Perimeter of Rectangle "<<peri(length,breadth)<<endl;
}
