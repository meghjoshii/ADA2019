#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
	int n;
	cout<<"Enter number of elements: "<<endl;
	cin>>n;
	
	int a[n];
	
	cout<<"Enter elements: ";
	for(int j=0;j<n;j++)
		cin>>a[j];
	
	int max=a[0];
	
	for(int j=0;j<n;j++)
	{
		if(max<a[j])
			max=a[j];
	}
	
	cout<<"MAX: "<<max<<endl;
	return 0;
}
