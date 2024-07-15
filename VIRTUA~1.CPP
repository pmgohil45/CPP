/*
create a base class shape derived three classes circle, sphere, and cylinder from shape class write a C++ program to calculate area of circle, sphere and cylinder using pure virtual function
*/

#include<intro.h>
#include<iostream.h>
#include<conio.h>
#include<math.h>

const double PI = 3.14159265358979323846;

// Base class Shape
class Shape {
public:
	virtual double area() const = 0; // Pure virtual function
};

// Derived class Circle
class Circle : public Shape {
private:
	double radius;
public:
	Circle(double r) : radius(r) {}

	double area() const {
		return PI * radius * radius;
	}
};

// Derived class Sphere
class Sphere : public Shape {
private:
	double radius;
public:
	Sphere(double r) : radius(r) {}

	double area() const {
		return 4 * PI * radius * radius;
	}
};

// Derived class Cylinder
class Cylinder : public Shape {
private:
	double radius, height;
public:
	Cylinder(double r, double h) : radius(r), height(h) {}

	double area() const{
		return 2 * PI * radius * (radius + height);
	}
};

void main() {
	clrscr();
	intro(); // load from intro.h custom header file
	// Create instances of each shape
	Circle circle(5.0);
	Sphere sphere(5.0);
	Cylinder cylinder(5.0, 10.0);

	// Calculate and display the area of each shape
	cout << "Area of Circle: " << circle.area()<<endl;
	cout << "Surface Area of Sphere: " << sphere.area()<<endl;
	cout << "Surface Area of Cylinder: " << cylinder.area()<<endl;

	getch();
}