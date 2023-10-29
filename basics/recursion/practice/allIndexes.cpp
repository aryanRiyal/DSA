/*
 * Given an array arr of size N and an integer X. The task is to find all the indices of the integer X in the array.
 *
 */

#include<iostream>
using namespace std;

int index( int arr[], int size, int n, int output[]){
    if(size == 0){
        return 0;
    }
    int answer = index( arr+1, size-1, n, output);
    if(arr[0] == n){
        for(int i = answer-1; i>=0; i--){
            output[i+1] = output[i]+1;
        }
        output[0] = 0;
        answer++;
    }
    else{
        for(int i = answer-1; i>=0; i--){
            output[i] = output[i]+1;
        }
    }
    return answer;
}

int main(){
    int arr[] = {1,2,3,3,2,1,2,3,4,3,2,1};
    int size = sizeof(arr)/sizeof(int);
    int n;
    cout<<"number: ";
    cin>>n;
    cout<<"size of the array: "<<size<<endl;
    int output[size] = {0};
    int answer = index( arr, size, n, output);
    cout<<"total indexes number is present at: "<<answer<<endl;
    if(answer>0){
        cout<<"and the indexes are: ";
        for(int i = 0; i<answer; i++){
            cout<<output[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
