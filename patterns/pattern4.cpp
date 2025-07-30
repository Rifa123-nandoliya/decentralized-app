#include<iostream>
using namespace std;
int main()
{
    int n,i=1;
    cout<<"Enter a number :"<<endl;
    cin>>n;
    //print spaces
    while(i<=n){
       int j = 1;
       int space=n-i;
       while(space!=0){
        cout<<" ";
        space--;
       }
       //print 2nd triangle
      while(j<=i){
        cout<<j;
        j++;
      }
      //print 3rd traingle
      int start = i-1;
      while(start!=0){
        cout<<start;
        start--;
      }
      i++;
      cout<<endl;
    }
    return 0;
}