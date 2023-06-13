#include<iostream>
#include<vector>
#include<queue>

using namespace std;

template <typename T>
class TreeNode {
    public:
    T data;
    vector<TreeNode<T>*> children;

    TreeNode(T data) {
        this->data = data;
    }

    ~TreeNode() {
        for (int i = 0; i < children.size(); i++) {
            delete children[i];
        }
    }
};

// Print Tree
TreeNode<T>* takeInputLevelWise(){
int rootData;
cout<<"Enter root data"<<endl;
cin>>rootData;
TreeNode<int>* root = new TreeNode<int>(rootData);
queue<TreeNode<int>*> q;
q.push(root);
while(!q.empty()){
TreeNode<int>* f = q.front();
q.pop();
cout<<"Enter no of children of "<<f->data<<endl;
int n;
cin>>n;
for(int i=1;i<=n;i++){
int childData;
cout<<"Enter "<<i<<" th child of "<<f->data<<endl;
cin>>childData;
TreeNode<int>* child = new TreeNode<int>(childData);
q.push(child);
f->children.push_back(child);
}
}
return root;
}

void printTree(TreeNode<int>* root){
if(root==NULL){
return ;
}
cout<<root->data<<": ";
for(int i=0;i<root->children.size();i++){
cout<<root->children[i]->data<<" ,";
}
cout<<endl;
for(int i=0;i<root->children.size();i++){
printTree(root->children[i]);
}
}

void printTreeLevelWise(TreeNode<int>* root){
queue<TreeNode<int>*> q;
q.push(root);
int counter=0;
while(!q.empty()){
TreeNode<int>* f = q.front();
counter++;
q.pop();
cout<<f->data<<": ";
for(int i=0;i<f->children.size();i++){
cout<<f->children[i]->data<<" ,";
}
cout<<endl;
for(int i=0;i<f->children.size();i++){
q.push(f->children[i]);
}
}
//Print the value of the counter when the Queue is empty
cout<<"The number of nodes is "<<counter<<endl;
}

int countNodes(TreeNode<int>* root){
if(root==NULL){ /// edge case
return 0;
}
int ans = 1;
for(int i=0;i<root->children.size();i++){
ans += countNodes(root->children[i]);
}
return ans;
}

int height(TreeNode<int>* root){
if(root==NULL){ /// edge case
return 0;
}
int mx = 0; /// maximum height
for(int i=0;i<root->children.size();i++){
mx = max(mx, height(root->children[i]));
}
return mx + 1;
}

void main(){
TreeNode<int>* root = takeInputLevelWise();
printTree(root);
printTreeLevelWise(root);
cout<<"The number of nodes is "<<countNodes(root)<<endl;
cout<<"The height of the tree is "<<height(root)<<endl;
}