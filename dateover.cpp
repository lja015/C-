#include<iostream>
using namespace std;
class date{
    public:
    int d,m,y;
    int md;
    void assign(){
        cout<<"Enter the current date:";
        cin>>d>>m>>y;
    }
    void display(){
        cout<<"Date:"<<d<<"-"<<m<<"-"<<y<<endl;
    }
    int maxd(int m,int y){
        switch(m){
            case 4:
            case 6:
            case 9:
            case 11:
            return 30;
            break;
            case 2:
return(((y%4==0&&y%100!=0)||y%400==0)?29:28);

            break;
            default:
           return 31;
        }}
        date operator +(int da){
            date temp=*this;
            temp.d=temp.d+da;
            while(temp.d>temp.maxd(temp.m,temp.y)){
                temp.d=temp.d-temp.maxd(temp.m,temp.y);
                temp.m++;
            
            if(temp.m>12){
                temp.m=1;
                temp.y++;
            }}
            return temp;
        }
    };
    int main(){
        date d;
        d.assign();
        int day;
        cout<<"Enter the number of days:";
        cin>>day;
        date d1;
        d1=d+day;
        d1.display();
    }
