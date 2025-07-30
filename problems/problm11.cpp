#include<iostream>
using namespace std;
int sum1(int arr[],int size){
int sum=0;
for (int i = 0; i < size; i++)
{
 sum+=arr[i];
}
return sum;
}
int main(){
int a[4];
for (int i = 0; i < 4; i++)
 {
   cin>>a[i];
 }
cout<<"Sum is : "<<sum1(a,4)<<endl;
}