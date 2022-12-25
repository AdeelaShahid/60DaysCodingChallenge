#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int arr[] = {8, -901, 89, 0, 18, 791, -87};
    size_t len = sizeof(arr)/sizeof(arr[0]);
    sort(arr, arr + len, greater<>());
    cout<<"The descendingly sorted array is: ";
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<endl;
}
