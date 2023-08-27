#include <iostream>
using namespace std;
#include <cmath>
class Solution{
  public:
    int RecursivePower(int n,int p)
    {
        if(p==0) return 1;
        if(p==1) return n;
        return pow(n,p);
        RecursivePower(n,p);
    }
};
int main() 
{
    int n;
    int p;
	   cout<<"Enter two numbers n and p"<<endl; 
	    cin>>n>>p;
	    Solution obj;
	    cout<<obj.RecursivePower(n,p)<<endl;
	return 0;
}