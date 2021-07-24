/*output:
10
     10
   /     \
  20     30
 /  \   /  \
40  50 60   70
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
struct node{
  int key;
  struct node *left;
  struct node *right;
   node(int k){
    key=k;
    right=left=NULL;
  }
};
int minnode(node *root){
  if(root ==NULL){
    return INT_MAX;
  }
  else{
    return min(root->key,min(minnode(root->left),minnode(root->right)));
  }
}
int main() {
node *root=new node(10);
root->left=new node(20);
root->right=new node(30);
root->left->left= new node(40);
root->left->right=new node(50);
root->right->left=new node(60);
root->right->right=new node(70);
cout<<minnode(root);
}

