#include<iostream>

void Merge(int *arr , int start , int mid , int end)
{
	int temp[end + start -1];
	int i = start;
	int j = mid+1;
	int k = 0;
	
	while(i<= mid && j<= end)
	{
		if(arr[i] <= arr[j])
		{
			temp[k] = arr[i];
			i++;k++;
		}else
		{
			temp[k] = arr[j];
			k++;j++;
		}
	}
	
	while(i<=mid)
	{
		temp[k] = arr[i];
		i++;k++;
	}
	
	while(j<=end)
	{
		temp[k] = arr[j];
		k++;j++;
	}
	
	for(int i = start ; i <=end ; i++)
	{
		arr[i] = temp[i-start];
	}
}


void MergeSort(int *arr , int start , int end)
{

	if(start < end)
	{
		int mid = (start + end)/2;
		MergeSort(arr,start , mid);
		MergeSort(arr, mid+1 , end);
		Merge(arr , start , mid , end);
	}
}


int main()
{
	int arr[]={4,0,6,1,5,2,3};
	for(int i = 0 ; i < 7 ; i++)
	std::cout<<arr[i]<<" ";
	
	MergeSort(arr , 0 , 6);
	std::cout<<std::endl;	
	for(int i = 0 ; i < 7 ; i++)
	std::cout<<arr[i]<<" ";
	
}
