#include<iostream>
using namespace std;
int main()
{
    int n,i,v=0;
    cout<<"input the number:\n";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
            v++;
    }
    if(v==2)
        cout<<"Prime";
    else
        cout<<"not Prime";

    return 0;
}
