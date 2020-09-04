
#include <bits/stdc++.h>

using namespace std;

long long res(long long a,long long b,long long x,long long y,long long n){
    long long t = min(a-x,n);
    a -=t;
    n -=t;
    t = min(b-y,n);
    b -=t;
    
    return a*b;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
    long long a,b,x,y,n;
    cin>>a>>b>>x>>y>>n;
    cout<<min(res(a,b,x,y,n),res(b,a,y,x,n))<<"\n";
    }


    return 0;
}
