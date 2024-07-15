// Inheritance Program (Hierarchical Inheritance)

#include<intro.h>
#include<iostream.h>
#include<conio.h>

class Employee {
    public:
     int ecode;
	 char name[30];
	void getdata()
	{
		cout<< "Enter employee details (ecode and name):\n";
		cin>> ecode >> name;
	}
};

class Fulltime : public Employee {
	public:
		int dailywages, noofdays;
		void getf()
		{
			cout<<"Enter Full - Time employee details (dailywages and noofdays): \n";
			cin>>dailywages>>noofdays;
		}
		void putf() {
			cout << "Full Time employee details are: \n\tECode: " << ecode << "\n\tName: " << name << "\n\tSalary: " << dailywages * noofdays << endl;
		}
};


class Parttime : public Employee {
	public:
		int hourlywages, noofwhrs;
		void getp()
		{
			cout<<"Enter Part - Time employee details (hourlywages and noofwhrs): \n";
			cin>>hourlywages>>noofwhrs;
		}
		void putp() {
			cout << "Part Time employee details are: \n\tECode: " << ecode << "\n\tName: " << name << "\n\tSalary: " << noofwhrs * hourlywages << endl;
		}
};

void main() {
	clrscr();
	Fulltime f[10];
	Parttime p[10];
	int n;
	cout<<"Enter Number of Employee: ";
	cin>>n;
	int i;
	for (i = 0; i < n; i++) {
		f[i].getdata();
		f[i].getf();
		f[i].putf();
	}

	for (i = 0; i < n; i++) {
        p[i].getdata();
        p[i].getp();
        p[i].putp();
    }
	getch();
}
