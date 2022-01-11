// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	gotoxy(5,5);
	cout<<"   **"<<endl;
	gotoxy(5,6);
	cout<<"   ^^"<<endl;
	gotoxy(5,7);
	cout<<"  ^^^^"<<endl;
	gotoxy(5,8);
	cout<<" ^^^^^^"<<endl;
	gotoxy(5,9);
	cout<<"^^^^^^^^"<<endl;
	gotoxy(5,10);
	cout<<"   []"<<endl;
	
	for(int i=0; i<6; i++){
		gotoxy(8,7);
		cout<<'^'<<endl;
		gotoxy(10,8);
		cout<<'^'<<endl;
		gotoxy(7,9);
		cout<<'^'<<endl;
		sleep(1);
		gotoxy(8,7);
		cout<<'*'<<endl;
		gotoxy(10,8);
		cout<<'*'<<endl;
		gotoxy(7,9);
		cout<<'*'<<endl;
		
		
		gotoxy(1,4+i-1);
		cout<<' '<<endl;
		gotoxy(3,2+i-1);
		cout<<' '<<endl;
		gotoxy(15,4+i-1);
		cout<<' '<<endl;
		gotoxy(17,2+i-1);
		cout<<' '<<endl;
		gotoxy(1,4+i);
		cout<<"*"<<endl;
		gotoxy(3,2+i);
		cout<<"*"<<endl;
		gotoxy(15,4+i);
		cout<<"*"<<endl;
		gotoxy(17,2+i);
		cout<<"*"<<endl;
		sleep(1);
	}
	
}
