#include<bits/stdc++.h>
using namespace std;
bool present[200001];

int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        present[i]=false;
    }
    for(int i=1;i<n;i++)
    {
        int temp;
        cin>>temp;
        present[temp]=true;
    }
    int i;
    for(i=1;present[i]!=false;i++);
    cout<<i;
    return 0;
}