// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	
	
	
	char z;
	cout<<"Please enter the symbol:";
	cin >> z;
	
	int y = 0;
	cout<<"Please enter the height of the box:";
	cin >> y;
	
	int x = 0;
	cout<<"Please enter the width of the box:";
	cin >> x;
	
	int o = 0;
	while(true){
		int i = 0;
		while(true){
			i = i+1;
			gotoxy(0+i,6+o);
			cout<<z;
			if(i==x){
				break;
			}
		}
		o = o+1;
		if(o==y){
			break;
		}
	}
}
