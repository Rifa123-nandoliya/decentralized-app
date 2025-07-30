#include<iostream>
using namespace std;
int ap(int n){
    return (3*n+7);
}
int main(){
    int m;
    cout<<"Enter a number"<<endl;
    cin>>m;
    cout<<"nth term of AP is : "<<ap(m)<<endl;

}