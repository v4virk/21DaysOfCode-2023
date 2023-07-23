#include<iostream>

using namespace std;

int main(){
    int n, sum = 0;
    cout<<"enter the size of array \n";
    cin>>n;
     
    int arr[n];
    cout<<"enter the elements of the array\n";

    for(int i = 0; i<n; i++){
        cin>>arr[i];

    }
    for(int i = 0; i<n; i++){
        sum += arr[i];

    }
    cout<<"the sum of the elements : "<<sum<<"\n";


    
}