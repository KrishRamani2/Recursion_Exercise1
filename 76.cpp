#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int fibonacci(int n)
    {
        if(n<=1) 
     return n;
     else 
     return fibonacci(n-1)+fibonacci(n-2);
    }
};
int main() {
	int T;
	cin>>T;
	while (T--)
	{
	    int n;
	    cin>>n;
	    Solution ob;
	    cout<<ob.fibonacci(n)<<endl;   
	}
	return 0;
}