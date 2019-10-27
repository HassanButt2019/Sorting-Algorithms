#include<iostream>

using namespace std;

/*
Worst complexity: n^2
Average complexity: n^2
Best complexity: n^2
Space complexity: 1
Method: Selection
Stable: No
Class: Comparison sort */
void SelectionSort(int *arr , int size)
{
	int min= 0;
	int j;
	
	for(int i = 0 ; i < size-1 ; i++)
	{
		min  = i;
		
		for( j = i+1 ; j < size ; j++)
		{
			if(arr[j] < arr[min])
			{
				min = j;
			}
			
		
		}
			swap(arr[min] , arr[i]);
	}
}


int main()
{
	int arr[] = {8,4,5,3,1,3,4};
	SelectionSort(arr , 7);
	for(int i = 0 ; i < 7 ; i++)
	{
		cout<<arr[i]<<" ";
	}
}
