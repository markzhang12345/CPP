#include<iostream>
#include<string>
using namespace std;

class mystr {
public:
	string s;
	mystr() : s("") {};//�޲ι���
	mystr(string _s) :s(std::move(_s)) {};//�вι���
	mystr(mystr &&str) noexcept//���쳣
		:s(std::move(str.s)){}//�ƶ�����
};