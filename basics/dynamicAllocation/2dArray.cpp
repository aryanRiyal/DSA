#include<iostream>
using namespace std;

int main(){
    int n,m,k = 1;
    cout<<"row = ";
    cin>>n;
    cout<<"col = ";
    cin>>m;
    cout<<endl;
    int ** p = new int * [n];
    cout<<"int ** p = new int * [n];    (array of pointers/array of arrays)"<<endl;
    cout<<"p[n] = new int[m];   (every index is a column for the 2-d array)"<<endl<<endl;
    for(int i = 0; i<n; i++){
        p[i] = new int[m];
        for(int j = 0; j<m; j++){
            p[i][j] = k++;
        }
    }
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            cout<<p[i][j]<<"    ";
        }
        cout<<endl;
    }

    for(int i = 0; i<n; i++){
        delete [] p[i];
    }
    delete [] p;
    return 0;
}
