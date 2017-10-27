#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double f(double x,double y){
    return 2-exp(-4*x)-2*y;
}
int main(){
    double y,x,n,h;
    cout<<"Enter y0: ";
    cin>>y;
    cout<<"Enter x0: ";
    cin>>x;
    cout<<"Enter number of steps: ";
    cin>>n;
    cout<<"Enter step size: ";
    cin>>h;
    while(n){
        n--;
        double temp = f(x,y);
        y+=h*temp;
        x+=h;
    }
    cout<<setprecision(10)<<"F("<<x<<") = "<<y<<'.';
    return 0;
}