#include<iostream>
using namespace std;

int main(){
    cout<<"Static Memory Allocation"<<endl;
    int n = 10;
    int arr[n] = {0};
    cout<<"int n = 10;"<<endl;
    cout<<"int arr[n] = {0};"<<endl;
    cout<<"arr["<<n<<"] = { ";
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"}"<<endl<<endl;
    cout<<"Static Array on the Stack (`int arr[n]`): Automatic Management, Faster Access, Limited Size, Shorter Lifetime."<<endl;
    cout<<"Static arrays (`int arr[n]`) on the stack are appropriate for fixed-size arrays with automatic memory management, but have limited size and shorter lifetimes. The choice depends on the specific needs and trade-offs of your program."<<endl<<endl;

    cout<<"Bad Practise in case size is not decided on compile time"<<endl;
    int n1;
    cout<<"n1: ";
    cin>>n1;
    cout<<"int ar[n1] = {0};"<<endl;
    int ar[n1] = {0};
    cout<<"ar["<<n1<<"] = { ";
    for(int i = 0; i<n1; i++){
        cout<<ar[i]<<" ";
    }
    cout<<"}"<<endl;
    cout<<endl<<endl;

    cout<<"Dynamic Memory Allocation"<<endl;
    cout<<"When the size of an array is not known at compile time, dynamic memory allocation is a more flexible and practical choice, as it allows for variable-sized data structures and avoids the stack limitations. This is especially important when dealing with user input for array sizes."<<endl<<endl;
    int n2;
    cout<<"n2: ";
    cin>>n2;
    cout<<"int * pa1 = new int[n2];"<<endl;
    cout<<"Example to find the max from an array"<<endl;
    int * pa1 = new int[n2];
    int j = 1;
    for(int i = 0; i<=n2; i++){
        if(i%2==0)
            pa1[i] = j*7;
        else
            pa1[i] = j*13;
        j++;
    }
    int max = -1;
    cout<<"pa1["<<n2<<"] = { ";
    for(int i = 0; i<n2; i++){
        cout<<pa1[i]<<" ";
        if(max<pa1[i]){
            max = pa1[i];
        }
    }
    cout<<"}"<<endl;
    cout<<"max = "<<max;
    delete[] pa1;
    cout<<endl<<endl;

    int * p = new int;
    *p = 10;
    cout<<"int * p = new int;"<<endl;
    cout<<"*p = "<<*p<<endl;
    delete p;
    cout<<"delete p;"<<endl<<"It deletes the 4bytes heap memory provided for the int not the 8bytes for the pointer. So we can still use the pointer again."<<endl<<endl;

    double * pd = new double;
    *pd = 23.23;
    char * pc = new char;
    *pc = 'A';
    int * pa = new int[50];
    pa[1] = 2;
    cout<<"int * pa = new int[50];"<<endl;
    cout<<"Total memory used here is: 200bytes from the heap and 8bytes from the stack"<<endl;
    delete[] pa;
    cout<<"delete[] pa;"<<endl<<endl;

    cout<<"Dynamic Memory Allocation (`new int[n2]`): Dynamic Size, Heap Memory, Risk of Memory Leaks, Overhead, Slower Access."<<endl;
    cout<<"Dynamic memory allocation (`new int[n2]`) is suitable for variable-size arrays stored in the heap, but it carries the risk of memory leaks and requires manual management."<<endl<<endl;
    return 0;
}
