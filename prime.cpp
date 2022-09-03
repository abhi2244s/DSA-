#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter number to check prime or not " << endl;
    cin>>n;
    int i =2;
    while (i<n)
    {
        /* code */
        if(n%i==0){
            cout << "Not Prime for "<<i << endl;
        }
        else{
            cout << "Prime for "<<i  << endl;
        }
        i = i+1;
    }
    
}