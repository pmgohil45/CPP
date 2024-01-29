#include<iostream.h>
#include<fstream.h>
#include<conio.h>
void main()
{
	ifstream f1;
	ofstream f2;
	char c;
	clrscr();
	f1.open("prakash.txt");
	f2.open("prakash1.txt");
	while(10)
	{
		if(c==EOF)
			break;
		cout<<"\nChar: "<<c;
		cin>>c;
	}
	f1.close();
	f2.close();
	getch();
}