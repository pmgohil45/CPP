#include<intro.h>
#include<iostream.h>
#include<conio.h>
class A{
	public:
		void a(){
			cout<<"\nClass A";
		}
};
class B{
	public:
		void b(){
			cout<<"\nClass B";
		}
};
class C : public A, public B{
	public:
		void c(){
			cout<<"\nClass C";
		}
};
class D : public C{
	public:
		void d(){
			cout<<"\nClass D";
		}
};
void main(){
	clrscr();
	intro();
	B b;
	C c;
	D d;
	c.a();
	c.b();
	d.a();
	d.b();
	d.c();
	d.d();
	getch();
}