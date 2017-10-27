#include <iostream>
#include <cmath>
using namespace std;

double f(double x){
    return x*x-1;
}
int main(){
    double x1,x2,num_digits,precision,mid,f_mid;
    cout<<"Enter x1: ";
    cin>>x1;
    cout<<"Enter x2: ";
    cin>>x2;
    cout<<"Enter number of digits of precision required: ";
    cin>>num_digits;
    precision = pow(10,num_digits*-1);
    if (f(x1)*f(x2) >=0) {
        cout << "Please choose another interval.\nExiting.";
        return 1;
    }
    mid = (x1+x2)/2;
    f_mid = f(mid);
    while (true){
        if (fabs(x1-x2)<precision){
            cout<<x2<<" is the root of the function.";
            return 0;
        }
        if (f_mid*f(x1)<0){
            x2=mid;
        }
        else if(f_mid*f(x2)<0){
            x1 = mid;
        }
        else if(f_mid == 0) {
            cout << f_mid << " is the approximate root of the given function.";
            return 0;
        }
        mid = (x1+x2)/2;
        f_mid = f(mid);
    }
}