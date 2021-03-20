#include <iostream>
#include <math.h>

class Test
{
private:
	int a;
	int b;
	
public:
	int getA() {
		return a;
	}
	int getB()
	{
		return b;
	}
	
	void setA(int newA)
	{
		a = newA;
	}
	void setB(int newB)
	{
		b = newB;
	}
};

class Vector 
{
public:
	Vector(): x(0), y(0), z(0)
	{}
	Vector(double _x, double _y, double _z) : x(_x), y(_y), z(_z)
	{}
	void Show()
	{
		std::cout << "\n" << x << " " << y << " " << z;
	}
	double len() 
	{
		return sqrt(x*x + y*y + z*z);
	}
private:
	double x;
	double y;
	double z;
};

int main()
{
	Test newA, newB;
	newA.setA(1);
	newB.setB(3);
	std::cout << newA.getA() << " " << newB.getB() << std::endl;
	Vector v(10, 10, 10);
	v.Show();
	std::cout << std::endl << v.len();
}

