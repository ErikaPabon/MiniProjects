#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    const double PI = 3.14159;
    double area, circumference;

    double volume;
    double surface;

    double r;
    double radius;

    cout << "This program calculates the area and circumference of a circle.\n";
    cout << "What is the radius of the circle ? ";
    cin >> r;

    cout << "This program calculates the volume and surface of a sphere with the radius.\n";
    cout << "What is the radius of the sphere? ";
    cin >> radius;



    circumference = 2 * (PI) * r;
    area = PI * pow(r,2.0);

    cout << "The circumference is: " << circumference << " and the area of the circle: " << area << endl;

    return 0;

    volume = 4 * PI * pow(radius, 3.0) / 3;
    surface = 4 * PI * pow(radius, 2.0);

    cout << "The volume of the sphere is: " << volume << "  and the surface area is: " << surface << endl;
    return 0;

}

//This program calculates the area and circumference of a circle.
What is the radius of the circle ? 7.35
This program calculates the volume and surface of a sphere with the radius.
What is the radius of the sphere ? 45
The circumference is : 46.1814 and the area of the circle : 169.717

C : \Users\eriik\source\repos\RadiusCircle\Debug\RadiusCircle.exe(process 13624) exited with code 0.
Press any key to close this window . . .

