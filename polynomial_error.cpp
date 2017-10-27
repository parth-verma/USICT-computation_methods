#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double acct_value,approx_value;
    cout<<"Enter approximate value: ";
    cin>>approx_value;
    cout<<"Enter actual value: ";
    cin>>acct_value;
    cout<<"Absolute Error: "<<fabs(approx_value-acct_value)<<endl;
    cout<<"Relative Error: "<<fabs(approx_value-acct_value)/acct_value<<endl;
    cout<<"Percentage Error: "<<fabs(approx_value-acct_value)/acct_value*100<<endl;
    return 0;
}