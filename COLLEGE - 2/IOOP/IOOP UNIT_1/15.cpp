//  Write  C++  program  and  take  two  numbers  from  user  and  swap  the
// // values  without using third variable.
#include <iostream>
using namespace std;
class swa{
    int a, b;
    public :
    void input(){
        cout << "Before swap a = " << a << " b = " << b << endl;
    }
    void process(){
    a = a * b;    
    b = a / b; 
    a = a / b;
    }    
    void output(){
    cout << "After swap a= " << a << " b= " << b << endl;
    }
};
int main(){
    swa ab;
    ab.input();
    ab.process();
    ab.output();
}