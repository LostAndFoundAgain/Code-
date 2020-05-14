#include<iostream>
#include<queue>
using namespace std;
class node{
public:
	int data;
	node *left;
	node *right;
	node(int d)
	{
		data=d;
 		left=right=NULL;
	}
};

node* createtree()
{    
   int d;
   cin>>d;
   if(d==-1)
  	return NULL;

  node* root=new node(d);
  root->left=createtree();
  root->right=createtree();
}

queue<node*>q;
void printlevel(node* root){
  q.push(root);
  q.push(NULL);
  while(!q.empty())
  {
  	node* ans=q.front();
  	q.pop();
  	if(ans==NULL)
  	{
  		cout<<endl;
  		if(!q.empty())
  			q.push(NULL);
  	}
     else
     {
     	cout<<ans->data<<' ';
     	if(ans->left)
     		q.push(ans->left);
     	if(ans->right)
     		q.push(ans->right);
     }
     
  }
}

node* mirrortree(node * &root)
{
   if(root==NULL)
   	return NULL;
   swap(root->left,root->right);
   mirrortree(root->left);
   mirrortree(root->right);
}

void inorder(node* root)
{
	if(root==NULL)
		return ;
	inorder(root->left);
	cout<<root->data<<' ';
	inorder(root->right);
}

void preorder(node* root)
{
	if(root==NULL)
		return ;
	cout<<root->data<<' ';
	preorder(root->left);
	preorder(root->right);
}
void postorder(node* root)
{
	if(root==NULL)
		return ;
	postorder(root->left);
	postorder(root->right);
	cout<<root->data<<' ';
}

int pre[]={8,3,1,6,4,7,10,14,13};
int in[]={1,3,4,6,7,8,10,13,14};
int  k=0;
node* buildtreeprein(int s,int e)
{  if(s>e)
	return NULL;

    int data=pre[k++];
    node* root=new node(data);
    int j=-1;
    for(int i=s;i<=e;i++)
    {
    	if(data==in[i])
    	{
    		j=i;
    		break;
    	}
    }
      root->left=buildtreeprein(s,j-1);
      root->right=buildtreeprein(j+1,e);
      return root;
}

int main()
{
	node* root;
	root=createtree();
	//root=buildtreeprein(0,8);
    cout<<"Level order \n" ;printlevel(root);
   //mirrortree(root);
   //printlevel(root);
  /*cout<<"Inorder ";inorder(root);
  cout<<endl;
  cout<<"Preorder ";preorder(root);
  cout<<endl;
  cout<<"Postorder ";postorder(root);
  */
}
