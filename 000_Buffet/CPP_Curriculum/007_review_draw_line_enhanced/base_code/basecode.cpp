// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	
	
	char s;
	cout<<"Please enter the symbol: ";
	cin >> s;
	
	int l = 0;
	cout<<"Please enter the length: ";
	cin >> l;
	
	int x = 0;
	cout<<"Please enter the x coordinate: ";
	cin >> x;
	
	int y = 0;
	cout<<"Please enter the y coordinate: ";
	cin >> y;
	
	for(int i=0; i<l; i++){
		gotoxy(x+i,y);
		cout<<s;
	}

}
