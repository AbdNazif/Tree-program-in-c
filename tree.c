#include<stdio.h>
#include<stdlib.h>


struct node 
{ 
	int data; 
	struct node *left; 
	struct node *right; 
}; 


struct node* nextNode(int data) 
{ 
struct node* node = (struct node*)malloc(sizeof(struct node)); 

node->data = data; 

node->left = NULL; 
node->right = NULL; 
return(node); 

} 


int main() 
{ 

struct node *root = nextNode(1); 

root->left	 = nextNode(2); 
root->right	 = nextNode(3); 

root->left->left = nextNode(4); 

getchar(); 
return 0; 
}
