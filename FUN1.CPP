#include<iostream.h>
#include<conio.h>

int add(int a, int b){
	return(a+b);
}
double add(double a, double b){
	return(a+b);
}
float add(float a, float b){
	return(a+b);
}

void main(){
	clrscr();
	cout<<"Integer Addition: "<<add(2,2);
	cout<<"\nDouble Addition: "<<add(2.2,2.2);
	cout<<"\nFloat Addition: "<<add(2.2,2.2);
	getch();
}