#include <iostream>
#include <iomanip>
#include <windows.h>
using namespace std;
//ª˘¿‡Shape
class Shape
{
public:
	Shape() {}
	virtual ~Shape() {}
	virtual void printArea() const {}
	virtual void shapeName() const = 0;
};
class Circle : public Shape
{
public:
	Circle(double r) { radius = r; }
	~Circle() {}
	virtual void printArea() const { cout << setw(8) << "area=" << 3.14159*radius*radius << endl; }
	virtual void shapeName() const { cout << "Circle "; }
protected:
	double radius;
};
class Rectangle : public Shape
{
public:
	Rectangle(double a, double b) { x = a; y = b; }
	~Rectangle() {}
	virtual void printArea() const { cout << setw(5) << "area=" << x * y << endl; }
	virtual void shapeName() const { cout << "Rectangle "; }
protected:
	double x, y;
};
class Triangle : public Shape
{
public:
	Triangle(double a, double h) { x = a; y = h; }
	~Triangle() {}
	virtual void printArea() const { cout << setw(6) << "area=" << (x*y) / 2 << endl; }
	virtual void shapeName() const { cout << "Triangle "; }
protected:
	double x, y;
};
int main()
{
	Circle c(5);
	Rectangle rec(3, 4);
	Triangle tr(4, 5);
	Shape *pt;
	pt = &c;
	pt->shapeName();
	pt->printArea();
	pt = &rec;
	pt->shapeName();
	pt->printArea();
	pt = &tr;
	pt->shapeName();
	pt->printArea();
	system("pause");
	return 0;
}