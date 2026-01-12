//Roll No :-  24IT471
//Name :- Pandya Aditya

#include <iostream>
using namespace std;

class ProductItem {
public:
    string itemName;
    float unitPrice;

    void inputProduct() {
        cout << "Enter product name: ";
        cin >> itemName;
        cout << "Enter price per unit: ";
        cin >> unitPrice;
    }
};

class OrderInfo : public ProductItem {
public:
    int qty;

    void inputOrder() {
        cout << "Enter quantity to order: ";
        cin >> qty;
    }
};

class InvoiceGenerator : public OrderInfo {
public:
    float taxPercent,discountPercent;

    void computeBill() {
        cout << "Enter tax percentage: ";
        cin >> taxPercent;
        cout << "Enter discount percentage: ";
        cin >> discountPercent;

        float subtotal = unitPrice * qty;
        float taxAmount = subtotal * taxPercent / 100;
        float discountAmount = subtotal * discountPercent / 100;
        float netAmount = subtotal + taxAmount - discountAmount;

        cout << "\n--- Invoice ---\n";
        cout << "Product Name  : " << itemName << endl;
        cout << "Unit Price    : " << unitPrice << endl;
        cout << "Quantity      : " << qty << endl;
        cout << "Subtotal      : " << subtotal << endl;
        cout << "Tax (" << taxPercent << "%): " << taxAmount << endl;
        cout << "Discount (" << discountPercent << "%) : " << discountAmount << endl;
        cout << "Total Amount  : " << netAmount << endl;
    }
};

int main() {
    InvoiceGenerator invoice;

    invoice.inputProduct();
    invoice.inputOrder();
    invoice.computeBill();

    return 0;
}

