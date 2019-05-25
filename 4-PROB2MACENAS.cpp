#include<iostream>
#include<conio.h>
using namespace std;
int main()
	{
		int arraysize;
		cout<<"Selection or Bubble Sorting...\n\n"; 
		cout<<"Enter array size: ";
		cin>>arraysize;
		cout<<"Enter the "<<arraysize<<" elements: \n";
		
		int elements[arraysize];
		for(int i = 0; i < arraysize; i++)
		{
			cin>>elements[i];
		}
		
		cout<<"\nYour data: ";
		for(int i = 0; i < arraysize; i++)
		{
			cout<<elements[i]<<" ";
		}
		cout<< "\n";
		
		int s;
		for(int x = 0; x < arraysize; x++)
		{
			for(int y = x + 1; y < arraysize; y++)
			{
				if(elements[x] > elements[y])
				{
					s = elements[x];
					elements[x] = elements[y];
					elements[y] = s;
				}
			}
		}
		cout<<"\nAfter using selection or bubble sort..\n\n";
		cout<<"Sorted data: ";
		for(int i = 0; i < arraysize; i++)
		{
			cout<<elements[i]<<" ";
		}
		getch();
		return 0;
	}


