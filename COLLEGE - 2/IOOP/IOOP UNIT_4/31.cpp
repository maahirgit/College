// Write a C++ program that illustrates the use of nested classes.
#include <iostream>
using namespace std;

class Outer {
private:
    int x;
public:
    Outer(int x){
         x=x; 
         }

    class Inner {
    private:
        int y;
    public:
        Inner(int y){
             y=y; 
             }
        int getSum(Outer o) {
            return o.x + y;
        }
    };
};

int main() {
    Outer o(10);
    Outer::Inner i(5);
    int sum = i.getSum(o);
    cout << "The sum is " << sum << endl;
    return 0;
}
