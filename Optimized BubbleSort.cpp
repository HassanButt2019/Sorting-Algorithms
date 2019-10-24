#include<iostream>

using namespace std;

void BubbleSortWithBool( int *arr, int size)
{
	int temp;
	int count = 0;
	bool flag=true;
	for(int i=0; i<size-1 && flag; i++)
	{
		flag = false;
		//cout<<flag<<endl;;
		for(int j=0 ; j<size-i-1 ; j++)
		{
			cout<<"Arr[i]  "<<arr[j]<<"  Arr[i+1] "<< arr[j+1]<<" "<<endl;
			if(arr[j]>arr[j+1])
			{
				temp=arr[j+1];
				arr[j+1]=arr[j];
				arr[j]=temp;
				flag=true;
			}
		}
		if (flag == false) 
        {
        	cout<<"i = "<<i<<endl;
			break; 
		}
	}
}

int main()
{
	int arr[] = {1,2,4,3,4};
    BubbleSortWithBool(arr , 5);

	
	cout<<"After Sorting"<<endl;
	for(int i = 0 ; i < 5 ; i++)
	{
		
		cout<<arr[i]<<" ";
	}



}
