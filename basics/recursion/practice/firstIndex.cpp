#include<iostream>
using namespace std;

int index(int arr[], int size, int n){
    if(size == 0){
        return -1;
    }
    if(arr[0] == n){
        return size;
    }
    int recursiveCall = index( arr+1, size-1, n);
    return recursiveCall;
}

int main(){
    int arr[] = {5,5,6,5,6};
    int size = sizeof(arr)/sizeof(int);
    int n;
    cin>>n;
    int answer = index( arr, size, n);
    if(answer == -1){
        cout<<"The number is not present in the array."<<endl;
    }
    else{
        answer = size - answer;
        cout<<"The number is present at index "<<answer<<"."<<endl;
    }
    return 0;
}
