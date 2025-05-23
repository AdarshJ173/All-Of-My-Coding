#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

int countNodes(Node* root){

    if(root == NULL){
        return 0;
    }

    return countNodes(root->left) + countNodes(root->right) + 1;

}
                   
int main(){

    Node* root = new Node(1);
    Node* left = new Node(2);
    Node* right = new Node(3);

    root->left->left = new Node(4);
    root->left->right = new Node(4);
    root->right->left = new Node(4);
    root->right->right = new Node(4);

    cout<<countNodes(root)<<endl;

}