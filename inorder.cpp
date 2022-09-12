#include <iostream>
using namespace std;

    struct node
    {
        char data;
        struct node *lc, *rc;
    };

    struct node *etroot(char data)
    {
        struct node *temp = (struct node *)malloc(sizeof(struct node));
        temp->data = data;
        temp->lc = temp->rc = NULL;
        return temp;
    };

    void inorder(struct node * root)
    {
        if (root != NULL)
        {
            inorder(root->lc);
            cout << root->data << " ";
            inorder(root->rc);
        }
    }
    int main()
    {
         struct node* root = etroot('+');
    root->lc = etroot('a');
    root->rc = etroot('-');
    root->lc->lc = etroot('b');
    root->lc->rc = etroot('c');
    cout << "\nInorder traversal of binary tree is \n";
    inorder(root);
  
        return 0;
    }
    


