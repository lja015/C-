#include<iostream>
using namespace std;
#include<cmath>
class rect{
    public:
    float x;
    float y;
    void read(){
        cout<<"Enter x and y:";
        cin>>x>>y;
    }
    void display(){
        cout<<"x="<<x<<endl<<"y="<<y<<endl;
    }

};
class polar{
    public:
    polar(){}
    polar(rect r){
        rad=sqrt((r.x*r.x)+(r.y*r.y));
        ang=atan2(r.y,r.x);
    }
    float rad;
    float ang;
    void read(){
        cout<<"Enter the radius and angle:";
        cin>>rad>>ang;
    }
    operator rect(){
        rect temp;
        temp.x=rad*sin(ang*(M_PI/180));
        temp.y=rad*cos(ang*(M_PI/180));
        return temp;
    }
    void display(){
        cout<<"Radius:"<<rad<<endl<<"Angle:"<<ang*(180/M_PI)<<endl;
    }
};
int main(){
    rect r1;
    rect r2;
    r1.read();
    polar p1;
    polar p2;
    p1.read();
    r2=p1;
    r2.display();
    p2=r1;
    p2.display();
}