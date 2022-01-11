// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	cout<<"yeah we are starting c++"<<endl;
	int x;
	int y;
	cout<<"Enter the first number"<<endl;
	cin >>x;
	cout<<"Enter the second number"<<endl;
	cin >>y;
	cout<<"Enter the operation"<<endl;
	char z;
	cin >>z;
	if (z=='-')
	{
		cout<<x-y<<endl;
	}
	else if(z=='+')
	{
		cout<<x+y<<endl;
	}
	else if(z=='*')
	{
		cout<<x*y<<endl;
	}
	else if(z=='/')
	{
		cout<<x/y<<endl;
	}
	
}
