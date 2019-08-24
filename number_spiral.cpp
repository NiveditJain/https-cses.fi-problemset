#include <iostream>
using namespace std;

int main() {
	long long int t;
	cin>>t;
	while(t)
	{
	    long long int x,y,answer,center;
	    cin>>x>>y;
	    center=(x>y)?x:y;
	    answer=1+(center-1)*center;
	    bool x_g;
	    if(center%2==1)
	    {
	        x_g=(x>y)?true:false;
	        if(x_g)
	        {
	            answer+=y-center;
	        }
	        else
	        {
	            answer+=center-x;
	        }
	    }
	    else
	    {
	        x_g=(x>y)?true:false;
	        if(x_g)
	        {
	            answer+=center-y;
	        }
	        else
	        {
	            answer+=x-center;
	        }
	    }
	    std::cout << answer << std::endl;
	    t--;
	}
	return 0;
}
