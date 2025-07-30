//alternate swap array
#include<iostream>
using namespace std;
void alternateswap(int a[],int size){
    int start=0;
    int end=1;
    while(start<(size-1)&& end<size){
        swap(a[start],a[end]);
        start+=2;
        end+=2;
    }
}
void printarray(int a[],int size){
    cout<<"alternate reversed array is : ";
    for (int i = 0; i < size; i++)
    {
        cout<<a[i]<<" ";
    }
    
}
int main(){
    int a[6];
    // cout<<"Enter the number of elements in your array"<<endl;
    // cin>>size;
    cout<<"Start entering your array elements"<<endl;
    for(int i=0;i<6;i++){
     cin>>a[i];
    }
    alternateswap(a,6);
    printarray(a,6);
}