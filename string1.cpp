#include<iostream>
#include<cstring>
using namespace std;
class stringg{
    public:
    char str[100];
    void assign(){
        cout<<"Enter the string:";
        cin>>str;
    }
    void display(){
    cout<<"String:"<<str<<endl;
    }
    stringg operator + (stringg a){
        stringg temp;
       strcpy(temp.str,str);
       strcat(temp.str,a.str);
        return temp;
    }
    void operator = (stringg temp){
        strcpy(str,temp.str);
       
    }
};
int main(){
    stringg s1,s2;
    s1.assign();
    s2.assign();
    stringg s3,s4;
    s3=s1+s2;
    s3.display();
    s4=s1;
    s4.display();
}