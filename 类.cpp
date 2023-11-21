#include <iostream>
using namespace std;

class Clock {
public:
    //Clock(){}系统生成的隐含的默认构造函数
    void setTime(int newH=0 , int newM=0 , int newS =0);
    void showTime();
private:
    int hour, minute, second;
};


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
    Clock myclock;
    cout << "First time set and output:" << endl;
    myclock.setTime();
    myclock.showTime();
    cout << "Second time set and output:" << endl;
    myclock.setTime(8,30,30);
    myclock.showTime();
    return 0;
}