//LINEAR SEARCH
#include<iostream>
using namespace std;
int main(){
    int i,n,arr[100], data,flag;
    cout<<"enter size of array"<<endl;
    cin>>n;
    cout<<"enter your element"<<endl;
    cin>>data;
    cout<<"enter elements"<<endl;
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    flag=0;
    for(i=0; i<n; i++)
    //cin>>arr[i];
    {
        //flag=0;
        if(arr[i]==data)
        {
            cout<<"element found at index"<<i<<endl;
            flag==1;
            break; 
        }
    }
    if(flag==0);
    {
    cout<<"element not found"<<endl;
    }
    return 0;
}