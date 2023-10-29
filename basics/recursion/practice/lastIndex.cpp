#include<iostream>
using namespace std;

int index(int arr[], int size, int n){
    if(size == 0){
        return -1;
    }
    int recursiveCall = index( arr+1, size-1, n);
    if(recursiveCall == -1 && arr[0] == n){
        return size;
    }
    return recursiveCall;
}

int main(){
    int arr[] = {5,2,5,4,5,6,6,4,2};
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
