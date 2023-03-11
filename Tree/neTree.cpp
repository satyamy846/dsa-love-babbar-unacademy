#include<iostream>
#include<queue>
#include<vector>
using namespace std;

class Node {
    public:
        int data;
        Node* left;
        Node* right;

    Node(int d) {
        data = d;
        left = NULL;
        right = NULL;
    }
};


Node* buildTree() {
    cout << "Enter the value of data " << endl;
    int data;
    cin >> data;

    if(data == -1) 
        return NULL;

    Node* newNode = new Node(data);

    cout << "Enter the data for left child of " << data << endl;
    newNode -> left = buildTree();

    cout << "Enter the data for right child of " << data << endl;
    newNode -> right = buildTree();

    return newNode;

}

void preOrder(Node* root) {
    //base case
    if(root == NULL)
        return;

    //N
    cout << root->data << " ";
    //L
    preOrder(root->left);
    //R
    preOrder(root->right);
}

void inOrder(Node* root) {
    //LNR
    //base case
    if(root == NULL)
        return;

    //L
    inOrder(root->left);
    //N
    cout << root->data << " ";
    //R
    inOrder(root->right);
}

void postOrder(Node* root) {
    //LNR
    //base case
    if(root == NULL)
        return;

    //L
    postOrder(root->left);
    //R
    postOrder(root->right);
    //N
    cout << root->data << " ";

}

void lvlOrderTraversal(Node* root) {

    queue<Node*> q;
    q.push(root);
    //change no. 1
    q.push(NULL);

    while(!q.empty()) {
        //tu nikal
        Node* front = q.front();
        q.pop();
        if(front == NULL) {
            cout << endl;
            //catch here
            if(!q.empty())//still elements are present
                q.push(NULL);
        }
        else{
            cout << front->data << " ";

            //bache chor jaio
            if(front->left != NULL)
                q.push(front->left);
            if(front->right != NULL)
                q.push(front->right);
        }
    }
}


int height(Node* root ) {
    if(root == NULL)
        return 0;
    
    int leftAns = height(root->left);
    int rightAns = height(root->right);
    return 1+max(leftAns, rightAns);
}

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


Node* buildFromInorderPostorder(vector<int> in, vector<int> postorder, 
                int &postOrderIndex, int inStart, int inEnd) {
    
    //Base case
    if(postOrderIndex < 0 || inStart > inEnd) {
        return NULL;
    }

    int element = postorder[postOrderIndex--];
    Node* root = new Node(element);

    //search element in inorder array
    int pos = position(in, element, inStart, inEnd);
    root -> right = buildFromInorderPostorder(in, postorder, postOrderIndex, pos+1, inEnd);
    root -> left = buildFromInorderPostorder(in, postorder, postOrderIndex, inStart, pos-1);
    
    return root;
}




int main() {

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

    lvlOrderTraversal(root);

    //1
    // 2 3
    // 4 5 6 7
    //8

    // Node* root = NULL;

    // root = buildTree();
    // cout << "Printing PreOrder " << endl;
    // preOrder(root);
    // cout << endl;
    
    // cout << "Printing Inorder " << endl;
    // inOrder(root);
    // cout << endl;

    // cout << "Printing PostOrder " << endl;
    // postOrder(root);
    // cout << endl;

    // cout << "Printing Level Order " << endl;
    // lvlOrderTraversal(root);
    // cout << endl;

    // cout << "Height os tree is: " << height(root) << endl;







    return 0;
}