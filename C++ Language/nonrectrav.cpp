/*
void inOrder( Node *root)
{   stack<Node *> s;
    Node *curr = root;
    while (curr != NULL || s.empty() == false)
    {   while (curr !=  NULL)
        {
           s.push(curr);
            curr = curr->left;
        }
        curr = s.top();
        s.pop();
        cout << curr->data << " ";
        curr = curr->right;
 } 
}



void Preorder(node* root)
{
    if (root == NULL)
        return;
 
    stack<node*> s;
    s.push(root);
 
   
    while (s.empty() == false) {
         node* n = s.top();
        printf("%d ", n->data);
        s.pop();
        if (n->right)
            s.push(n->right);
        if (n->left)
            s.push(n->left);
    }
}



void postorderIterative(Node* root)
{
    if (root == NULL) {
        return;
    }
    stack<Node*> s;
    s.push(root);
    stack<int> out;
    while (!s.empty())
    {

        Node* curr = s.top();
        s.pop();
 
        out.push(curr->data);
 
        if (curr->left) {
            s.push(curr->left);
        }
 
        if (curr->right) {
            s.push(curr->right);
        }
    }
 
.
    while (!out.empty())
    {
        cout << out.top() << " ";
        out.pop();
    }
}
*/