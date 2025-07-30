#include<iostream>
using namespace std;
bool search1(int arr[],int size,int search){
 for (int i = 0; i < size; i++)
 {
    if( search==arr[i]){
        return true;
    }
}
    return false;
}
int main(){
 int arr[10],search;
 for (int i = 0; i < 10; i++)
 {
   cin>>arr[i];
 }
 cout<<"Enter the element u want to search : "<<endl;
 cin>>search;

 bool found = search1(arr,10,search);
 if(found){
    cout<<"Element found"<<endl;
 }
 else{
    cout<<"Element not found";
 }
 
}