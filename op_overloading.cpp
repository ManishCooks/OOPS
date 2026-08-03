#include<bits/stdc++.h>
using namespace std;

class Complex {
private:
    int64_t real{};
    int64_t img{};
     
public:
    Complex(int64_t r,int64_t i):real(r),img(i){}
      
    //Operator Overloading (Almost all ops can be overloaded arithmetic,comp,bit,logical,yada yada...)
    //can be called like
    //Complex c1, c2;
    //Complex c3 = c1 + c2;
    //Compiler translates it to c1.operator+(c2);
    Complex operator+(const Complex& c) const {
        Complex temp;
        temp.real = real + c.real;
        temp.img = img + c.img;
        return temp;
    }

    Complex operator-(const Complex& c) const {
        Complex temp;
        temp.real = real - c.real;
        temp.img = img - c.img;
        return temp;
    }

    //A friend function is not a member function. It is an ordinary (non-member) function that is given permission to access the class's private and protected members.
    friend Complex operator+(const Complex&,const Complex&);

};

Complex operator+(const Complex& a, const Complex& b) {
    return {a.real + b.real, a.img + b.img};
}

//Complex c3 = c1 + c2
//Becomes operator+(c1, c2) there is no this pointer

//this Pointer
/*
&->address and reference operator
*->pointer and dereference operator
when we call 
A obj;
obj.func()=>func(&obj)(passing the address of the object of class A)
so func should expect a pointer called or named "this"
so conceptually func(A* this){} (cant declare this way but its the mental model)
this->x same as (*this).x
*/