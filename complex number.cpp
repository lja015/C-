#include<iostream>
using namespace std;
class complex{
protected:
float real;
float img;
public:
complex(){
    cout<<"Enter the real and imaginary part:";
    cin>>real>>img;
}
void passbyvalue(complex a,complex b){
    float temp=a.real;
    a.real=b.real;
    b.real=temp;
     temp=a.img;
    a.img=b.img;
    b.img=temp;

}
void passbyref(complex &a,complex &b){
    float temp=a.real;
    a.real=b.real;
    b.real=temp;
     temp=a.img;
    a.img=b.img;
    b.img=temp;
}
void passbyadd(complex *a,complex *b){
    float temp=a->real;
    a->real=b->real;
    b->real=temp;
     temp=a->img;
    a->img=b->img;
    b->img=temp;
}
complex operator + (complex b){
    complex temp;
    temp.real=real+b.real;
    temp.img=img+b.img;
    return temp;
}
complex operator - (complex b){
    complex temp;
    temp.real=real-b.real;
    temp.img=img-b.img;
    return temp;
}
complex operator * (complex b){
    complex temp;
    temp.real=(real*b.real)-(img*b.img);
    temp.img=(img*b.real)+(real*b.img);
    return temp;
}
complex operator / (complex b){
    complex temp;
    temp.real=((real*b.real)+(img*b.img))/((b.real*b.real)+(b.img*b.img));
    temp.img=((img*b.real)-(real*b.img))/((b.real*b.real)+(b.img*b.img));
    return temp;
}
void show(){
    cout<<"Complex number:"<<real<<"+"<<img<<"i"<<endl;
}
};
int main(){
    complex a;
    complex b;
    complex c;
    c.passbyvalue(a,b);
    a.show();
    b.show();
    c.passbyref(a,b);
     a.show();
    b.show();
    c.passbyadd(&a,&b);
     a.show();
    b.show();
    
    c=a+b;
    c.show();
     c=a-b;
    c.show();
     c=a*b;
    c.show();
     c=a/b;
    c.show();
    return 0;

}

