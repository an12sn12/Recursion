#include <iostream>
using namespace std;
int fact(int n){
    if (n==0)
    {
        return 1;
    }
    int facto=fact(n-1);
    return n*(n-1);
}
int main()
{
    int n;
    cin>>n;
    std::cout << fact(n) << std::endl;
}