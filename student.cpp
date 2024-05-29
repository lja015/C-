#include<iostream>
using namespace std;
class student{
    public:
    char name[50];
    int age;
    int regno;
    virtual void read(){}
    virtual void display(){};
    virtual void sort(){};
};
class btech:public student{
    public:
    float mark;
    void read(){
        cout<<"Enter the name,age,regno and mark:";
        cin>>name>>age>>regno>>mark;
    }
    void sort(int t,btech obj[]){
        btech temp;
        for(int i=0;i<t;i++){
            for(int j=0;j<t-i-1;j++){
                if(obj[j].mark<obj[j+1].mark){
                    temp=obj[j];
                    obj[j]=obj[j+1];
                    obj[j+1]=temp;
                }
                   if(obj[j].mark==obj[j+1].mark){
                    for(int k=0;k<50;k++){
                        if(obj[j].name[k]>obj[j+1].name[k]){
                            temp=obj[j];
                            obj[j]=obj[j+1];
                            obj[j+1]=temp;
                            break;
                     }
                    }
            }
        }
    }
}
void display(){
    cout<<"Name:"<<name<<endl<<"Age:"<<age<<endl<<"Reg no:"<<regno<<endl<<"Mark:"<<mark<<endl;
}
};
class mtech:public student{
    public:
    float gpa;
    void read(){
        cout<<"Enter the name,age,regno and gpa:";
        cin>>name>>age>>regno>>gpa;
    }
    void sort(int t,mtech obj[]){
        mtech temp;
        for(int i=0;i<t;i++){
            for(int j=0;j<t-i-1;j++){
                if(obj[j].gpa<obj[j+1].gpa){
                    temp=obj[j];
                    obj[j]=obj[j+1];
                    obj[j+1]=temp;
                }
                   if(obj[j].gpa==obj[j+1].gpa){
                    for(int k=0;k<50;k++){
                        if(obj[j].name[k]<obj[j+1].name[k]){
                            temp=obj[j];
                            obj[j]=obj[j+1];
                            obj[j+1]=temp;
                            break;
                     }
                    }
            }
        }
    }
}
void display(){
    cout<<"Name:"<<name<<endl<<"Age:"<<age<<endl<<"Reg no:"<<regno<<endl<<"GPA:"<<gpa<<endl;
}
};
int main(){
    int b,m;
    cout<<"Enter the number of btech students and mtech students:";
    cin>>b>>m;
    btech obj1[b];
    mtech obj2[m];
    cout<<"Enter the details of btech students:"<<endl;
    for(int i=0;i<b;i++){
        obj1[i].read();
    }
    btech s;
    s.sort(b,obj1);
    cout<<"Marklist of btech students:";
    for(int i=0;i<b;i++){
        obj1[i].display();
    }
    cout<<"Enter the details of mtech students:"<<endl;
    for(int i=0;i<m;i++){
        obj2[i].read();
    }
    mtech si;
    si.sort(m,obj2);
    cout<<"Marklist of btech students:";
    for(int i=0;i<m;i++){
        obj2[i].display();
    }

}