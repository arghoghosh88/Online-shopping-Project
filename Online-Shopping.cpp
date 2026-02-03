#include<bits/stdc++.h>
using namespace std;

class Product
{
private:
    string name;
    string pin;
    string product_name;
    double price;
public:
    double balance = 1000000;

    void set_uname(string n)
    {
        name = n;
    }
    string get_uname()
    {
        return name;
    }
    void set_pin(string p)
    {
        pin = p;
    }
    string get_pin()
    {
        return pin;
    }
    void set_Name(string s)
    {
        product_name = s;
    }
    void set_price(double p)
    {
        price = p;
    }
    string get_name()
    {
        return product_name;
    }
    double get_price()
    {
        return price;
    }
    void showProducts()
    {
        cout<<"-------------<Product List>--------------------------------"<<endl;
        cout<<"|1.  Laptop"<<"               Range BDT[30,000 - 2,00,000]tk  |"<<endl;
        cout<<"|2.  PC items"<<"             Range BDT[10,000 - 2,00,000]tk  |"<<endl;
        cout<<"|3.  Dresses"<<"              Range BDT[1,000 - 10,000]tk     |"<<endl;
        cout<<"|4.  Shoes"<<"                Range BDT[1,000 - 20,000]tk     |"<<endl;
        cout<<"|5.  Grocery"<<"              Range BDT[100 - 2,00,000]tk     |"<<endl;
        cout<<"|6.  Television"<<"           Range BDT[10,000 - 2,00,000]tk  |"<<endl;
        cout<<"|7.  Smart phone"<<"          Range BDT[5,000 - 2,00,000]tk   |"<<endl;
        cout<<"|8.  Refrigerator"<<"         Range BDT[50,000 - 2,00,000]tk  |"<<endl;
        cout<<"|9.  Washing Machine"<<"      Range BDT[20,000 - 2,00,000]tk  |"<<endl;
        cout<<"|10. Educational Products"<<" Range BDT[100 - 2,00,000]tk     |"<<endl;
        cout<<"-----------------------------------------------------------"<<endl;

    }
    void choose_products()
    {
        int choice;
        double p;
        showProducts();

        cout<<"Enter product Choice: ";
        cin>>choice;

        cout<<"Enter product price: ";
        cin>>p;
        set_price(p);


        switch(choice)
        {
        case 1:
            set_Name("Laptop");
            break;
        case 2:
            set_Name("PC Items");
            break;
        case 3:
            set_Name("Dresses");
            break;
        case 4:
            set_Name("Shoes");
            break;
        case 5:
            set_Name("Grocery");
            break;
        case 6:
            set_Name("Television");
            break;
        case 7:
            set_Name("Smart Phone");
            break;
        case 8:
            set_Name("Refrigerator");
            break;
        case 9:
            set_Name("Washing Machine");
            break;
        case 10:
            set_Name("Educational Items");
            break;
        default:
            set_Name("Unknown Product");
        }


    }
    friend double discount(double p);
};
double discount(double p)
{
    if(p >= 1000 && p <= 5000 )
    {
        return 10;
    }
    else if(p >= 5000 && p <= 10000)
    {
        return 12;
    }
    else if(p >= 10000 && p <= 50000)
    {
        return 15;
    }
    else if(p >= 50000 && p <= 100000)
    {
        return 20;
    }
    else if(p >= 100000&& p <= 200000)
    {
        return 25;
    }
    else
    {
        return 0;
    }
}

int main()
{
    cout<<"!-----<Argho Online Shopping>---------!"<<endl;
    Product cart[100];

    Product user;

    string na;
    cout<<"Enter user name : ";
    getline(cin, na);
    string p;
    cout<<"Set your pin : ";
    cin>>p;
    user.set_uname(na);
    user.set_pin(p);
    int n;
    cout<<"How many products do you want to buy?"<<endl;
    cin>>n;


    for (int i = 0; i<n; i++)
    {
        cout <<"\nProduct " <<i + 1 <<":\n";
        cart[i].choose_products();
    }

    double total = 0;
    double total_Discount = 0;

    for(int i = 0; i < n; i++)
    {
        double price = cart[i].get_price();

        double d = discount(price);

        double discountAmount = price * d / 100;

        double finalPrice = price - discountAmount;

        cout << i+1 << ". " << cart[i].get_name() << endl;
        cout << "Price    = BDT " << price << endl;

        cout << "Discount = BDT " << discountAmount << endl;

        cout << "Final    = BDT " << finalPrice << endl << endl;
        total += finalPrice;

        total_Discount += discountAmount;
    }

    cout << "-------------------------\n";
    cout << "Total Discount: BDT " << total_Discount << endl;
    cout << "Total Payable : BDT " << total << endl;
    cout << "=========================\n";
    cout<<"||Enter your name and pin for payment from your account||"<<endl;
    string name1;
    cin.ignore();
    cout<<"Enter your name : ";
    getline(cin,name1);
    string p1;
    cout<<"Enter your pin : ";
    string pin;
    cin>>pin;
    if(pin==user.get_pin())
    {
        user.balance -= total;
    }
    cout << "=========================\n";
    cout<<"Your current amount : "<<user.balance;
    cout << "=========================\n";
    cout<<"Thanks for connecting with us!";
    return 0;
}
