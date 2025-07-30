// #include<iostream>
// using namespace std;
// int main()
// {
//     int n,i=1;
//     cout<<"Enter a number :"<<endl;
//     cin>>n;
//     while(i<=n){
//        int j = 1;
//       while(j<=i){
//         cout<<"* ";
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
//       while(j<=i){
//         cout<<i;
//         j++;
//       }
//       i++;
//       cout<<endl;// }
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n,i=1;
//     cout<<"Enter a number :"<<endl;
//     cin>>n;
//     while(i<=n){
//        int j = 1;
//       while(j<=i){
//         cout<<i-j+1;
//         j++;
//       }
//       i++;
//       cout<<endl;
//     }
//     return 0;
// }
// 
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
//         cout<<char(64+i);
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
//         cout<<char(64+j);
//         j++;
//       }
//       i++;
//       cout<<endl;
//     }
//     return 0;
// }
//     }
//     return 0;

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n,i=1,start = 65;
//     cout<<"Enter a number :"<<endl;
//     cin>>n;
//     while(i<=n){
//        int j = 1;
//       while(j<=n){
//         cout<<char(start);
//         j++;
//         start++;
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
//         cout<<char(64+i+j-1);
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
//        char s = 'A'+n-i;
//       while(j<=i){
//         cout<<s;
//         s++;
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
    int n,i=1;
    cout<<"Enter a number :"<<endl;
    cin>>n;
    while(i<=n){
       int j = 1;
       char s = 'A'+i-1;
      while(j<=n){
        cout<<s;
        s++;
        j++;
      }
      i++;
      cout<<endl;
    }
    return 0;
}