#include<iostream>
using namespace std;
int main()
{
    int x, y, z;
    cin>>x>>y>>z;
    if ((y+z)/x == ((y/x)+1))
    {
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
return 0;
}

