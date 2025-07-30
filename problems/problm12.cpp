#include<iostream>
using namespace std;
void reverse(int a[],int size){
int rev[size];
for (int i = 0,j = size-1 ; i < size,j >= 0; i++,j--)
{
  rev[j]=a[i];  
}
cout<<"Reversed array : "<<endl;
for(int i=0;i<size;i++){
    cout<<rev[i]<<endl;
}

}
int main(){
    int a[5];
    for(int i=0;i<5;i++){
        cin>>a[i];
    }
    reverse(a,5);
}