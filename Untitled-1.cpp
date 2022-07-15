#include<iostream>

using namespace std;

void data() {
    cout<<"Enter Data";//get inputs in file,name of comapny and financial year and reqd data
}

void ratio() {
    cout<<"Select company to view ";//display the name and finacial year and give output for,data entered ratio as demanded for the slected company 
}
int main() {
    int a;
    cout<<"FinanceX"<<endl;
    cout<<"1.Enter Data for Company"<<endl;
    cout<<"2.View Ratio and Projections for company"<<endl;
    cin>>a;
    if(a==1)
    data();
    else if(a==2)
    ratio();
    return 0;

}
