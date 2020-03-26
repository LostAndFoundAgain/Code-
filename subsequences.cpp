#include<iostream>
using namespace std;
int subsequences(char *in,char*out,int i,int j)
{
	//base case
    if(in[i]=='\n')
    	{
    		out[j]='\n';
    		cout<<out;
    	}	
	//recursive case
	out[j]=in[i];
	subsequences(in,out,i+1,j+1);
	subsequences(in,out,i+1,j);
	return 0;

}

int main()
{   char in[100],out[100];
	cin>>in;
	subsequences(in,out,0,0);  
	return 0;
}