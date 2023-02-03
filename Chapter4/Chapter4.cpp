#include<bits/stdc++.h>
using namespace std;
class FDAcount
{
private:
    char *accounts;
    char *name;
    double balance;
    int term;

protected:
    double interest_rate;

public:
    FDAcount(char *ID, char *depositor, double amount, int period, double rate);
    ~FDAcount();
    void update()
	{
		balance = balance + balance * (interest_rate / 100.0) * (term / 12.0);
	}
    void show()
	{
		cout << "ID= " << accounts << endl;
		cout << "name= " << name << endl;
		cout << "balance= " << balance << endl;
		cout << "rate= " << interest_rate << endl;
		cout << "term= " << term << endl;
	}
    void fetch(char* ID, char* depositor, double amount)
	{
		accounts=ID;name=depositor;
		balance -= amount;
	}
};

FDAcount::FDAcount(char *ID, char *depositor, double amount, int period, double rate)
{
    if (amount < 0 || rate < 0){
        cout << "illegal data" << endl;
        exit(2);
    }
    if(!ID||!depositor){
        cout << "ID or name error"<< endl;
        exit(2);
    }
    balance = amount; term = period; interest_rate = rate;accounts=ID;name=depositor;
}
    FDAcount::~FDAcount()
    {
    }
int main()
{
	char name[10],  ID[20];
	cin >> ID >> name;
	FDAcount depositor(ID, name, 0.14, 12, 0.14);
	depositor.show();
	cin >> ID >> name;
	depositor.fetch(ID, name, 0.16);
	depositor.update();
	depositor.show();
	system("pause");
	return 0;
}
// 测试用例写死了，自己稍微灵活点