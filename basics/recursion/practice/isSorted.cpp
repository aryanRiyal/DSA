#include<iostream>
using namespace std;

bool isSorted2(int arr[], int size){
    if(size == 0 || size == 1){
        return true;
    }
    bool smallerSorted = isSorted2( arr+1, size-1);
    if(!smallerSorted){
        return false;
    }
    if(arr[0] > arr[1]){
        return false;
    }
    else {
        return true;
    }
}

bool isSorted(int arr[], int size){
    if(size == 0 || size == 1){
        return true;
    }
    if(arr[0] > arr[1]){
        return false;
    }
    bool smallerSorted = isSorted( arr+1, size-1);
    return smallerSorted;
}

int main(){
    int arr[] = {1,2,3,4,5,6,7,8};
    int size = sizeof(arr)/sizeof(int);
    bool answer = isSorted( arr, size);
    bool answer2 = isSorted2( arr, size);
    if(answer){
        cout<<"The array is sorted."<<endl;
    }
    else{
        cout<<"The array is not sorted."<<endl;
    }
    if(answer2){
        cout<<"The array is sorted."<<endl;
    }
    else{
        cout<<"The array is not sorted."<<endl;
    }
    return 0;
}
