#include<bits/stdc++.h>
using namespace std;

class Account{
    private:
        string name{};
        double balance{};
        int32_t* marks;
    
    public:
        //Default Constructor
        Account(){
            name = "Manish";
            balance = 569.23;
        }
        //Parameterized Constructor
        //can be overloaded
        Account(string name,double b):name(name),balance(b){}
        //Constructor Initialization List(above one)
        //The members are initialized directly before the constructor body runs.
        //Assignment Inside Constructor Body
        //The members are first default-initialized and then assigned new values in the constructor body.
        //Prefer List Init 
        /*
        a("Alice",1)
        Memory for a is allocated.
        b is initialized directly with 1.
        name is constructed directly as "Alice".
        The constructor body executes (it's empty here).
        Memory for a is allocated.
        b is default-initialized (for a plain double, this may be an indeterminate value).
        name is default-constructed (an empty string).
        Constructor body runs.
        b = i;
        b = n;
        Assignment Inside Constructor Body Doesnt work for const or referenced vars.
        */
        Account(string name, double b) {
            this->name = name;
            this->balance = b;
        }
        //Copy Constructor (Shallow Copy)
        //if passed without reference could cause infinite recursion
        Account(const Account& obj){
            name = obj.name;
            balance = obj.balance;
        }
        //Deep Copy Constructor Used when any of the member variables are pointers
        //Shallow Copy Copies the pointer/address which has shared memory,double deletion
        //Deep Copy allocates new memory each object has its own memory
        //Because pointer vars point to an address so copy doesnt make sense
        Account(const Account& obj){
            name = obj.name;
            balance = obj.balance;
            marks = new int32_t(*obj.marks);
        }

};

int main(){
    f
}