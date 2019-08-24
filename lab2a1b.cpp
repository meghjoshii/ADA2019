
#include<iostream>
using namespace std;

void swap(int *x, int *y)  
{  
    int temp = *x;  
    *x = *y;  
    *y = temp;  
}  

void selsort(int arr[], int n)
{
	
    int i, j, max;  
  
    for (i = 0; i < n-1; i++)  
    {  

        max = i;  
        for (j = i+1; j < n; j++)  
        if (arr[j] > arr[max])  
            max= j;  
        swap(&arr[max], &arr[i]);  
    }  
}  



int main()
{
	int size;
	cout<<"Enter size of the array: "<<endl;
	cin>>size;
	int arr[size],k;
	
	cout<<"Enter elements of the array: "<<endl;
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	
	cout<<"Enter k: "<<endl;
	cin>>k;
	
	selsort(arr,size);
	cout<<k<<"th largest elements: "<<endl;
	for(int j=0;j<k;j++)
	{
			cout<<arr[j]<<" ";
	}
	
	cout<<endl;
	return 0;
	
}
