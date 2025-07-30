//leetcode question 4-complement of base 10 integer
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n :"<<endl;
    cin>>n;
    if(n==0){
        return 1;
    }
    int m=n;
    int mask;
    while(m!=0){
        mask=(mask<<1)|1;
        m=m>>1;
    }
    return ((~n)&mask);

}