/* WAP a program to find max min size of 2D array */
#include<iostream.h>
#include<conio.h>
void main(){
	int a[3][3], min, max, i, j;
	clrscr();
	cout<<"Enter a number:";
	for(i=0;i<3;i++){
	   for(j=0;j<3;j++){
		  cin>>a[i][j];
	   }
	   cout<<endl;
	}
	max = a[0][0];
	min = a[0][0];
	for(i=0;i<3;i++){
	   for(j=0;j<3;j++){
		  cout<<a[i][j]<<" ";
		  if(a[i][j] > max){
			 max=a[i][j];
		  }
		  if(a[i][j] < min){
			 min=a[i][j];
		  }
		  cout<<" ";
	   }
	   cout<<endl;
	}
	cout<<endl<<"Max: "<<max<<endl;
	cout<<"Min: "<<min<<endl;
	getch();
}