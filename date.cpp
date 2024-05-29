#include<iostream>
using namespace std;
class date{
    public:
    int d,m,y;
    void read(){
        cout<<"Enter day,month and year:";
        cin>>d>>m>>y;
    }
    bool isvalid(){
        if(d<1||d>31||m>12||m<1){
            return false;
        }
        if(m==4||m==6||m==9||m==11){
            if(d>30){
                return false;
            }
        }
        if(m==2){
            if(y%4==0&&y%100!=0||y%400==0){
                if(d>29){
                    return false;
                }
            }else{
                if(d>28){
                    return false;
                }
            }
        }
        return true;
    }
    void display(){
        if(isvalid()){
            int maxd=31;
            if(m==4||m==6||m==9||m==11){
                maxd=30;
            }
            if(m==2){
                if(y%4==0&&y%100!=0||y%400==0){
                    maxd=29;
                }else{
                    maxd=28;
                }
            }
            d++;
            if(d>maxd){
                d=1;
                m++;
            }
            if(m>12){
                m=1;
                y++;
            }
            cout<<"Next date:"<<d<<"-"<<m<<"-"<<y<<endl;
        }else{
            cout<<"Invalid date"<<endl;
        }
    }
};
int main(){
    date d;
    d.read();
    d.display();
}