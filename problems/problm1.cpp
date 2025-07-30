//conversion decimal to binary
#include<iostream>
#include <cmath>
using namespace std;
int main(){
    int n,answer=0,i=0;
    cout<<"Enter a number:"<<endl;
    cin>>n;
    while(n!=0){
        int bit = n & 1 ;
        answer = ( bit*pow(10,i) ) + answer;
        n = n>>1;
        i++;
    }
    cout<<"binary form: "<<answer<<endl;
}