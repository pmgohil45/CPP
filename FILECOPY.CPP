#include<iostream.h>
#include<conio.h>
#include<a1.h>
#include<fstream.h>
void main()
{
	char c;
	fstream f1;
	fstream f2;
	clrscr();
	pd();
	f1.open("prakash.txt",ios::in | ios::out);
	cout<<"\nenter content of prakash.txt[ctrl+z to terminate] \n";
	while((c=cin.get())!=EOF)
	{
		f1.put(c);
	}
	f1.seekg(0);

	f2.open("prakash1.txt",ios::in | ios::out);
	cout<<"\n Content coppied in prakash1.txt \n";
	while(f1)
	{
		f2.get(c);
		cout<<c;
	}
	f2.close();
	f1.close();
	getch();
}