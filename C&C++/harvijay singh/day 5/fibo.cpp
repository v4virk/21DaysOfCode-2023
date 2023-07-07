// print Fibonacci series to the given limit

#include<iostream>

using namespace std;

int main(){
    int x,a,b,sum=0;
    
    a = 0;
    b = 1;
    
    cout<<"enter the limit : ";
    cin>>x;

    cout<<"output 1 : "<<a<<"\n";
    cout<<"output 2 : "<<b<<"\n";

    for(int i = 2; i<x; i++){
        sum = a+1;
        cout<<"output "<<i+1<<" : "<<sum<<"\n";
        a = b;
        b = sum;

    }


}
