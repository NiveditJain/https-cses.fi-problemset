#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
	cin>>n;
	if(n==1)
	{
	 cout<<1;
	 return 0;
	}
	if(n==4)
	{
	    cout<<"2 4 1 3";
	    return 0;
	}
	if(n<4)
	{
	    cout<<"NO SOLUTION";
	    return 0;
	}
	int right,left;
    if(n%2==0)
    {
        right=n;
        left=n-1;
    }
    else
    {
        right=n-1;
        left=n;
    }
    while(right>4)
    {
        cout<<right<<" ";
        right=right-2;
    }
    cout<<4<<" "<<2<<" "<<5<<" "<<3<<" "<<1<<" ";
    int i=7;
    while(i<=left-2)
    {
        cout<<i<<" ";
        i=i+2;
    }
    if(left>=7)
    {
        cout<<left;
    }
	return 0;
}
