// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	cout<<"yeah we are starting c++"<<endl;
	int x = 0;
	char y = 'a';
	while(true){
		cout<<"you've been gnomed"<<endl;
		cin >> y;
		x = x + 1;
		if(x == 100){
			break;
		}
		if (y == 'q'){
			cout<<"Look behind you, gg bro"<<endl;
			break;
			
		}
	}
	
	
	while(true)
	{
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
		cout<<"If you would like to quit type q. If you would like to start again then type anything else."<<endl;
		char i;
		cin >>i;
		if(i=='q')
		{
			break;
		}
		
		
	}

}
