// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here

	
	for(int i=0; i<5; i++){
		
		gotoxy(1,1+i);
		cout<<"*";
		gotoxy(3,1+i);
		cout<<"*";
		gotoxy(15,1+i);
		cout<<"*";
		gotoxy(17,1+i);
		cout<<"*";
		sleep(1);
		
		gotoxy(1,1+i);
		cout<<' '<<endl;
		gotoxy(3,1+i);
		cout<<' '<<endl;
		gotoxy(15,1+i);
		cout<<' '<<endl;
		gotoxy(17,1+i);
		cout<<' '<<endl;
		
	}

}
