#include<iostream>
#include<algorithm>
using namespace std;
#define endl "\n"
const int N=1e5;

int g[N],o[N];
void function(){
	int n,count=0;
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>g[i];
	for(int i=0;i<n;i++)
		cin>>o[i];
	sort(g,g+n);
	sort(o,o+n);
	for(int i=0,j=0;i<n;)
	{
      if(g[i]>o[j])
       {
       	count++;
        i++;j++;  
       }
       else{
       	i++;
       }
	}
	cout<<count<<endl;
}
int main()
{   ios_base::sync_with_stdio(false); 
    cin.tie(NULL) ; 
	int t;
	cin>>t;
	while(t--)
		function();
	return 0;
}
