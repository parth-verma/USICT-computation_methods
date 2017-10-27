#include <iostream>
#include <iomanip>

using namespace std;

double f(double x){
    return x;
}

int main(){
    double x1,x2,h,sum=0;
    long long n;
    cout<<"Enter lower limit: ";
    cin>>x1;
    cout<<"Enter upper limit: ";
    cin>>x2;
    cout<<"Enter number of sub-intervals: ";
    cin>>n;
    n=n*2;
    h=(x2-x1)/n;
    for(long long i=1;i<n;i+=2){
        sum+= h/3*(f(x1+(i-1)*h) + 4*f(x1 + i*h)+f(x1+(i+1)*h));
    }
    cout<<setprecision(10)<<sum<<" is the value for the definite integral of the function in the interval ["<<x1<<','<<x2<<"].";
    return 0;
}