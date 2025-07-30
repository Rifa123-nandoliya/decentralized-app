#include<iostream>
using namespace std;
int ans(int a,int b){
    int count = 0;
      int m = (a|b);
        while(m!=0){
            if((m&1)==1){
                count++;
            }
           m=m>>1;
        }
        return count;
}
int main(){
    int a,b;
    cout<<"Enter a and b :"<<endl;
    cin>>a>>b;
    cout<<"Number of set bits in a | b : "<<ans(a,b)<<endl;
}