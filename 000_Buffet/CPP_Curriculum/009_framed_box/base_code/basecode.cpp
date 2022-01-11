// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	
	char s;
	cout<<"Please enter the symbol: ";
	cin >> s;
	
	int w = 0;
	cout<<"Please enter the width of the box: ";
	cin >> w;
	
	int h = 0;
	cout<<"Please enter the height of the box: ";
	cin >> h;
	
	for(int o=0; o<h; o++){
		for(int i=0; i<w; i++){
			cout<<s;
		}
		cout<<endl;
	}
	
	for(int a=0; a<h-2; a++){
		for(int b=0; b<w-2; b++){
			gotoxy(2+b,7+a);
			cout<<" ";
		}
		//cout<<endl;
	}

}
