#include <iostream>
using namespace std;
//��������±���������Ĭ�ϵ����ظ��ƹ��캯��
class Point {
public:
	Point(int xx = 0, int yy = 0 ) {
		x = xx;
		y = yy;
	}
	Point(Point& p);
	int getX() { return x; }
	int getY() { return y; }
private:
	int x, y;
};

Point::Point(Point& p) {
	x = p.x;
	y = p.y;
	cout << "Calling the copy constructor" << endl;
}

int main()
{
	Point a(1, 2);
	Point b(a);
	Point  c = a;
	cout << b.getX() << endl;
	return 0;
}
