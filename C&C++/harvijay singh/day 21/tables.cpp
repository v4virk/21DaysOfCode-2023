//multiplication table till 10
#include<iostream>

using namespace std;
int main(){

    int n,k;
    cout<<"enter the no : ";
    cin>>n;
    
    cout<<"the table\n";


    for(int i = 1; i<11; i++){
        k = n*i;
        cout<<n<<" * "<<i<<" = "<<k<<"\n";

    }


}