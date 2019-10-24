#include<iostream>
using namespace std;

void BubbleSort(int *Arr , int Size)
{int Temp = 0;
	int count = 0;
	
	for(int Round = 1; Round < Size ; Round++)
	{
		for(int i  = 0 ; i < Size-1 ; i++ )
		{
		//	cout<<"i = "<<i<<"Count = "<<count++<<endl;
			//cout<<"Size "<<Size<<" - "<<"Round"<<Round<<" i "<< i<<endl;
				cout<<"Arr[i]  "<<Arr[i]<<"  Arr[i+1] "<< Arr[i+1]<<" "<<endl;
			if(Arr[i] > Arr[i+1])
			{
			
				Temp = Arr[i+1];
				Arr[i+1] = Arr[i];
				Arr[i] = Temp;
				//cout<<"Arr[i]*  "<<Arr[i]<<"  Arr[i+1]* "<< Arr[i+1]<<" "<<endl;
			}
		}
		//	cout<<"Round = " <<Round<<endl;
	}
}


int main()
{
	int Arr[] = {1,2,4,3,5,6};
    BubbleSort(Arr , 6);

	
	cout<<"After Sorting"<<endl;
	for(int i = 0 ; i < 6 ; i++)
	{
		
		cout<<Arr[i]<<" ";
	}



}
