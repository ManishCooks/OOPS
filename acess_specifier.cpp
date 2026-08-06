#include<bits/stdc++.h>
using namespace std;

class Base{
public:
    int64_t x;  //acessible from anywhere outisde,derived,base classes
protected:
    int64_t y;  //protected acessible only from derived,base classes
private:
    int64_t z;  //acessible only inside base classes
};

//Inside D's member functions, you can always access:
//Irrespective of the derived class being pvt,publiv,protected
//can access inherited public members
//can access inherited protected members
//cannot access inherited private members

class A:public Base{
    //x is public 
    //y is protected 
    //z cant be acessed 
};
class B:protected Base{
    //x is protected
    //y is protected
    //z cant be acessed
};
class C:private Base{
    //x is private
    //y is private
    //z cant be acessed
};

class Derived : public Base {
public:
    int64_t y;
};

/*
Derived object
+------------------+
| Base subobject   | <---- p
| x                |
+------------------+
| Derived          |
| y                |
+------------------+

Derived d;
Derived* dp = &d;
dp->x;  
dp->y;

Base* bp = &d;
only bp->x;
cant acess y because its type restricted not memory 
Derived* dp = static_cast<Derived*>(bp);
now
dp->x;dp->y; just casting fixes the problem indicating the type restriction
*/