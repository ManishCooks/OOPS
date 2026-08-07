#include<bits/stdc++.h>
using namespace std;

/*
This type of polymorphism is achieved by function overloading or operator overloading. The
overloaded functions are invoked by matching the type and number of arguments.
Also known as static binding or early binding
Exec is faster than run_time since it is compiled pre-hand
*/

//Function overloading allows multiple functions to have the same name but different parameters.

class Base{
public:
    void display(){
        cout<<"hello"<<endl;
    }
    void display(int a){
        cout<<a<<endl;
    }
    void display(int a,double b){
        cout<<a<<b<<endl;
    }
}