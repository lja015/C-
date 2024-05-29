#include<iostream>
using namespace std;
class tim{
    public:
    int h,m,s;
    void read(){
        cout<<"Enter time:";
        cin>>h>>m>>s;
    }
    void display(){
        cout<<"time:"<<h<<"-"<<m<<"-"<<s<<endl;
    }
    tim operator + (tim &t1){
        tim t=*this;
        t.h=t1.h;
        t.m-=t1.m;
        t.s-=t1.s;
        while(t.s>=60||t.m>=60||t.h>=24){
            if(t.s>=60){
                    t.s=t.s-60;
                    t.m++;
                    if(t.m>=60){
                            t.m=t.m-60;
                            t.h++;
                    
                        if(t.h>=24){
                            t.h=t.h-24;
                        }}
                    }
                    if(t.m>=60){
                            t.m=t.m-60;
                            t.h++;
                    
                        if(t.h>=24){
                            t.h=t.h-24;
                        }}
                        if(t.h>=24){
                            t.h=t.h-24;
                        }


                }
                return t;
            }
        };
     
int main(){
    tim t1,t2;
    tim t3;
   t1.read();
    t2.read();
    t3=t1+t2;
    t3.display();

}