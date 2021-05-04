#include<iostream>
using namespace std;
void displayarray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<"The value of"<<i<<"Element is: "<<arr[i]<<endl;;
    }
}
int main(){
    int n;
    cout<<"How long array you want to make?: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for (int i = 0; i <(7/2); i++)
    {
        int temp;
        temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }
    displayarray(arr,n);
    return 0;
}