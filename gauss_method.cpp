#include <iostream>

using namespace std;

int main(){
    double a[3][3],c[3],x[3];
    int i,j,n;
    cout<<"Enter the number of equations: ";
    cin>>n;
    for(i=1;i<=n;i++){
        cout<<"Enter coefficients for eq #"<<i<<endl;
        for(j=1;j<=n;j++){
            cout<<"Enter value of "<<char(j-1+'a')<<": ";
            cin>>a[i-1][j-1];
        }
        cout<<"Enter the constant term: ";
        cin>>c[i-1];

    }
    for(j=0;j<n;j++) {
        for (i = 0; i < n; i++) {
            double temp = a[i][j];
            if (i == j) {
                for (int m = j; m < n; m++) {
                    a[i][m] /= temp;
                }
                c[i] /= temp;
            } else if (i > j) {
                for (int m = j; m < n; m++) {
                    a[i][m] -= a[j][m] * temp;
                }
                c[i]-=c[j]*temp;
            }
        }
    }
    cout<<"Equation -> y = ";
    for(i = 0;i<n;i++){
        cout<<char('a'+i)<<'x'<<i+1<<" + ";
    }
    cout<<char('a'+i)<<endl;
    for (i=n-1;i>=0;i--){
        j=n-1;
        while(j!=i){
            c[i]-=a[i][j]*c[j];
            j--;
        }
        x[i] = c[i]/a[i][i];
    }

    for(i=0;i<n;i++){
        cout<<'x'<<i+1<<'='<<x[i]<<endl;
    }

}