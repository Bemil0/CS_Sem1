// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	cout<<"yeah we are starting c++"<<endl;
	
	int x = 4;
	int y = 25;
	while(true){
		x = x+1;
		cout<<x<<endl;
		if(x==y){
			break;
		}
		
	}
	cout<<endl<<endl;
	int a = 16;
	int z = 5;
	while(true){
		a = a-1;
		cout<<a<<endl;
		if(a==z){
			break;
		}
	}
	cout<<endl<<endl;
	for(int i = 5; i <= 25; i = i+1){
		cout<<i<<endl;
	}
	cout<<endl<<endl;
	for(int j = 15; j >= 5; j = j-1){
		cout<<j<<endl;
	}
		cout<<endl<<endl;
	for(int i = 123; i <= 200; i = i+2){
		cout<<i<<endl;
	}
		cout<<endl<<endl;
	for(int j = 1253; j >= 55; j = j-7){
		cout<<j<<endl;
	}
}
