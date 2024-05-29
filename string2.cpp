#include<iostream>
#include<cstring>
using namespace std;

class stringg {
public:
    char *str; // Use dynamic memory allocation for string
    int s;

    void assign() {
        cout << "Enter the string:";
        str = new char[100]; // Dynamically allocate memory
        cin >> str;
        cout << "Enter the size of string:";
        cin >> s;
    }

    void display() {
        cout << "String:" << str << endl;
    }

    stringg operator+(stringg a) {
        stringg t;
        t.s = a.s + s;
        t.str = new char[t.s + 1]; // Dynamically allocate memory
        int i = 0;
        while (str[i] != '\0') {
            t.str[i] = str[i];
            i++;
        }
        int j = 0;
        while (a.str[j] != '\0') {
            t.str[i] = a.str[j];
            i++;
            j++;
        }
        t.str[t.s] = '\0';
        return t;
    }

    void operator=(stringg temp) {
        int i = 0;
        s = temp.s;
        str = new char[s + 1]; // Dynamically allocate memory
        while (temp.str[i] != '\0') {
            str[i] = temp.str[i];
            i++;
        }
        str[s] = '\0';
    }

    bool operator<=(stringg t) {
        int i = 0;
        int j = 0;
        while (str[i] != '\0' && t.str[j] != '\0') { // Use && instead of ||
            if (str[i] >= t.str[j]) {
                return true; // Return true if condition is met
            }
            i++;
            j++;
        }
        return false;
    }
};

int main() {
    stringg s1, s2;
    s1.assign();
    s2.assign();
    stringg s3, s4;
    s3 = s1 + s2;
    s3.display();
    s4 = s1;
    s4.display();
    if (s1 <= s2) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }

    // Deallocate memory
    delete[] s1.str;
    delete[] s2.str;
    delete[] s3.str;
    delete[] s4.str;

    return 0;
}
