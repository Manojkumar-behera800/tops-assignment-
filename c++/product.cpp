#include<iostream>
using namespace std;

class Product
{
    // data member
    char pname[20];
    float price;
    char descr[30];

public:
    // member function
    void getProductInfo()
    {
        cout << "\n Enter product name price and description";
        cin >> pname >> price >> descr;
    }

    void showProductInfo()
    {
        cout << "\n Product Name=" << pname;
        cout << "\n price=" << price;
        cout << "\n Description=" << descr;
    }
};

main()
{
    Product p1;
    p1.getProductInfo();
    p1.showProductInfo();
}
