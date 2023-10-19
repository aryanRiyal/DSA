#include<iostream>
using namespace std;

//int sum(int a[], int size){
int sum(int * a, int size) {
    cout<<"sizeof(a) = "<<sizeof(a)<<endl;
    int sum = 0;
    for(int i = 0; i<size; i++){
        cout<<"For iteration "<<i<<": ";
        cout<<"sum("<<sum<<") + a["<<i<<"]("<<a[i]<<")"<<endl;
        sum += a[i];
    }
    return sum;
}

int main() {
    int size = 10;
    int arr[size] = {1,2,3,4,5,6,7,8,9,10};
    int total = 0;
    cout<<"sizeof(arr) = "<<sizeof(arr)<<endl<<endl;

    cout<<"We can only pass the address of first index by calling the function, so it is better to initialize the new array as pointer instead of an array in the function signature."<<endl;
    cout<<"Calling sum(arr, size)"<<endl;
    total = sum(arr, size);
    cout<<"Total = "<<total<<endl<<endl;

    cout<<"We can use the above info in different scenarios like passing a part of an array instead of the full array."<<endl;
    cout<<"Calling sum(arr + 2, size-2)"<<endl;
    total = sum(arr + 2, size-2);
    cout<<"Total = "<<total<<endl;
    return 0;
}
