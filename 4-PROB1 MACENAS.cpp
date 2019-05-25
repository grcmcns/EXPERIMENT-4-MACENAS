#include <iostream>
#include <conio.h>
#include <cstdlib> 
#include<iomanip> 
	
using namespace std; 
	  
void displaymenu()
	{ 
	cout<<"Choose an operation: \n";
	cout<<"1.Add \n"; 
	cout<<"2.Subtract \n"; 
	cout<<"3.Multiply \n"; 
	cout<<"4.Divide \n"; 
	cout<<"5.Modulus \n"; 
	} 
	int Add(int x,int y)
	{ 
	    return(x+y); 
	} 
	int Substract(int x, int y)
	{ 
	    return(x-y); 
	} 
	int Multiply(int x, int y)
	{ 
	    return(x*y); 
	} 
	float Divide(int x,int y)
	{ 
	      return(x/y); 
	} 
	int Modulus(int x, int y)
	{ 
	    return(x%y); 
	} 
	  
	int main(int argc, char *argv[]) 
	{ 
	displaymenu(); 
	int choice; 
	int x; 
	int y; 
	char confirm; 
	do
	{ 
	cout<<"\nEnter your choice (1-5):"; 
	cin>>choice; 
	cout<<"Enter your two numbers: "; 
	cin>>x;
	cin>>y;  
	switch(choice)
	{ 
	 case 1:cout<<"Result:"<<Add(x,y);
	 break; 
	 
	 case 2:cout<<"Result:"<<Substract(x,y);
	 break; 
	 
	 case 3:cout<<"Result:"<<Multiply(x,y);
	 break; 
	 
	 case 4:cout<<"Result:"<<Divide(x,y);
	 break; 
	 
	 case 5:cout<<"Result:"<<Modulus(x,y);
	 break; 
	 
	 default:cout<<"Invalid! Choose a number between 1 to 5."; 
	} 
	cout << "\n\nContinue?";                    
	cout<<"\nPress  y or Y to continue:"; 
	cin>>confirm;  
	}
	while(confirm=='y'||confirm=='Y'); 
	system("PAUSE"); 
	  
getch();
return EXIT_SUCCESS; 
}

