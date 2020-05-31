#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	int number;
	cin>>number;
	while(number-->0)
	{
	    string s;
	    cin>>s;
	    int n=s.size();
	   string s1,s2;
	    if(n%2==0)
	    {
	        int j=n/2;
	       // int ans=0;
	         for(int i=0;i<n/2;i++)
	         {
	             s1+=s[i];
	             s2+=s[j++];
	         }
	        
	    }
	    else
	    {
	        int j=n/2 + 1;
	       // int ans=0;
	         for(int i=0;i<n/2;i++)
	         {
	             s1+=s[i];
	             s2+=s[j++];
	         }
	    }
	    sort(s1.begin(),s1.end());
	    sort(s2.begin(),s2.end());
	    if(s1==s2)
	    {
	        cout<<"YES"<<endl;
	        
	    }
	    else
	    {
	        cout<<"NO"<<endl;
	    }
	    
	    
	    
	}
	
	return 0;
}