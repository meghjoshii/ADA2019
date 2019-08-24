#include <iostream>
#include<time.h>
using namespace std;

int sqrtFloor(int num)
{
	if(num==0||num==1)
		return num;
	
	int start=0,end=num,ans;
	while(start<=end)
	{
		int mid=(start+end)/2;
		
		if((mid*mid) ==num)
			return mid;
		
		if((mid*mid)<num)
		{
			start=mid+1;
			ans=mid;//floor
		}
		
		else
			end=mid-1;
	}//end of while loop
	
  return ans;
}//end of sqrtFloor

int main()
{
	int n;
	cout<<"Enter value: "<<endl;
	cin>>n;
	clock_t start = clock();
	cout<<sqrtFloor(n)<<endl;
	clock_t end = clock();
	double cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
	cout<<"Time taken: "<<cpu_time_used<<endl;
	return 0;
}
