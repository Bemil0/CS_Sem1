// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	cout<<"yeah we are starting c++"<<endl;
	
	
	char x;
	cout<<"Please enter the symbol:";
	cin >> x;
	
	int y = 0;
	int z = 0;
	cout<<"Please enter the length:";
	cin >> y;
	char n;
	cout<<"Please enter h for horizontal, or v for vertical:";
	cin >> n;
	if(n=='v'){
		while(true){
			z = z+1;
			cout<<x<<endl;
			if(z==y){
				break;
			}
		}

	}
	if(n=='h'){
		while(true){
			z = z+1;
			cout<<x;
			if(z==y){
				break;
			}
		}

	}
	

}
