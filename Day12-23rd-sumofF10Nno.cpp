//sum of first 10 natural numbers
#include<iostream>
using namespace std;
int main(){
    int sum, N;
    sum=0;
    //cout<<"sum of 10 natural number is ";
    for(int i=1; i<=10; i++)
    {
        //cout<<i;
        sum=sum+i;
    }
    cout<<sum;
    return 0;
}