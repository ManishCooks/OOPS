#include<bits/stdc++.h>
using namespace std;

//This is called a pure virtual function.
// '= 0' means this function has no implementation here. Every concrete derived class must provide one.
//cant instantiate this class.
//Abstract classes are used for achieving polymorphism
// A derived class must override pure virtual function, otherwise,it will also become an abstract class.


class Shape{
public:
    virtual double area()=0;
    virtual double perimeter()=0;
};

class Circle:public Shape{
private:
    int64_t radius{};
public:
    Circle(int64_t r):radius(r){};
    double area override() const{
        return 3.14*radius*radius;
    }
    double perimeter override() const{
        return 2*3.14*radius;
    }
}

class Rectangle:public Shape{
private:
    int64_t length{};
    int64_t breadth{};
public:
    Rectangle(int64_t l,int64_t b):length(l),breadth(b){};
    double area override() const{
        return length*breadth;
    }
    double perimeter override() const{
        return 2*(length+breadth);
    }
}

int main(){
    Shape* s = new Rectangle(10,5);
    s->area();
    s->perimeter();
    s = new Circle(5);
    s->area();
    s->perimeter();
}