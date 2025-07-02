#include <iostream>
#include <fstream>
#include <iomanip>
#include <ctime>
#include <cstdlib>  // for system()

using namespace std;

int main() {
    string item, userName, input;
    int quantity;
    float price, total = 0, discountPercent, discountAmount, taxPercent, taxAmount, finalTotal;

    string fileName = "receipt.txt";
    ofstream receipt(fileName.c_str());
    receipt << fixed << setprecision(2);

    cout << "Enter your name: ";
    getline(cin, userName);

    time_t now = time(0);
    tm *ltm = localtime(&now);

    receipt << "Customer: " << userName << endl;
    receipt << "Date: " << 1900 + ltm->tm_year << "-" << 1 + ltm->tm_mon + 1 << "-" << ltm->tm_mday;
    receipt << " Time: " << ltm->tm_hour << ":" << ltm->tm_min << ":" << ltm->tm_sec << endl;
    receipt << "-------------------" << endl;

    while (true) {
        cout << "Enter item name (or type 'done' to finish): ";
        getline(cin, item);
        if (item == "done") break;

        cout << "Enter quantity: ";
        getline(cin, input);
        quantity = atoi(input.c_str());

        cout << "Enter price per item: ";
        getline(cin, input);
        price = atof(input.c_str());

        float cost = quantity * price;
        total += cost;

        receipt << item << " x" << quantity << " = $" << cost << endl;
    }

    cout << "Enter discount percentage: ";
    getline(cin, input);
    discountPercent = atof(input.c_str());

    cout << "Enter tax percentage: ";
    getline(cin, input);
    taxPercent = atof(input.c_str());

    discountAmount = (total * discountPercent) / 100;
    taxAmount = ((total - discountAmount) * taxPercent) / 100;
    finalTotal = total - discountAmount + taxAmount;

    receipt << "-------------------" << endl;
    receipt << "Subtotal: $" << total << endl;
    receipt << "Discount (" << discountPercent << "%): -$" << discountAmount << endl;
    receipt << "Tax (" << taxPercent << "%): +$" << taxAmount << endl;
    receipt << "Total after discount & tax: $" << finalTotal << endl;

    receipt.close();

    cout << "\n? Receipt saved to 'receipt.txt'" << endl;
    cout << "\n?? Opening receipt in Notepad...\n" << endl;

    system("notepad receipt.txt");

    return 0;
}

