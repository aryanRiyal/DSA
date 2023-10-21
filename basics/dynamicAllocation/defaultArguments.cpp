#include<iostream>
using namespace std;

int sum(int * a, int size, int si = 0){
    int ans = 0;
    for(int i = si; i<size; i++){
        ans += a[i];
    }
    return ans;
}

int sum2(int a, int b, int c = 0, int d = 0){
    int ans = a + b + c + d;
    return ans;
}

int main(){
    int arr[10];
    cout<<"arr[10] = { ";
    for(int i = 0;i<10;i++){
        arr[i] = i*4;
        cout<<arr[i]<<" ";
    }
    cout<<"}"<<endl;
    int total = sum(arr,10);
    cout<<"int total = sum(arr,10);"<<endl;
    cout<<"total = "<<total<<endl;
    total = sum(arr,10,4);
    cout<<"int total = sum(arr,10,4);"<<endl;
    cout<<"total = "<<total<<endl<<endl;

    int a = 10, b = 20, c = 30, d = 40;
    cout<<"int a = 10, b = 20, c = 30, d = 40;"<<endl;
    cout<<"calling sum2(a,b);"<<endl;
    total = sum2(a,b);
    cout<<"total = "<<total<<endl;
    cout<<"calling sum2(a,b,c);"<<endl;
    total = sum2(a,b,c);
    cout<<"total = "<<total<<endl;
    cout<<"calling sum2(a,b,c,d);"<<endl;
    total = sum2(a,b,c,d);
    cout<<"total = "<<total<<endl<<endl;
    
    cout<<"Default arguments provide the flexibility to call a function with fewer arguments than it formally declares. When you don't provide a value for a parameter with a default argument, the default value is used. This is useful in scenarios where you want to make certain function parameters optional while still providing sensible defaults."<<endl;
    return 0;
}
