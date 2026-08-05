#include<bits/stdc++.h>
using namespace std;

//Derived class inherits all the properties of base class without
//changing the properties of base class and may add new features
//to its own derived class.
//code reusability,polymorphism
//Inheritance models an "is-a" relationship.
/*
+----------------+
| par_member     |   <-- Parent Class
+----------------+
| child_member   |   <-- Child Class
+----------------+
*/

/*
What gets inherited?

Inherited:
data members
member functions
static members
virtual functions

Not inherited:
constructors
destructor 
assignment operator 

*/

class Rectangle{
private:
    int64_t length{1};
    int64_t width{1};

public:
    Rectangle(int64_t l,int64_t w):length(l),width(w){};
    int64_t get_length() const{
        return length;
    }
    int64_t get_width() const{
        return width;
    }
    void set_length(int64_t l){
        length = l;
    }
    void set_width(int64_t w){
        width = w;
    }
    int64_t area() const{
        return length*width;
    }
    int64_t perimeter() const{
        return 2*(length+width);
    }
    ~Rectangle(){};

};

class Cuboid : public Rectangle{
private:
    int64_t height{1};

public:
    //Every base-class subobject must be constructed before the derived class constructor body begins.
    //If base class doesnt have any base constructor then the constructor should be called explicitly
    Cuboid(int64_t l,int64_t w,int64_t h):Rectangle(l,w),height(h){};
    int64_t get_height() const{
        return height;
    }
    void set_height(int64_t h){
        height = h;
    }
    int64_t volume() const{
        return get_height()*get_length()*get_width();
    }
    ~Cuboid(){};
};

int main(){
    Cuboid c(2,3,4);
    cout <<"Volume is "<<c.volume()<<endl;
}