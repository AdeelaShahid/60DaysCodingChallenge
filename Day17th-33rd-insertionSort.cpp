//insertion sort
#include<iostream>
using namespace std;
class Isort
{
    public:
    int num,i,j,data,a[100],temp;
    void getdata();
    void sort();
};
void Isort:: getdata()
{
    cout<<"Enter the size of array: "<<endl;
    cin>>num;
    cout<<"Enter the elements of array: "<<endl;
    for(i=0;i<num;i++)
    {
        cin>>a[i];
    }
}
void Isort::sort()
{
    for(i=1;i<num;i++)
    {
        temp=a[i];
        j=i-1;
        while(j>=0 && a[j]>temp)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
    }
    cout<<"Sorted Array is : "<<endl;
    for(i=0;i<num;i++)
    {
        cout<<a[i]<<endl;

    }
}
int main()
{
    Isort i;
    i.getdata();
    i.sort();
}