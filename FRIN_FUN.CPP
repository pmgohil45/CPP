/*
  create a two class DM and DB which stores value of distance DM contains
  meter and centimeter.
  DB contains feet and inches.
  WAP that create a friend function which add values of DM and DB and return
  DM DB type values.
  Hint : convert all value in centimeter than convert it in DB and DM
*/
#include<conio.h>
#include<iostream.h>
#include<a1.h>

class DB;
class DM
{
	float m, cm;
		public:
			void get()
			{
				cout<<"Enter meter : ";
				cin>>m;
				cout<<"Enter centimeter : ";
				cin>>cm;
			}
			void put()
			{
				cout<<"\nMeter : "<<m<<"\tCentimeter : "<<cm;
			}
			friend DM add(DM x, DB y);
			friend DB add(DB x, DM y);
};
class DB
{
	float i, f;
		public:
			void get()
			{
				cout<<"Enter inche : ";
				cin>>i;
				cout<<"Enter feet : ";
				cin>>f;
			}
			void put()
			{
				cout<<"\nInche : "<<i<<"\tFeet : "<<f;
			}
			friend DB add(DB x, DM y);
			friend DM add(DM x, DB y);
};
DM add(DM x, DB y)
{
	DM z;
	float am, n1, n2, n3, n4, ac, tc;
	n1 = x.m*100;
	n2 = x.cm;
	n3 = y.f*30;
	n4 = y.i*2.5;
	tc = n1+n2+n3+n4;
	z.m = tc/100;
	z.cm = tc-(z.m*100);
	return z;
}
DB add(DB x, DM y)
{
	DB z;
	float n1, n2, n3, n4, ti, tc;
	n1 = y.m*100;
	n2 = y.cm;
	n3 = x.f*30;
	n4 = x.i*2.5;
	cout<<"\nN1 : "<<n1;
	cout<<"\nN2 : "<<n2;
	cout<<"\nN3 : "<<n3;
	cout<<"\nN4 : "<<n4;
	tc = n1+n2+n3+n4;
	cout<<"\nTc : "<<tc<<endl;
	ti = tc/2.5;
	z.f = ti/12;
	z.i = ti-(z.f*12);
	return z;
}
void main()
{
	DM a1, a2;
	DB b1, b2;
	clrscr();
	pd();
	a1.get();
	b1.get();
	a2=add(a1,b1);
	b2=add(b1,a1);
	cout<<"\n Obj a1 : ";
	a1.put();
	cout<<"\n Obj b1 : ";
	b1.put();
	cout<<"\n Obj a2 : ";
	a2.put();
	cout<<"\n Obj b2 : ";
	b2.put();
	getch();
}
