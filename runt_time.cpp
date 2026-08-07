#include<bits/stdc++.h>
using namespace  std;

//Redefining a function of a base class in the derived class called function overriding.
//Base class func is called overridden func and derived class func is called overriding func

class Shape{
    void draw(){
        cout<<"drawing shape\n";
    }

    virtual draw(){
        cout<<"drawing shape\n";
    }
};

class Circle:public Shape{
    void draw() override{
        cout<<"drawing circle\n";
    }
};

class Circle:public Rectangle{
    void draw() override{
        cout<<"drawing rectangle\n";
    }
};


int main(){
    Circle c;
    c.draw() // can do this and not use any virtual func
    /*
    Virtual functions exist because the caller knows only the interface (Base), while the object knows its actual type (Derived).
    Virtual funcs work and are designed for pointer based allocations and these types of allocations are useful when only base
    class is known,so that we can easily override a common member func among all the derived classes.
    It helps the code to be readable and modular.
    Virtual methods cant be static,can also be a friend func.Can have a virtual destructor but not a constructor
    */
   Shape *p = new Circle();
   p->draw();
}

/*
At compile time, the compiler only knows p is a Base*.
But it calls Derived::func()
Virtual func is implemented via a Virtual Table
The compiler creates an hidden ptr(vptr) and points to vtable
 p
 |
 V
+----------------------+
| vptr ------------+   |
+------------------|---+
| Base  members    |   |
+------------------+   |
| Derived members   |   |
+------------------+   |
                       |
                       V

              Derived vtable

              func ---> Derived::func

*/

