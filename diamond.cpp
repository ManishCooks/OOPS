#include<bits/stdc++.h>
using namespace std;

/*
The diamond problem occurs in multiple inheritance when two intermediate base classes inherit from the same base class, and a derived class inherits from both intermediates. This causes the derived object to contain two separate copies of the common base-class object, leading to ambiguity. Virtual inheritance solves this by ensuring only one shared base-class subobject exists.
*/

class R {
public:
    int64_t x{};
};

class A : public R {};

class B : public R {};

class C : public A, public B {};

/*
Here C contains both A and B as a subobject
when an object is acessed the compiler cant decide whose subobject is being acessed ("ambiguous member access")
The problem is not when we define but when we access the parent's members and we can access the child's own members 
while we can still access parents members when we do explicit writing
C.A::x
C.B::x
C.x->ambiguous
*/

/*
Memory Layout
+----------------+
| shared R       |
| x              |
+----------------+
+----------------+
| A part         |
+----------------+
+----------------+
| B part         |
+----------------+

Since the base class is shared and not embedded inside the parent's class there is no ambiguous member acess and only base class members are acessed
*/

class R {
public:
    R(int x) {}
};

class A : virtual public R {
public:
    A() : R(1) {}     // ignored when constructing C
};

class B : virtual public R {
public:
    B() : R(2) {}     // ignored when constructing C
};

class C : public A, public B {
public:
    C() : R(3), A(), B() {}
};