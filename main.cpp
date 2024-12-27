#include <iostream>
#include "interface.cpp"
#include "process.cpp"
using namespace std;
int main(){
    
    double xValues[100], yValues[100], xSum, ySum;
    int n=interface(xValues, yValues);

    cout<<"X"<<"\t"<<"Y"<<endl;
    for(int i=0; i<n; i++){
        cout<<xValues[i]<<"\t"<<yValues[i]<<endl;
    }
    xSum=getSum(xValues, n);
    ySum=getSum(yValues, n);
    cout<<endl<<"Sum"<<"\t"<<"Sum"<<endl<<xSum<<"\t"<<ySum<<endl<<endl;
    cout<<"r = "<<getCorrelationCoefficient(xValues, yValues, xSum, ySum, n)<<endl<<endl;

    return 0;

}



