#include <bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    int mod=1000000007;
    long long power(int N,int R)
    {
      if(R==1) return N;
      if(R==0) return 1;
      long long ans=power(N,R/2)%mod;
      ans=(ans*ans)%mod;
      if(R%2==1) ans=(ans*N)%mod;
      return ans;
    }
};
long long rev(long long n)
{
    long long rev_num = 0;
     while(n > 0) 
      { 
        rev_num = rev_num*10 + n%10; 
        n = n/10; 
      } 
      return rev_num;
}
int main()
{
        long long N;
        cout<<"Enter your Number"<<endl;
        cin>>N;
        long long R = 0; 
        R = rev(N);
        Solution ob;
        long long ans =ob.power(N,R);
        cout << ans<<endl;
    
}