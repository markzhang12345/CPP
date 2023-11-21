#include<iostream>
#include<string>
using namespace std;

class mystr {
public:
	string s;
	mystr() : s("") {};//无参构造
	mystr(string _s) :s(std::move(_s)) {};//有参构造
	mystr(mystr &&str) noexcept//无异常
		:s(std::move(str.s)){}//移动构造
};