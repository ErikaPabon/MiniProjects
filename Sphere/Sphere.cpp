// Sphere.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h>

using namespace std;

class Sphere
{
private:

	int x;
	int y;
	int z;

	float radius;
public:

	void xCoordinate()
	{
		int a;
		cout << "\n Please enter the value of x:";
		cin >> a;
		x = a;
	}

	void yCoordinate()
	{
		int b;
		cout << "\n Please enter the value of y:";
		cin >> b;
		y = b;
	}

	void zCoordinate()
	{
		int c;
		cout << "\nPlease enter the value of z:";
		cin >> c;
		z = c;
	}

	void radiusSqrt()
	{
		float r;
		r = (x * x) + (y * y) + (z * z);
		radius = sqrt(r);
		cout << "\nThe radius is :" << radius << endl;
	}

	void display()
	{
		cout << "\nThe coordinates of the center are : ( " << x << "," << y << "," << z << " )" << endl;
	}

	void getvolume()
	{
		float volume;
		volume = (4 * 3.14 * (radius * radius * radius)) / 3;
		cout << "\nThe volume is:" << volume << endl;

	}

	void getarea()
	{
		float temp;
		temp = 4 * 3.14 * (radius * radius);
		cout << "\nThe surface area is:" << temp << endl;
	}
};
int main()
{
	Sphere s;
	s.xCoordinate();
	s.yCoordinate();
	s.zCoordinate();
	s.display();
	s.radiusSqrt();
	s.getvolume();
	s.getarea();
	return 0;

}

/*
Please enter the value of x:3

 Please enter the value of y:3

Please enter the value of z:4

The coordinates of the center are : ( 3,3,4 )

The radius is :5.83095

The volume is:830.016

The surface area is:427.04
*/

