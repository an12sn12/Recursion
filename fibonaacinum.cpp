#include<iostream>
using namespace std;
int fibo(int n){
    if (n==0)
    {
        return n;
    }
    if (n==1)
    {
        return n;
    }
    int fiboacci=fibo(n-1)+fibo(n-2);
    return fiboacci;
}
int main()
{
    int n;
    cin>>n;
    std::cout << fibo(n) << std::endl;
}