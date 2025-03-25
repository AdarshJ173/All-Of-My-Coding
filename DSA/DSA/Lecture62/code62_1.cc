#include<iostream>
#include<queue>
using namespace std;

class node{
    public:
        int data;
        node* left;
        node* right;
    
    node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

node* buildTree(node* root){

    cout<<"Enter the data"<<endl;
    int data;
    cin>>data;

    if(data == -1){
        return NULL;
    }

    root = new node(data);

    cout<<"Enter data for inserting in left of "<<data<<endl;
    root->left = buildTree(root->left);
    cout<<"Enter data for inserting in right of "<<data<<endl;
    root->right = buildTree(root->right);
    return root;

}

void levelOrderTraversal(node* root){
    if(root == NULL){
        return;
    }

    queue<node*> q;
    q.push(root);
    
    while (!q.empty())
    {
        int size = q.size();

        for(int i = 0; i < size; i++){
            node* temp = q.front();
            cout<<temp->data<<" ";
            q.pop();

            if(temp -> left){
                q.push(temp -> left);
            }

            if (temp -> right)
            {
                q.push(temp -> right);
            }
        }

        cout<<endl;
    }
}

/// LNR
void inorder(node* root){
    //base case
    if(root == NULL){
        return;
    }
    inorder(root -> left);
    cout<<root->data<<" ";
    inorder(root -> right);
}

/// NLR
void preorder(node* root){
    //base case
    if(root == NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root -> left);
    preorder(root -> right);
}

/// LRN
void postorder(node* root){
    //base case
    if(root == NULL){
        return;
    }
    postorder(root -> left);
    postorder(root -> right);
    cout<<root->data<<" ";
}

void buildFromLevelOrder(node* & root){
    queue<node*> q;
    cout<<"enter data for root node"<<endl;
    int data;
    cin>>data;
    root = new node(data);
    q.push(root);

    while (!q.empty())
    {
        node* temp = q.front();
        q.pop();

        cout<<"enter left node for "<<temp->data<<endl; 
        int leftData;
        cin>>leftData;

        if(leftData != -1){
            temp->left = new node(leftData);
            q.push(temp->left);
        }

        cout<<"enter right node for "<<temp->data<<endl; 
        int rightData;
        cin>>rightData;

        if(rightData != -1){ // Fixed the condition to check rightData instead of leftData
            temp->right = new node(rightData);
            q.push(temp->right);
        }

    }
    
}

int main(){
    
    node* root = NULL;

    buildFromLevelOrder(root);
    levelOrderTraversal(root);

    //1 3 5 7 11 17 -1 -1 -1 -1 -1 -1 -1

    /*

    //creating a tree
    root = buildTree(root); 

    //1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1


    cout<<"printing the level order traversal output"<<endl;
    //level order traversal
    levelOrderTraversal(root);

    cout<<"printing the inorder traversal output"<<endl;
    inorder(root);

    cout<<"printing the preorder traversal output"<<endl;
    preorder(root);

    cout<<"printing the postorder traversal output"<<endl;
    postorder(root);

    return 0; 

    */
}