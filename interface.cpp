#include <iostream>
using namespace std;

int interface(double xValues[], double yValues[]){

    int n, i;
    
    cout<<"How many values: ";
    cin>>n;

    system("clear");

    for(i=0; i<n; i++){
        cout<<"Insert x and y: ";
        cin>>xValues[i]>>yValues[i];
    }

    system("clear");

    return n;

}