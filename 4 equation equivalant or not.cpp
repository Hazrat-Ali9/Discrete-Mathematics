#include<bits/stdc++.h>
using namespace std;
int main()
{
    int p[5],q[5],r[5],i;
    p[0]=0;
    p[1]=1;
    q[0]=0;
    q[1]=1;
    r[0]=0;
    r[1]=1;
    for(i=0; i<8; i++)
    {
        cin>>p[i]>>q[i]>>r[i];
        int a=(p[i]&q[i]);
        int b=!a;
        int c=(b&r[i]);
        cout<<c<<endl;
    }
    return 0;
}



