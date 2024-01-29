#include<iostream.h>
#include<string.h>
#include<conio.h>
void get();
void swap();
void put();
struct stud
{
	int rn,total,m[3];
	char nm[20];
	char res[5];
	float avg;
}r[100];
void get()
{
	int c=0;
	for(int i=0 ; i<3 ; i++)
	{
		cout<<"Enter rn name";
		cin>>r[i].rn>>r[i].nm;
		for(int j=0; j<3;j++)
		{
			cout<<"Mark : ";
			cin>>r[i].m[j];
			r[i].total+=r[i].m[j];
			if(r[i].m[j]<40)
				c++;
		}
		if(c==0)
			strcpy(r[i].res,"Pass");
		else
			strcpy(r[i].res,"Fail");

	}


}
void swap()
{
       //	int n;
	struct stud temp;
       //	cout<<"Enter total no. of students :";
       //	cin>>n;
	for(int i=0 ; i<3 ; i++)
	{

		for(int j=i+1 ; j<3 ; j++)
		{
			if(r[i].total<r[j].total)
			{
				temp=r[j];
				r[j]=r[i];
				r[i]=temp;
			}
		}
	}
}
void put()
{
	for(int i=0 ; i<3 ; i++)
	{
		cout<<r[i].rn<<"\t"<<r[i].nm<<"\t";
		for(int j=0 ; j<3 ; j++)
		cout<<r[i].m[j]<<"\t";
		cout<<r[i].total<<"\t"<<r[i].res<<endl;
	}
}
void main()
{
	int n;
	clrscr();
	get();
	swap();
	cout<<"Rn\tNm\tm1\tm2\tm3\ttotal\tres\n";
	put();
	getch();
}