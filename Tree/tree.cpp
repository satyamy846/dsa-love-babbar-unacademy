#include<iostream>
#include<queue>
using namespace std;

class Node{
    
    public:
        int data;
        Node* left;
        Node* right;

        Node(int d){
            data = d;
            left = NULL;
            right = NULL;
        }
};

Node* buildtree(){

    // cout<<"Enter the value of data"<<endl;
    int data;
    cin>> data;
    if(data == -1){
        return NULL;
    }
    Node* root = new Node(data);

    cout<<"Enter value for left child of "<<data<<endl;
    root->left = buildtree();

    cout<<"Enter value right child of "<<data<<endl;
    root->right = buildtree();

    return root;
}

void Preorder(Node* root){
    //N L R
    if(root ==NULL){
        return;
    }

    cout<<root->data<<" ";

    Preorder(root->left);
    Preorder(root->right);
}
void Inorder(Node* root){
    //L N R
    if(root ==NULL){
        return;
    }
    Inorder(root->left);

    cout<<root->data<<" ";

    Inorder(root->right);
}
void Postorder(Node* root){
    //L R N
    if(root ==NULL){
        return;
    }
    Postorder(root->left);
    
    Postorder(root->right);

    cout<<root->data<<" ";

}

void levelOrderTraversal(Node* root){

    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        //Tu nikal jaa reyy
        Node* front = q.front();
        q.pop();
        if(front==NULL){
            cout<<endl;
            //check if element is still present in queue
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<<front->data<<" ";
            //bacche rah gye
            if(front->left!=NULL){
                q.push(front->left);
            }
            if(front->right!=NULL){
                q.push(front->right);
            }
        }
        
        

    }

}



int height(Node* root){

    if(root == NULL){
        return 0;
    }
    // if(root->left == NULL && root->right == NULL){
    //     return 0;
    // }


    int leftAns = height(root->left);
    int rightAns = height(root->right);
    return 1+max(leftAns,rightAns);
}


// int position(vector<int> &in,int key, int start,int end){
//     for(int i=start;i<=end;i++){
//         if(in[i] == key){
//             return i;
//         }
//     }
//     return -1;
// }

// Node* buildTreePreorderInder(vector<int> inOrder,vector<int> Preorder,int &preorderIndex,int instart,int inend){

//     //base case
//     if(preorderIndex == Preorder.size() || instart>inend){
//         return NULL;
//     }

//     //create a new node
//     int element = Preorder[preorderIndex++];
//     Node* root = new Node(element);

//     //search the element in inorder
//     int pos = position(inOrder,element,instart,inend);
//     root->left = buildTreePreorderInder(inOrder,Preorder,preorderIndex,instart,pos-1);
//     root->right = buildTreePreorderInder(inOrder,Preorder,preorderIndex,pos+1,inend);

//     return root;
// }



int position(vector<int> in, int key, int s, int e) {
    for(int i=s; i<=e; i++) {
        if(in[i] == key)
            return i;
    }
    return -1;
}
Node* buildFromInorderPreorder(vector<int> in, vector<int> preorder, 
                int &preOrderIndex, int inStart, int inEnd) {
    
    //Base case
    if(preOrderIndex == preorder.size() || inStart > inEnd) {
        return NULL;
    }

    int element = preorder[preOrderIndex++];
    Node* root = new Node(element);

    //search element in inorder array
    int pos = position(in, element, inStart, inEnd);
    root -> left = buildFromInorderPreorder(in, preorder, preOrderIndex, inStart, pos-1);
    root -> right = buildFromInorderPreorder(in, preorder, preOrderIndex, pos+1, inEnd);
    return root;
}

int main(){
    // Node* root = NULL;
    vector<int> preOrder;
    preOrder.push_back(3);
    preOrder.push_back(1);
    preOrder.push_back(4);
    preOrder.push_back(0);
    preOrder.push_back(5);
    preOrder.push_back(2);

    vector<int> inOrder;
    inOrder.push_back(0);
    inOrder.push_back(1);
    inOrder.push_back(3);
    inOrder.push_back(4);
    inOrder.push_back(2);
    inOrder.push_back(5);
    
    int preorderIndex = 0;

    Node* root = buildFromInorderPreorder(inOrder,preOrder,preorderIndex,0,5);

    levelOrderTraversal(root);

    // Node* root = NULL;

    // root = buildtree();
    // cout<<"Printing preorder traversal "<<endl;
    // Preorder(root);
    // cout<<endl;

    // cout<<"Printing Inorder traversal "<<endl;
    // Inorder(root);
    // cout<<endl;

    // cout<<"Printing Postorder traversal "<<endl;
    // Postorder(root);
    // cout<<endl;
    // cout<<"Priting level order traversal"<<endl;
    // levelOrderTraversal(root);
    // cout<<endl;
     
    // // 10 5 3 -1 -1 7 6 -1 -1 -1 11 -1 -1 -1

    // cout<<" height of tree "<<endl;
    // cout<<height(root)<<endl;

    
return 0;
}