#include<iostream>
#include<vector>
using namespace std;
int main()
{    
	 vector<vector<int> > vec{ { 0,1,1,1 },
                                { 1,1,1,1 },
                                { 0,1,1,1 } }; 
   	
  //solution
   int n,m;
   cin>>n>>m;
  vector<vector<int>>dp(n,vector<int>(m,0))  ;
  int result=0;
  for(int i=0;i<n;i++)
  {
  	for(int j=0;j<m;j++)
  		{
  			if(( i==0 || j==0 ) && vec[i][j]==1)
  			 dp[i][j]=1;
  			 	
  			else if(vec[i][j]==1)
  			   dp[i][j]=min(dp[i-1][j-1],min(dp[i-1][j],dp[i][j-1]))+1;
  		result+=dp[i][j];
  		}
 
   }
 

 for(int i=0;i<n;i++)
  {
  	for(int j=0;j<m;j++)
  		cout<<dp[i][j]<<' ';
  	cout<<endl;
  }
  cout<<result;
}