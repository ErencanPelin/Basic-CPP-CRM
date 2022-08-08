#include <iostream>
#include "Customer.h"
using namespace std;

Customer customers[50];

void AddCustomer()
{
    Customer new_customer;
    cout << "What is your first name? " << endl;
    cin >> new_customer.f_name;
    cout << "What is your last name? " << endl;
    cin >> new_customer.l_name;
    cout << "What is your age? " << endl;
    cin >> new_customer.age;
    
    cout << "Hi " << new_customer.f_name << " " << new_customer.l_name << ", nice to meet you.";
    customers[0] = new_customer;
}

int main(int argc, char* argv[])
{
    cout << "=== Basic CRM ===" << endl;
    char in;
    cin >> in;
    in = toupper(in);
    switch (in)
    {
        case 'A':
            {
                AddCustomer();
                break;
            }
        case 'X':
            {
                break;
            }
        default: break;
    }
    return 0;
}