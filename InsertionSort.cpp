#include<iostream>

using namespace std;

void InsertionSort(int *Arr , int Size)
{//start of function
	int j  = 0 , Temp = 0;
	
	for(int i = 1 ; i < Size ; i++) // i = 1 because the first element is always sorted so no need to distrube that element
	{
		j = i;
		Temp = Arr[j];
		
		while(Temp < Arr[j-1] && j > 0)
		{
			Arr[j] = Arr[j-1];
			j--;	
		} 
		Arr[j] = Temp;
	}
}//end of Function


/*ABOUT THIS SORTING ALGORTHM

 BEST CASE  = O(N)
 WORST CASE = O (N^2)
 AVERAGE CASE = O (N^2)
 IT IS BEST FOR ONLINE DATA;
 */


int main()
{
	int *arr  = new int[10];
	
	for(int i = 0 ; i  < 10 ; i++)
	{
		cin>>*(arr+i);//Input from user;
	}
	cout<<"\nBeforeSorted"<<endl;
	for(int i = 0 ; i  < 10 ; i++)
	{
		cout<<*(arr+i)<<" " ;//Input from user;
	}
	InsertionSort(arr , 10);
	cout<<"\nAfterSorted"<<endl;
	for(int i = 0 ; i  < 10 ; i++)
	{
		cout<<*(arr+i)<<" " ;//Input from user;
	}
	
}
