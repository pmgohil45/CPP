#include<iostream.h>
#include<conio.h>

void put();
void get();

class volume1
{
	int n1,n2,n3;
	public:
		void get()
		{
			cout<<"Enter number 1 : ";
			cin>>n1;
			cout<<"Enter number 2 : ";
			cin>>n2;
			cout<<"Enter number 3 : ";
			cin>>n3;
		}
		void put()
		{
			int total = n1 * n2 * n3;
			cout<<"volume of cube : "<<total;
		}
		//friend volume1 calc(volume1 s1,volume1 s2, volume1 s3);
};

void main()
{
	volume1 v;
	clrscr();
	v.get();
	v.put();
	getch();
}