//WAP to area of circle, ractangle, triangle using constructor overloading
#include<iostream.h>
#include<conio.h>

class Stud{

	public:
	Stud(){
		cout<<"This is my new Constructor.";
	}
	Stud(int a, int b){
		cout<<"\nAddition of "<<a<<"+"<<b<<": "<<a+b;
	}
	Stud(int a, int b, int c){
		cout<<"\nAddition of "<<a<<"+"<<b<<"+"<<c<<": "<<a+b+c;
	}
};

class AreaCalculator {
public:
	double area;
	// Constructor for Circle
	AreaCalculator(int radius) {
		area = 3.14 * radius * radius;
		cout<<"\nCircle: "<<area;
	}
	// Constructor for Rectangle
	AreaCalculator(int length, int width) {
		area = length * width;
		cout<<"\nRectangle: "<<area;
	}
	// Constructor for Triangle
	AreaCalculator(double base, float height) {
		area = 0.5 * base * height;
		cout<<"\nTriangle: "<<area;
	}
};

void main(){
	clrscr();
	Stud s;
	Stud s1(5,6);
	Stud s2(1,2,3);
	// Calculate the area of a circle with radius 5
	AreaCalculator c(5);
	// Calculate the area of a rectangle with length 4 and width 6
	AreaCalculator r(4, 6);
	// Calculate the area of a triangle with base 4 and height 7
	AreaCalculator t(4.11,7.1);
	getch();
}
