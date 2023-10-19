#include<iostream>
using namespace std;

int main() {
    int a[10] = {2,4,6};
    cout<<"int a[10] = {2,4,6};"<<endl;
    cout<<"a        = "<<a<<endl;
    cout<<"&a[0]    = "<<&a[0]<<endl;
    cout<<"so, a == &a[0]"<<endl<<endl;

    cout<<"a[10] = ";
    for (int i = 0; i < 10; i++){
       cout<<a[i]<<" ";
    } 
    cout<<endl;

    cout<<"*a       = "<<*a<<" and a[0] = "<<a[0]<<endl;
    cout<<"*(a + 1) = "<<*(a + 1)<<", a[1] = "<<a[1]<<" and 1[a] = "<<1[a]<<endl;
    cout<<"*(a + 2) = "<<*(a + 2)<<", a[2] = "<<a[2]<<" and 2[a] = "<<2[a]<<endl;
    cout<<"so, *(a + i) == a[i] == i[a]"<<endl<<endl;

    int arr[10] = {0};
    int * ar = &arr[0];
    cout<<"If you declare an array without initializing it explicitly, the elements of the array will contain \"garbage values\"."<<endl;
    cout<<"int arr[10] = {0}"<<endl<<"arr[10] = ";
    for (int i = 0; i < 10; i++){
       cout<<*(ar + i)<<" ";
    } 
    cout<<endl<<endl;

    //Differences
    cout<<"Differences between int *ar and int arr[10]"<<endl;
    cout<<endl<<"1. sizeof()"<<endl;
    cout<<"sizeof(ar) = "<<sizeof(ar)<<endl;
    cout<<"sizeof(arr) = "<<sizeof(arr)<<endl;
    cout<<"Because we are creating a pointer in case of ar, so ar is also a pointer variable and is also stored in the symbol table, but arr is not a variable it is only stored in the symbol table."<<endl; 
    
    cout<<endl<<"2. & operator"<<endl;
    cout<<"arr  = "<<arr<<" and ar   = "<<ar<<endl;
    cout<<"&arr = "<<&arr<<" and &ar  = "<<&ar<<endl;
    cout<<"This also proves point 1 and we cannot change the entry made to the symbol table."<<endl;
    cout<<"so, ar = ar + 1; is possible but arr = arr + 1; (arr++) is not."<<endl;
    return 0;
}
