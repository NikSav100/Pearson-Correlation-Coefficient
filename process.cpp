#include <iostream>
#include <cmath>
using namespace std;

double getSum(double values[], int n){
    
    int result=0;

    for(int i=0; i<n; i++){
        result+=values[i];
    }

    return result;

}

double getCorrelationCoefficient(double xValues[], double yValues[], double xSum, double ySum, int n){

    double xAverarge=xSum/n, yAverage=ySum/n;
    double xDeviance=0, yDeviance=0, codeviance=0;

    int i;

    //get Dev(X) and Dev(Y)
    for(i=0; i<n; i++){
        xDeviance+=pow(xValues[i]-xAverarge, 2);
        yDeviance+=pow(yValues[i]-yAverage, 2);
    }

    for(i=0; i<n; i++){
        codeviance+=(xValues[i]-xAverarge)*(yValues[i]-yAverage);
    }

    if(codeviance!=0){
        return codeviance/sqrt(xDeviance*yDeviance);
    }else{
        return 0;
    }

    


}