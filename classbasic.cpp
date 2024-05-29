#include<iostream>
using namespace std;
class dist{
    public:
    int inch;
    int feet;
    void read(){
        cout<<"Enter the feet and inch:";
        cin>>feet>>inch;
    }
    dist(){}
    dist(float d){
        float x=d*39.3701;
        feet=x/12;
        inch=x-(feet *12);
        }
        operator float(){
            float meter;
            meter=meter*39.37;
            meter=feet*12+inch;
            meter=meter*0.0254;
            return meter;
        }
        void display(){
            cout<<"Feet:"<<feet<<endl<<"Inch:"<<inch<<endl;
        }
};
int main(){
    dist a;
    dist b;
    float x,y;
    a.read();
    cout<<"Enter the meter value:";
    cin>>x;
    b=x;
    b.display();
    y=a;
    cout<<"Y="<<y<<endl;
    return 0;

}