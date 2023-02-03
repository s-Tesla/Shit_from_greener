#include<iostream>
using namespace std;
class Date
{
private:
    int day_=0;
    int month_=0;
    int year_=0;
public:
    Date(int day, int month, int year)
    {
        day_ = day, month_ = month, year_ = year;
    }
    Date() {}
    void display()
    {
        cout << year_ << "-" << month_ << "-" << day_ << endl;
    }
};
class Person
{
protected:
    char* first_name_=name;
    char* last_name_=name1;
    Date birthday_;
public:
    Person(char* firstname, char* lastname, Date& birthday) {
        first_name_ = firstname;
        last_name_ = lastname;
        birthday_ = birthday;
    }
    Person() {}
    char name[10] = "", name1[10] = "";
};
class Student :public Person

{
private:
    int student_id_;
public:
    Student(char* firstname, char* lastname,  int student_id,Date& birthday):Person(firstname, lastname, birthday) {
        ;
        student_id_ = student_id;
    }
    void display() {
        cout << first_name_ << endl;
        cout << last_name_ << endl;
        cout << student_id_ << endl;
        birthday_.display();
    }
};
class Professer :public Person

{
private:
    int Professer_id_;
public:
    Professer(char* firstname, char* lastname, int Professer_id,Date& birthday ):Person(firstname, lastname, birthday){
        Professer_id_ = Professer_id;
    }
    void display() {
        cout << first_name_ << endl;
        cout << last_name_ << endl;
        cout << Professer_id_ << endl;
        birthday_.display();
    }
};
int main() {
    Date bir(31, 2, 2000);
    char name[10] = "ww", name2[10] = "www";
    Student stu(name, name2, 12 ,bir);
    stu.display();
    Professer prof(name2, name, 231,bir);
    prof.display();
    system("pause");
    return 0;
}
// 测试用例写死了，自己稍微灵活点



