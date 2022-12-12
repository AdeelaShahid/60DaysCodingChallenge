#include <iostream>
using namespace std;
int main()
{
	int count = 1, sum = 0, n;
	cout<<"enter a natural number"; 
	cin>>n;
	for(int c=1; c<=n; c++)
	{
		sum= sum+c;
	}
	cout << "sum of "<<n<<" n is " <<sum <<endl;
	return 0;
}
