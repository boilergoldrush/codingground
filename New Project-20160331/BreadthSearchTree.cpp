#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

struct Node{
       int data;
       Node* left;
       Node* right;
       Node* parent;
   };


vector<int> treeToArray(Node* root){
    // Queue to hold the child pointers of each Node visited
    // Vector to flatten the Tree
    std::queue<Node*> qn; 
    qn.push(root);
    Node* temp;
    std::vector<int> vp;
    
    //Keep looping through until the queue is empty
    // That should complete the breadth traversal
    while(!qn.empty()){
        temp = qn.front(); 
        qn.pop();
        vp.push_back(temp->data);
        
        // Adding the left and right nodes
        if (temp->left != NULL ) qn.push(temp->left);
        if (temp->right != NULL) qn.push(temp->right);
        
    }
    
    return vp;
}
