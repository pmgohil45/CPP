/* WAP a program for 3*3 array matrix */
#include<iostream.h>
#include<conio.h>
void main(){
	int a[3][3], i, j;
	clrscr();
	cout<<"Enter a number:";
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			cin>>a[i][j];
		}
		cout<<endl;
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}

	getch();
}