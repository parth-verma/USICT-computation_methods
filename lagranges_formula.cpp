#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    long n;
    double x[100],y[100],q,sum=0;
    cout<<"Enter number of points: ";
    cin>>n;
    for(long i=0;i<n;i++){
        cout<<"Enter x"<<i+1<<": ";
        cin>>x[i];
        cout<<"Enter y"<<i+1<<": ";
        cin>>y[i];
    }
    cout<<"Enter the x coordinate of the point where to find the value of the function:  ";
    cin>>q;
    for(long i=0;i<n;i++){
        double p = y[i];
        for(long j=0;j<n;j++){
            if(i==j)
                continue;
            p*=(q-x[j])/(x[i]-x[j]);
        }
        sum+=p;
    }
    cout<<setprecision(10)<<sum<<" is the value of the function at x = "<<q<<'.';
}