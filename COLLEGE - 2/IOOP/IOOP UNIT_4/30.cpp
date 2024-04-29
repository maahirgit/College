// Write a C++ program to perform addition of two object variable into third object and
// return the same.
#include <iostream>
using namespace std;

class Number {
private:
    int num,num1;
public:
    Number() {
         num=0;
         }
    Number(int n){ 
        num1=n;
        }

    // Number operator+(Number n2) {
     int Number result(num +num1){
        return result;
    }

    void display() {
        cout << num;
    }
};

int main() {
    Number n1(10), n2(20), n3;
    n3 = n1 + n2;
    cout << "n1 + n2 = ";
    n3.display();
    cout << endl;
    return 0;
}
