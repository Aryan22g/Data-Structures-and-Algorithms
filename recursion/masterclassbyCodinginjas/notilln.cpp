#include <iostream>
using namespace std;

int increase(int n)
{
    if (n == 0)
        return 0;
    increase(n-1);
    cout<<n<<" ";
}
int decrease(int n)
{
    if (n == 0)
        return 0;
    cout<<n<<" ";
    decrease(n-1);

}
int main()
{
    increase(78);
    cout<<endl;
    decrease(78);
}