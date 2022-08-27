/*Program to create a shop management system*/

#include<iostream>
using namespace std;

    struct shop{
        char shop_name[100];
        char emp_name[50];
        int emp_no;
        int emp_salary;
        int profit;
        int profit_year;
    }s;
int main()
{
    cout<<"\t\t\t*********** WELCOME TO THE SHOP MANAGEMENT SYSTEM ***********";
    cout<<"Choose one of the below: "<<"\n1. Add \n2. Shop Information\n2. Employee Information"
    cout<<"\nEnter shop name: ";
    cin>>s.shop_name;
    cout<<"\nEnter employee name: ";
    cin>>s.emp_name;
    cout<<"\nEnter employee number: ";
    cin>>s.emp_no;
    cout<<"\nEnter employee salary: ";
    
return 0;

}


