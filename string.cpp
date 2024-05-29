#include<iostream>
#include<cstring>
using namespace std;
class stringg{
    public:
    char *s;
    int size;
    void set(){
        cout<<"Enter the size of string:";
        cin>>size;
        s= new char[size+1];
        cout<<"Enter the string:";
        cin>>s;
    }
       stringg operator+(const stringg &a) {
        stringg temp;
        temp.size = size + a.size;
        temp.s = new char[temp.size + 1]; // +1 for null terminator
        strcpy(temp.s, s);
        strcat(temp.s, a.s);
        return temp;
    }
    void show(){
        cout<<"String:"<<s<<endl;
    }
};
int main(){
     stringg a;
     stringg b;
     stringg c;
     a.set();
     b.set();
     c=a+b;
     c.show();
cout << "Size of string a: " << strlen(a.s) << endl;
     return 0;

}