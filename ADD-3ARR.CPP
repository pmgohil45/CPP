/* 3D matrix addition */
#include<iostream.h>
#include<conio.h>
void main(){
	int a[3][3], b[3][3], c[3][3], i, j;
	clrscr();
	cout<<"Enter a matrix 1 values: ";
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			cin>>a[i][j];
		}
	}
	cout<<"\nEnter a matrix 2 values: ";
	for(i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cin>>b[i][j];
		}
	}

	//addition
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			c[i][j] = a[i][j] + b[i][j];
		}
	}

	//display
	cout<<"Result Materix is "<<endl;
	for(i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<c[i][j]<<" ";

		}
		cout<<endl;
	}




	getch();
}