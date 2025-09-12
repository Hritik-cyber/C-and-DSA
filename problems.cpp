#include <bits/stdc++.h>
using namespace std;

int sum(int n){
    if(n==0){
        return n;
    }



    return n+ sum(n-1);
}
int sumArray(int arr[],int  n){
    if (n==1){
        return arr[0];
    }



    return arr[n-1]+sumArray(arr,n-1);
   
}



int main(){

    cout<<sum(10)<<endl;
    cout<<sum(5)<<endl;


    int arr[]={1,2,3,4,5,6,7};
    int n=sizeof(arr)/sizeof(int);
    cout<<sumArray(arr,n)<<endl;

    

    return 0;
}