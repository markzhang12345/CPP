#include <iostream>
using namespace std;

class Clock {
public:
    Clock(int newH, int newM, int newS);//��main�����ڽ��г�ʼ��
    void setTime(int newH , int newM, int newS );
    void showTime();
private:
    int hour, minute, second;
};

Clock::Clock(int newH, int newM, int newS) :hour(newH), minute(newM), second(newS){}

void Clock::setTime(int newH, int newM, int newS)
{
    hour = newH;
    minute = newM;
    second = newS;
}

inline void Clock::showTime()
{
    cout << hour << ":" << minute << ":" << second << endl;
}
int main() 
{
    Clock c(0,0,0);//�����˹��캯���Һ����βΣ��ʱ��������ʼֵ
    c.showTime();
    c.setTime(8,30,30);
    c.showTime();
    return 0;
}