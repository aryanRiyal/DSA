#include<iostream>
using namespace std;

/*
 * PMI: The Principle of Mathematical Induction is a powerful mathematical proof technique that can also be applied to reasoning about recursive functions and algorithms.
 *
 * F(n) is true for all natural numbers
 * 1. Base Case: Prove that F(0) or F(1) is true.
 * 2. Induction Hypothesis: Assume that F(k) is true for some arbitrary positive integer k.
 * 3. Induction Step: Prove that F(k+1) is true based on the assumption that F(k) is true.
 *
*/

int factorial(int n){
    if(n == 0){
        cout<<endl<<"base case:   if(n == 0), return 1"<<endl;
        cout<<"smallOutput = previous return(output)"<<endl<<endl;
        return 1;
    }
    cout<<"calling factorial("<<n<<"-1)"<<endl;

    int smallOutput = factorial(n-1);
    int output = n * smallOutput;

    cout<<"return factorial("<<n<<") = [output("<<output<<") = n("<<n<<") * smallOutput("<<smallOutput<<")]"<<endl;
    return output;
}

int main(){
    int n;
    cout<<"using recursion find factorial of ";
    cin>>n;
    cout<<endl;

    int result = factorial(n);
    cout<<endl<<"answer = "<<result<<endl;
    return 0;
}
