#include<iostream>

using namespace std;

int main(){
    int arr[5];
    cout<<"enter the elements of the array :\n";
    
    for(int i=0; i<5; i++){
        cin>>arr[i];
    }
    for(int i = 0; i<5; i++)
    {
        for(int j = 0; j<5; j++)
        {
            if (arr[j]>arr[j+1])
            {
                int k = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = k;

            }
        } 
     }

       cout<<"the second smallest element is : "<<arr[1];
}