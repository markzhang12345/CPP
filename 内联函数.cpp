#include<iostream>
using namespace std;

const double pi = 3.141592653589793;


inline double calArea(double r)
{
	return pi * r * r;
}
int main()
{
	double r = 3.0;
	double area = calArea(r);
	cout << area << endl;
	return 0;
}