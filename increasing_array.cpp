#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin>>n;
    long long int cost=0;
    long int prev;
    cin>>prev;
    for(long long int i=1;i<n;i++)
    {
        long long int temp,temp_cost;
        cin>>temp;
        temp_cost=temp-prev;
        if(temp_cost<0)
        {
            cost=cost-temp_cost;
        }
        else
        {
            prev=temp;
        }
        
    }
    cout<<cost;
}