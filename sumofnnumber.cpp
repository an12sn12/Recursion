#include<iostream>
using namespace std;
int  sum(int n){
if (n==0)
{
    return 0;
}
int prevsum=sum(n-1);
return n+prevsum;
}
 int main()
  {
      int t;
      cin>>t;
      while (t--)
      {
int n;
cin>>n;
std::cout << sum(n) << std::endl;
         
      }
    return 0;
}