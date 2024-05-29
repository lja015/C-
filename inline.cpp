#include<iostream>
#include<cmath>
using namespace std;
inline float shortdist(float a,float b){
    return (a<b)? a : b;
}
inline float dist(float x1,float y1,float x2,float y2){
    return(sqrt(pow((x2-x1),2.0)+pow((y2-y1),2.0)));
}
inline bool validity(float a,float b,float c){
    return (a+b>c&&a+c>b&&b+c>a)? true : false;
}
int main(){
    float x1,y1,x2,y2,x3,y3;
    cout<<"Enter the coordinates of side 1:";
    cin>>x1>>y1;
    cout<<"Enter the coordinates of side 2:";
    cin>>x2>>y2;
    cout<<"Enter the coordinates of side 3:";
    cin>>x3>>y3;
    float d1=dist(x1,y1,x2,y2);
    float d2=dist(x2,y2,x3,y3);
    float d3=dist(x3,y3,x1,y1);
    if(validity(d1,d2,d3)){
    cout<<"The first distance:"<<d1<<endl<<"The second distance:"<<d2<<endl<<"The third distance:"<<d3<<endl;
    cout<<"The shortest distance:"<<shortdist(d1,shortdist(d2,d3))<<endl;}
    else{
        cout<<"The triangle is invalid";
    }
    return 0;
}