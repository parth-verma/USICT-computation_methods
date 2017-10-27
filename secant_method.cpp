#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double f(double x){
    return x*x-1;
}

double df(double x){
    return 2*x;
}
int main(){
    double a,b,precision,num_digits;
    cout<<"Enter x1: ";
    cin>>a;
    cout<<"Enter x2: ";
    cin>>b;
    cout<<"Enter number of digits of precision required: ";
    cin>>num_digits;
    precision = pow(10,num_digits*-1);
    while(fabs(a-b)>precision){
        if (df(a)==0){
            cout<<"Division by zero. Please choose a different range.";
            return 1;
        }
        double temp = f(a)*(a-b)/(f(a)-f(b));
        b=a;
        a-=temp;

    }
    cout<<setprecision(precision)<<a<<" is the root of the equation.";
    return 0;
}