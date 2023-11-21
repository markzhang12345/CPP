#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<cmath>
using namespace std;

class SavingAccount {
private:
	int id;
	double balance;
	double rate;
	int lastDate;
	double accumulation;
	void record(int date, double amount);
	double accumulate(int date)const {
		return accumulation + balance * (date - lastDate);
	}
public:
	SavingAccount(int date, int id, double rate);
	int getId() { return id; }
	double getBalance() { return balance; }
	double getRate() { return rate; }
	void deposit(int date, double amount);
	void withdraw(int date, double amount);
	void settle(int date);
	void show();
};

SavingAccount::SavingAccount(int date, int id, double rate) :id(id), balance(0), rate(rate), lastDate(date), accumulation(0) {
	cout << date << "\t#" << id << "is created" << endl;
}

void SavingAccount::record(int date, double amount) {
	accumulation = accumulate(date);
	lastDate = date;
	amount = floor(amount * 100 + 0.5) / 100;//����С�������λ
	balance += amount;
	cout << date << "\t#" << id << "\t" << amount << "\t" << balance << endl;
}

void SavingAccount::deposit(int date, double amount) {
	record(date, amount);
}

void SavingAccount::withdraw(int date, double amount) {
	if (amount > getBalance())
		cout << "Error: not enough money" << endl;
	else
		record(date, amount);
}

void SavingAccount::settle(int date) {
	double interest = accumulate(date) * rate / 365;
	if (interest != 0)
		record(date, interest);
	accumulation = 0;
}

void SavingAccount::show() {
	cout << "#" << id << "\tBalance: " << balance;
}

int main() {
	SavingAccount sa0(1, 21325302, 0.015);
	SavingAccount sa1(1, 12345678, 0.015);
	sa0.deposit(5, 500);
	sa1.deposit(25, 10000);
	sa0.deposit(45, 500);
	sa1.withdraw(60, 4000);
	sa0.settle(90);
	sa1.settle(90);
	sa0.show();	cout << endl;
	sa1.show();	cout << endl;
	return 0;
}