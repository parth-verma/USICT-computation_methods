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
    h = (x2-x1)/n;
    for(long long i=0;i<n;i++){
        sum+= h*(f(x1+i*h)+f(x1+(i+1)*h))/2;
    }
    cout<<setprecision(10)<<sum<<" is the value for the definite integral of the function in the interval ["<<x1<<','<<x2<<"].";
    return 0;
}