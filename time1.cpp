#include<iostream>
using namespace std;
class tim{
    public:
    int h,m,s;
    int i;
    void assign(){
        cout<<"Enter time:";
        cin>>h>>m>>s;
    }
    int operator + (tim &t){
        int time1=0;
        int time2=0;
        time1=(h*3600)+(m*60)+s;
        time2=(t.h*3600)+(t.m*60)+t.s;
        int c=time1-time2;
        return c;
    }
};
int main(){
    tim t1;
    tim t2;
    t1.assign();
    t2.assign();
    int d;
    d=t1+t2;
    cout<<"d:"<<d<<endl;
}