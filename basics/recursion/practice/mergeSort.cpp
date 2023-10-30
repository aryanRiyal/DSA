#include<iostream>
using namespace std;

void merge(int a[], int si, int mid, int ei){
    int lengthLeft = (mid - si)+1;
    int lengthRight = ei - mid;
    int arrLeft[lengthLeft], arrRight[lengthRight];
    for(int i = 0; i<lengthLeft; i++){
        arrLeft[i] = a[si + i];
    }
    for(int i = 0; i<lengthRight; i++){
        arrRight[i] = a[mid + i + 1];
    }
    
    int i=0, j=0, k=si;
    while( i<lengthLeft && j<lengthRight ){
        if(arrLeft[i]<arrRight[j]){
            a[k] = arrLeft[i];
            i++;
            k++;
        }
        else{
            a[k] = arrRight[j];
            j++;
            k++;
        }
    }
    while(i<lengthLeft){
        a[k] = arrLeft[i];
        i++;
        k++;
    }
    while(i<lengthRight){
        a[k] = arrRight[j];
        j++;
        k++;
    }
}

void sort(int a[], int si, int ei){
    if(si>=ei){
        return;
    }
    int mid = (si+ei)/2;
    sort(a, si, mid);
    sort(a, mid+1, ei);
    merge(a , si, mid, ei);
}

void print(int a[], int size){
    for(int i = 0; i<size; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[] = {12,34,21,45,67,8,5};
    int size = sizeof(arr)/sizeof(int);

    print(arr,size);
    cout<<"merge sort"<<endl;
    sort( arr, 0, size-1);
    print(arr,size);

    return 0;
}
