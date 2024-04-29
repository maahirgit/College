#include <iostream>
#include <string>

class Product {
public:
    void getdata() {
        std::cout << "Enter product number: ";
        std::cin >> product_no_;
        std::cout << "Enter product name: ";
        std::cin >> name_;
        std::cout << "Enter product price: ";
        std::cin >> price_;
        std::cout << "Enter product quantity: ";
        std::cin >> quantity_;
        calculate();
    }
    
    void displaydata() const {
        std::cout << "Product number: " << product_no_ << std::endl;
        std::cout << "Product name: " << name_ << std::endl;
        std::cout << "Product price: " << price_ << std::endl;
        std::cout << "Product quantity: " << quantity_ << std::endl;
        std::cout << "Product amount: " << amount_ << std::endl;
    }
    
private:
    int product_no_;
    std::string name_;
    float price_;
    int quantity_;
    float amount_;
    
    void calculate() {
        amount_ = price_ * quantity_;
    }
};

int main() {
    const int NUM_PRODUCTS = 5;
    Product products[NUM_PRODUCTS];
    
    for (int i = 0; i < NUM_PRODUCTS; i++) {
        std::cout << "Enter details for product " << i+1 << std::endl;
        products[i].getdata();
    }
    
    std::cout << "Product details:" << std::endl;
    for (int i = 0; i < NUM_PRODUCTS; i++) {
        std::cout << "Product " << i+1 << ":" << std::endl;
        products[i].displaydata();
        std::cout << std::endl;
    }
    
    return 0;
}