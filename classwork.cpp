#include <iostream>
using namespace std;
  

int main()
{
// int n;
// cout<<"Enter the number: ";
// cin>>n;
// int count = 0;
// while( n!= 0){
//     n = n/10;
//     count++;
// }
// cout<<count;
    
//sum of digits

int n,sum=0;
cout<<"Enter the number: ";
cin>>n;
while(n>0)
{ 
    sum=sum+n%10;
    n=n/10;
}
cout<<sum;







}