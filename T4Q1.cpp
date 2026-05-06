# include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Purchase
{
    private:
    string itemName;
    int qty;
    float price, total;

    public:
    Purchase(){}
    Purchase(string name, int quantity,float p)
    {
        itemName=name;
        qty = quantity;
        price = p;
    }
    void set_data(string name, int quantity, float p) {
        itemName = name;
        qty = quantity;
        price = p;
        total = price*qty;
}
    
    
    void print(){
        cout <<"\n Item Name: "<<itemName;
        cout <<"\n Quantity: " << qty;
        cout <<"\n Price: "<<price;
        cout <<"\n Total Price: "<<total<<endl;
    }

    void print_subtotal() {
        cout << "==============================" << endl;
        cout << "Subtotal    : RM " << total << endl;
        cout << "==============================" << endl;
    }
    int get_qty() { 
        return qty; }
    void calculate(){
        total = qty*price;
    }
    void printtotal(int totalItems, float grandTotal) {
    cout << "=================================" << endl;
    cout << "          GRAND TOTAL" << endl;
    cout << "=================================" << endl;
    cout << "Total number of items   : " << totalItems << endl;
    cout << "Total amount to be paid : RM" << grandTotal << endl;
}

};
int main()
{
    string name; 
    int quantity;
    float price;
    int totalItems = 0;
    float grandTotal = 0.0;

    Purchase p1;

    cout << "\n =================";
    cout << "\n     WELCOME     ";
    cout << "\n =================";
  while (true) {
        cout << "\nEnter item ('Q' to quit) : ";
        cin >> name;

        if (name == "Q" || name == "q") {
            break;
        }
        cout << "Enter quantity : ";
        cin >> quantity;
        cout << "Enter price    : RM ";
        cin >> price;
        p1.set_data(name,quantity,price);
        p1.calculate();
        p1.print();

    
        grandTotal += quantity*price ;
        totalItems += quantity;
        p1.print_subtotal();
    }
    p1.printtotal(totalItems, grandTotal);
    cout << "Press any key to continue . . ." << endl;

    return  0;
}

