#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<iomanip>
using namespace std;
#define pi 3.141593
#define fence_price 35
#define concrete_price 20

class circle {
public:
	circle(float r);
	float circumference();
	float area();
private:
	float radius;
};

circle::circle(float r) {
	radius = r;
}

float circle::circumference() {
	return 2 * pi * radius;
}

float circle::area() {
	return pi * radius * radius;
}

int main()
{
	float radius;
	cout << "enter the radius" << endl;
	cin >> radius;
	circle pool(radius);
	circle poolrim(radius + 3);
	cout << fixed << setprecision(2) << "fence cost : " << (float)(poolrim.circumference() * fence_price)<<endl;
	cout << fixed << setprecision(2) << "concrete cost :" << (float)((poolrim.area() - pool.area()) * concrete_price) << endl;
	return 0;
}