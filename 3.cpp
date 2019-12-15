#include <iostream>
#include<string>
#include<cmath>
using namespace std;
class Triangle
{
private:
	int x, y, z;
public:
	void area();
	void circulate();
	Triangle(int a, int b, int c);
};
Triangle::Triangle(int a, int b, int c) {
	x = a;
	y = b;
	z = c;
}
//计算面积
void Triangle::area()
{
	float p;
	p = (x + y + z) / 2;
	cout << "三角形的面积为：";
	cout << sqrt(p*(p - x)*(p - y)*(p - z)) << endl;
}
void Triangle::circulate() 
{
	cout << "三角形的周长为：";
	cout << x + y + z << endl;
}

int main()
{
	Triangle t(3, 4, 5);
	t.area();
	t.circulate();
	system("pause");
	return 0;
}