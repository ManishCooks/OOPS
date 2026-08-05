#include<bits/stdc++.h>
using namespace std;

//if we create an object inside a member_function of another class its "use-a relation" (Dependency)

class Printer {
public:
    void print() {}
};

class Student {
public:
    void submit() {
        Printer p;      // local object (Student doesnt Own Printer He uses Printer to sumbit())
        p.print();
    }
};

//if we create an object inside another class its "has-a relation" (Composition/Aggregation)

class Engine {};

class Car {
private:
    Engine engine;
};

//if we extend a class its "is-a relation"

class Animal {};

class Dog : public Animal {};