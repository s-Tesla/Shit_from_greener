#include<bits/stdc++.h>
#define PI 3.1415
using namespace std;


class Shape
{
public:
    Shape(){

    }

    
    virtual ~Shape(){

    } // 这里析构函数也要定义为虚函数，否则有warning[-Wdelete-non-virtual-dtor]

    virtual double GetArea(){
        return 0.0;
    } 

    virtual double GetPerimeter(){
        return 0.0;
    }

};
class Rectangle :public Shape  // 你奶奶的长方形的英文是Rectangle
{
private:
    double length,width;
public:
    Rectangle(double L=0,double W=0){
        length=L,width=W;
    }
    // Rectangle(Rectangle &p){
    //     length=p.length,width=p.width;
    // }

    ~Rectangle(){}

    double GetArea(){
        double Area=length*width;
        return Area;
    }

    double GetPerimeter(){
        double Perimeter=length+width;
        return Perimeter;
    }
};

class Circle :public Shape  // 你奶奶的长方形的英文是Rectangle
{
private:
    double radius;
public:
    Circle(double r=0){
        radius=r;
    }
    // Circle(Circle &p){
    //     radius=p.radius;
    // }

    ~Circle(){}

    double GetArea(){
        double Area=radius*PI*PI;
        return Area;
    }

    double GetPerimeter(){
        double Perimeter=2*PI*radius;
        return Perimeter;
    }

};

int main(){
    Rectangle *a=new Rectangle(10,20);
    double RectangleArea=a->GetArea();
    double RectanglePerimeter=a->GetPerimeter();
    Circle *b=new Circle(1);
    double CircleArea=b->GetArea();
    double CirclePerimeter=b->GetPerimeter();
    cout<<RectangleArea<<"\t"<<RectanglePerimeter<<"\t"<<CircleArea<<"\t"<<CirclePerimeter<<endl;
    system("pause");
    delete a;delete b;
    return 0;
}
