#include <stdio.h>
#include <stdlib.h>
 
struct node{
    int number;
    struct node *left, *right;
};
struct node* newNode(int item)
{
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp->key = item;
    temp->left = temp->right = NULL;
    return temp;
}
void inorder(struct node* root)
{
    if (root != NULL)
	{
        inorder(root->left);
        printf("%d \n", root->key);
        inorder(root->right);
    }
}
struct node* insert(struct node* node, int key)
{   
    if (node == NULL)
        return newNode(key);
 
    if (key < node->key)
        node->left = insert(node->left, key);
    else if (key > node->key)
        node->right = insert(node->right, key);
    
    return node;
}

int main()
{    
    struct node* root = NULL;
    root = insert(root, 150);
    insert(root, 130);
    insert(root, 120);
    insert(root, 140);
    insert(root, 170);
    insert(root, 160);
    insert(root, 180);     
    inorder(root);
 
    return 0;
}
