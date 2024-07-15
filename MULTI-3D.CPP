/* 3D matrix multiplication  */
#include<iostream.h>
#include<conio.h>
void main(){
	int a[2][2], b[2][2], c[2][2], i, j, k;
	clrscr();
	cout<<"Enter a matrix 1 values: ";
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			cin>>a[i][j];
		}
	}
	cout<<"\nEnter a matrix 2 values: ";
	for(i=0;i<2;i++){
		for(int j=0;j<2;j++){
			cin>>b[i][j];
		}
	}

	// Initializing elements of matrix mult to 0.
	for(i=0;i<2;++i)
		for(j=0;j<2;++j)
		{
			c[i][j]=0;
		}

	// Multiplying matrix a and b and storing in array mult.
	for(i = 0; i < 2; ++i){
		for(j = 0; j < 2; ++j){
			for(k = 0; k < 2; ++k)
			{
				c[i][j] += a[i][k] * b[k][j];
			}
		}
	}

	// Displaying the multiplication of two matrix.
	cout << endl << "Output Matrix: " << endl;
	for(i = 0; i < 2; ++i){
		for(j = 0; j < 2; ++j)
		{
			cout << " " << c[i][j];
			if(j == 2-1)
				cout << endl;
	}	}

	getch();
}