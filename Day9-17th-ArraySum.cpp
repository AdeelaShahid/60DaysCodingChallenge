//sum using array
#include<iostream>
using namespace std;
int main(){
    int i,a[10],sum=0;
    cout<<"enter the elements in array"<<endl;
    for(i=0; i<=5; i++){
    cin>>a[i];
    }
    cout<<"array"<<endl;
    for(i=0; i<=5; i++){

    cout<<a[i]<<endl;
    }
    cout<<"sum of the elements is"<<endl;
    for(int i=0; i<=5; i++)
    sum=sum+a[i];
    cout<<sum;

}