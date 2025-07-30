// #include<iostream>
// using namespace std;
// int main()
// {
//     int n,i=1;
//     cout<<"Enter a number :"<<endl;
//     cin>>n;
//     while(i<=n){
//        int j = 1;
//       while(j<=n){
//         cout<<j;
//         j++;
//       }
//       i++;
//       cout<<endl;
//     }
//     return 0;
// }
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n,i=1;
//     cout<<"Enter a number :"<<endl;
//     cin>>n;
//     while(i<=n){
//        int j = 1;
//       while(j<=n){
//         cout<<n-j+1;
//         j++;
//       }
//       i++;
//       cout<<endl;
//     }
//     return 0;
// }
#include<iostream>
using namespace std;
int main()
{
    int n,i=1,count=1;
    cout<<"Enter a number :"<<endl;
    cin>>n;
    while(i<=n){
       int j = 1;
      while(j<=n){
        cout<<count;
        count++;
        j++;
      }
      i++;
      cout<<endl;
    }
    return 0;
}
