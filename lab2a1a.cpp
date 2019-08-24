
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
	
    int i, j, min;  
  
    for (i = 0; i < n-1; i++)  
    {  

        min = i;  
        for (j = i+1; j < n; j++)  
        if (arr[j] < arr[min])  
            min= j;  
        swap(&arr[min], &arr[i]);  
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
	cout<<k<<"th smallest: "<<arr[k-1]<<endl;
	
}
