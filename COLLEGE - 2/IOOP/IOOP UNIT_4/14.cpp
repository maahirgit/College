// Create a class salesman which includes private data members salesman_no,
// Salesman_name, product_no, target, sales_made, commission and private method
// calculate_comm() which calculates 20% commission on sales if target is less then sales
// Public method for reading and printing and calc_add_mon_sale which add sales.
#include <iostream>
using namespace std;

class Salesman {
    private:
        int salesman_no;
        string salesman_name;
        int product_no;
        int target;
        int sales_made;
        double commission;

        void calculate_comm() {
            if (sales_made < target) {
                commission = sales_made * 0.2;
            } else {
                commission = 0;
            }
        }

    public:
        void readData() {
            cout << "Enter salesman number: ";
            cin >> salesman_no;
            cout << "Enter salesman name: ";
            cin >> salesman_name;
            cout << "Enter product number: ";
            cin >> product_no;
            cout << "Enter target: ";
            cin >> target;
            cout << "Enter sales made: ";
            cin >> sales_made;
            calculate_comm();
        }

        void printData() {
            cout << "Salesman Number: " << salesman_no << endl;
            cout << "Salesman Name: " << salesman_name << endl;
            cout << "Product Number: " << product_no << endl;
            cout << "Target: " << target << endl;
            cout << "Sales Made: " << sales_made << endl;
            cout << "Commission: " << commission << endl;
        }

        void calc_add_mon_sale(int sale) {
            sales_made += sale;
            calculate_comm();
        }
};

int main() {
    Salesman s1;

    s1.readData();
    s1.printData();

    s1.calc_add_mon_sale(10);
    s1.printData();

    return 0;
}
