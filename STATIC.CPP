#include<iostream.h>
#include<conio.h>
static class add{
	public:
	static  int a;
	static void f1(){
		cout<<"\nThis is static class function";
	}
};
int add::a=5;
void main(){
	clrscr();
	cout<<add::a;
	add::f1();
		getch();
}