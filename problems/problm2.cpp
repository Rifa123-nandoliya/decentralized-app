//conversion of binary to decimal
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    long int n;
    int answer=0;
    int i=0;
    cin>>n;
    while(n!=0){
        int digit = n % 10;
        if(digit==1){
        answer = pow(2,i) + answer;
        }
        n=n/10;
        i++;
    }
    cout<<answer<<endl;
}