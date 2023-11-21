#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<cmath>
using namespace std;

class point {
public:
	point(int x = 0, int y = 0) :x(x), y(y) {}
	int getX() { return x; }
	int getY() { return y; } 
	friend float dist(point &p1, point &p2);
private:
	int x, y;
};
float dist(point &p1, point &p2) {
	double x = p1.x - p2.x;
	double y = p1.y - p2.y;
	return static_cast<float>(sqrt(x * x + y * y));
}
int main()
{
	point myp1(1, 1), myp2(4, 5);
	cout << "the distance is : " << dist(myp1, myp2) << endl;
	return 0;
}