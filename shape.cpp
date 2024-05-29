#include<iostream>
#include<cmath>
using namespace std;
class shape{
    public:
    float a;
    float b;
    float c;
    virtual void area()=0;
    virtual void perimeter()=0;
};
class triangle:public shape{
    public:
    triangle(){
        cout<<"Enter the three sides of triangle:";
        cin>>a>>b>>c;
    }
    void area(){
        float s=(a+b+c)/2;
        float area=sqrt(s*(s-a)*(s-b)*(s-c));
        cout<<"Area of triangle is "<<area<<endl;
    }
    void perimeter(){
        float perimeter=a+b+c;
        cout<<"Perimeter of triangle is "<<perimeter;
    }
};
class rectangle:public shape{
    public:
    rectangle(){
        cout<<"Enter the  sides of rectangle:";
        cin>>a>>b;
    }
    void area(){
        float area=a*b;
        cout<<"Area of rectangle is "<<area<<endl;
    }
    void perimeter(){
        float perimeter=2*(a+b);
        cout<<"Perimeter of rectangle is "<<perimeter;
    }
};
class circle:public shape{
    public:
    circle(){
        cout<<"Enter the radius of circle:";
        cin>>a;
    }
    void area(){
        float area=M_PI*a*a;
        cout<<"Area of circle is "<<area<<endl;
    }
    void perimeter(){
        float perimeter=2*M_PI*a;
        cout<<"Perimeter of circle is "<<perimeter;
    }
};
class square:public shape{
    public:
    square(){
        cout<<"Enter the side of square:";
        cin>>a;
    }
    void area(){
        
        float area=a*a;
        cout<<"Area of square is "<<area<<endl;
    }
    void perimeter(){
        float perimeter=4*a;
        cout<<"Perimeter of square is "<<perimeter;
    }
};
int main(){
    shape *bptr;
    triangle t;
    bptr=&t;
    bptr->area();
    bptr->perimeter();
    rectangle r;
    bptr=&r;
    bptr->area();
    bptr->perimeter();
    circle c;
    bptr=&c;
    bptr->area();
    bptr->perimeter();
    square s;
    bptr=&s;
    bptr->area();
    bptr->perimeter();
}