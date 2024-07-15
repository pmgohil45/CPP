#include<iostream.h>
#include<conio.h>
#include<intro.h>
class A{
	public:
		void a(){
			cout<<"\nA Class";
		}
};
class B : public A{
	public:
		void b(){
			cout<<"\nB Class";
		}
};
class C : public B{
	public:
		void c(){
			cout<<"\nC Class";
		}
};
void main(){
	clrscr();
	intro();
	B b;
	C c;
	b.a();
	c.a();
	c.b();
	c.c();
	getch();
}
