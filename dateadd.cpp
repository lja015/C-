#include<iostream>
using namespace std;
class date{
    public:
    int d,m,y;
    void assign(){
        cout<<"Enter the day,month and year:";
        cin>>d>>m>>y;
    }
    bool leapyear(int y){
        return((y%4==0&&y%100!=0)||y%400==0);
    }
    int md(int m,int y){
        switch(m){
            case 4:
            case 6:
            case 9:
            case 11:
            return 30;
            break;
            case 2:
            return((leapyear(y))?29:28);
            break;
            default:
            return 31;    }
    }
    operator int(){
        int days=0;
        for(int i=1;i<y;i++){
            if(leapyear(y)){
                days=days+366;
            }else{
                days=days+365;
            }
        }
        for(int i=1;i<m;i++){
            days=days+md(m,y);
        }
        days=days+d;
        return days;
    }
};
int main(){
    date d1;
    date d2;
    int a,b,c;
    d1.assign();
    d2.assign();
    a=d1;
    b=d2;
    c=a-b;
    cout<<"c:"<<abs(c)<<endl;
}