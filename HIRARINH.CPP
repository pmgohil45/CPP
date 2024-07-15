#include<intro.h>
#include<iostream.h>
#include<conio.h>
class A{
	public:
		a(){
			cout<<"\nClass A";
		}
};
class B : public A{
	public:
		b(){
			cout<<"\nClass B";
		}
};
class C : public B{
	public:
		c(){
			cout<<"\nClass C";
		}
};
class D : public B{
	public:
		d(){
			cout<<"\nClass D";
		}
};
void main(){
	clrscr();
	intro();
	cout<<"Object b calling:";
	B b;
	b.a();
	b.b();

	cout<<"\n\nObject c calling:";
	C c;
	c.a();
	c.b();
	c.c();

	cout<<"\n\nObject d calling:";
	D d;
	d.a();
	d.b();
	d.d();
	getch();
}