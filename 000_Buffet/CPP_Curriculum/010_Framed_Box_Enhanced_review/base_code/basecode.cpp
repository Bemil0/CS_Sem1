// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	
	char s;
	cout<<"Please enter the symbol: ";
	cin >> s;
	
	int x = 0;
	cout<<"Please enter the x coordinate: ";
	cin >> x;
	
	int y = 0;
	cout<<"Please enter the y coordinate: ";
	cin >> y;
	
	int w = 0;
	cout<<"Please enter the width of the box: ";
	cin >> w;
	
	int h = 0;
	cout<<"Please enter the height of the box: ";
	cin >> h;
	
	for(int o=0; o<h; o++){
		for(int i=0; i<w; i++){
			gotoxy(x+i,y+o);
			cout<<s;
		}
		cout<<endl;
	}
	
	for(int a=0; a<h-1; a++){
		for(int b=0; b<w-1; b++){
			gotoxy(x+b,y+a);
			cout<<" ";
		}
		//cout<<endl;
	}
}
