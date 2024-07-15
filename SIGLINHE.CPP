#include<intro.h>
#include<iostream.h>
#include<conio.h>

class A{
	public:
		void a(){
			cout<<"This is A class.";
		}
};
class B{
	public:
		void b(){
			cout<<"\nThis is B class.";
		}
};
class C : public A , public B{
	public:
		void c(){
			cout<<"\nThis is C class.";
		}
};
void main(){
	clrscr();
	intro();
	C c;
	c.a();
	c.b();
	c.c();
	getch();

}