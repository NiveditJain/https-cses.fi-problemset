#include<bits/stdc++.h>
using namespace std;
int main()
{
    string sq;
    cin>>sq;
    unsigned int count=1,max=1;
    char temp=sq[0];
    for(unsigned int i=1;i<sq.length();i++)
    {
        if(temp==sq[i])
        {
            count++;
        }
        else
        {
            temp=sq[i];
            if(count>max)
                max=count;
            count=1;
        }
    }
    if(count>max)
        max=count;
    cout<<max;
}