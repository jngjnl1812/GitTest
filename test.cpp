#include <iostream>
using namespace std;

/*
int main() {
    cout << "Hello VScode" << endl;
    int a;
    cout << "숫자 입력 : ";
    cin >> a;
    cout << "입력한 숫자는 " << a << "입니다" << endl;
    return 0;
}
*/

class Student {
public:
    string name;
    int age;

    void introduce() {
        cout << "이름: " << name << ", 나이: " << age << endl;
    }
};

int main() {
    Student s1;
    s1.name = "이정준";
    s1.age = 20;
    s1.introduce();

    Student s2;
    s1.name = "차은우";
    s1.age = 30;
    s1.introduce();

}