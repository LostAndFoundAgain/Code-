#include<iostream>
#include<algorithm>
using namespace std;

void permutation(char *in,int i)
{   //base case
	if(in[i]=='\0')
	{
       cout<<in<<endl;
       return ;
	}

	//recursive case
	for(int j=i;in[j]!='\0';j++)
	{
		swap(in[i],in[j]);
		permutation(in,i+1);
		swap(in[i],in[j]);		
	}
  return ;
}

int main()
{
	char in[100];
	cin>>in;
	permutation(in,0);
}