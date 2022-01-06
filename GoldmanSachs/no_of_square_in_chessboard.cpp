#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter the value of n";
    cin>>n;
    cout<<"Number of square in nxn grid is: ";
    cout<<(n*(n+1)*(2*n+1))/6;
    return 0;
}
