#include<iostream>
using namespace std;
class dist{
    public:
    float feet;
    float inch;
    void read(){
        cout<<"Enter the feet and inch:";
        cin>>feet>>inch;
    }
    dist operator + (dist &f){
        dist temp;
        temp.feet=feet+f.feet;
        temp.inch=inch+f.inch;
        int r=temp.inch;
        if(r/12>=1){
            temp.feet=feet+f.feet+r/12;
            temp.inch=(r)%12;
        }
        
        return temp;
    }
    void display(){
        cout<<"Feet:"<<feet<<endl<<"Inch:"<<inch<<endl;
    }
    friend bool operator < (dist &a,dist &b);
};
bool operator < (dist &a,dist &b){
    a.inch=a.inch+(a.feet*12);
    b.inch=b.inch+(b.feet*12);
    if(a.inch<b.inch){
        return true;
    }
    return false;
}
int main(){
    dist a,b,c;
    a.read();
    b.read();
    c=a+b;
    c.display();
    if(a<b){
        cout<<"The first distance is less than second"<<endl;
    }else{
        cout<<"The second distance is less than first"<<endl;
    }
    return 0;
}