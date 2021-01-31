#include <iostream>

using namespace std;

int main()
{
    string name;
    cout << "Please what is your name?"<<endl;
    getline(cin,name);

    string un_ID;
    cout << "Please enter your Unique ID?"<<endl;
    getline(cin,un_ID);

    cout<< "Please  this are the items we have"<<endl;
    cout << "Printer = $343"<<endl;
    cout << "Phone = $88;"<<endl;
    cout << "Table =$76;"<<endl;

    double printerPrice=343;
    double phonePrice=88;
    double tablePrice=76;

    double vat = 0.12;

    double item_1,item_2,item_3;
    cout << "Please how many Printers will you buy, else input 0"<<endl;
    cin>>item_1;

    cout << "Please how many phones will you buy, else input 0"<<endl;
    cin >> item_2;

    cout << "Please how many tables will you buy,  else input 0"<< endl;
    cin>>item_3;

    double total_Cost;
    cout << "This is the total price you will pay without VAT"<<endl;
    total_Cost = ((printerPrice*item_1)+ (phonePrice*item_2)+(tablePrice*item_3));
    cout << total_Cost<<endl;

    double vat_Amount;
    cout << "Please this the Vat you will be paying on the total amount"<<endl;
    vat_Amount=(total_Cost*vat);
    cout << vat_Amount<<endl;

    double total_Amount;
    cout  << "Please this is the total amount Vat inclusive"<<endl;
    total_Amount = ((total_Cost*vat)+total_Cost);
    cout << total_Amount<<endl;

    cout  << "" <<endl;

    cout << "RECEIPT"<<endl;
    cout << "Customer Name: "<<name<<endl;
    cout<< "Unique ID: "<<un_ID<<endl;
    cout << "Quantity of Printers bought = " << item_1<<endl;
    cout << "Quantity of Phones bought = " << item_2<<endl;
    cout << "Quantity of Tables bought = " << item_3<<endl;
    cout << "Vat Amount: "<<vat_Amount<<endl;
    cout << "Total Cost: " << total_Cost<<endl;
    cout << "Total Amount to be paid: "<< total_Amount<<endl;






    return 0;
}
