#include<intro.h>
#include<iostream.h>
#include<conio.h>

class B;
class A{
	int x;
	public:
		void setdata(int i){
			x=i;
		}
		friend void min(A,B);
};
class B{
	int y;
	public:
		void setdata(int i){
			y=i;
		}
		friend void min(A,B);
};
void min(A a, B b){
	if(a.x<=b.y){
		cout<<"A is smaller the B: "<<a.x<<" and "<<b.y<<endl;
	}else{
		cout<<"B is smaller then A: "<<a.x<<" and "<<b.y<<endl;
	}
}
void main(){
	clrscr();
	intro();
	A a;
	B b;
	a.setdata(10);
	b.setdata(20);
	min(a,b);
	getch();
}