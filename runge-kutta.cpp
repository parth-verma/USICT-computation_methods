#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double f(double x,double y){
    return (5*x*x - y)/exp(x+y);
}



int main(){
    double x,y,h,k1,k2,k3,k4;
    long long n;
    cout<<"Enter the value of x0: ";
    cin>>x;
    cout<<"Enter the value of y0: ";
    cin>>y;
    cout<<"Enter the number of steps: ";
    cin>>n;
    cout<<"Enter step size: ";
    cin>>h;
    for(long long i=0;i<n;i++){
        k1 = h*f(x,y);
        k2 = h*f(x+h/2,y+k1/2);
        k3 = h*f(x+h/2,y+k2/2);
        k4 = h*f(x+h,y+k3);
        y += (k1+2*k2+2*k3+k4)/6;
        x += h;
    }
    cout<<setprecision(10)<<"F("<<x<<") = "<<y<<'.';
    return 0;
}