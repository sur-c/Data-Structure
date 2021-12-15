#include<stdio.h>
#include<stdlib.h>
#include<string.h>

// An Binary tree search node
struct node
{
	int key;
	struct node *left, *right;
};

// Function to display the BST in Inorder representation
void inorder(struct node* root)
{
    if (root != NULL)
    {    
        inorder(root->left);
        printf("%d ", root->key);
        inorder(root->right);
    }
}

// Function to return a new node
struct node* newNode(int item)
{
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp->key = item;
    temp->left = temp->right = NULL;
    return temp;
}

// Function to return by insert a child node to the parent node
struct node* insert(struct node* node, int key)
{
    // if it is the first element calls the newNode function to make the parent node
    if (node == NULL)
        return newNode(key);

    //if key is less than the root's key, it goes in the left node and recurses the function
    if(key < node->key)
        node->left = insert(node->left,key);
    else
        node->right = insert(node->right,key);
    return node;
}

// Function to return
struct node* minValueNode(struct node* node)
{
    struct node* current = node;
    // The small element is in left node
    while (current && current->left != NULL)
        current = current->left;
     return current;
}

// Function to return node after deleting key from BST
struct node* deleteNode(struct node* root, int key)
{
    // base case
    if (root == NULL)
        return root;
 
    // If the key to be deleted is smaller than the root's key, then it lies in left subtree
    if (key < root->key)
        root->left = deleteNode(root->left, key);
 
    // If the key to be deleted is greater than the root's key, then it lies in right subtree
    else if (key > root->key)
        root->right = deleteNode(root->right, key);
 
    // if key is same as root's key then, this is the node to be deleted
    else {
        // node with only one child or no child
        if (root->left == NULL) {
            struct node* temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL) {
            struct node* temp = root->left;
            free(root);
            return temp;
        }
 
        // node with two children: Get the inorder successor (smallest in the right subtree)
        struct node* temp = minValueNode(root->right);
 
        // Copy the inorder successor's content to this node
        root->key = temp->key;
 
        // Delete the inorder successor
        root->right = deleteNode(root->right, temp->key);
    }
    return root;
}

//Function to sort the array in alphabetical order
void sort(char arr1[][10], int n)
{   
    char temp[10];
    for(int i =0; i < n; i++)
    for(int j = i + 1; j < n; j++)
    { 
        if(strcmp(arr1[i],arr1[j]) > 0)
        {
            strcpy(temp,arr1[i]);
            strcpy(arr1[i],arr1[j]);
            strcpy(arr1[j],temp);
        }
    }
}


void main()
{
    // Storing names in array
    char arr1[6][10]= {"Animesh","Surajit", "Krishna", "Ritwik", "Soumabha", "Rajesh"};
    int s = 6;
    
    // Sort the names array by sending Comp as argument using qsort function
    sort(arr1, s);

    int arr[10];
    //Print and indexing the sorted names
    printf("Sorted names: \n");
    for (int key = 0; key < s; key++)
    {
        printf("%s \n", arr1[key]);
        arr[key]=key + 1;
    }

    for(int key = s + 1; key < 10; key++)
        arr[key] = 0;

    int n = 0,i;
    for(i = 0; arr[i] != 0; i++)
        n++;
    
    // declaring the node root
    struct node *root = NULL;

    //inserting the values one-by-one into the root
    for (int i = 0; i < n; i++)
    {
        root = insert(root, arr[i]);
    }

	printf("Inorder traversal of the constructed AVL tree is: ");
	inorder(root);

    int j;
    printf("\nEnter the index of the name you want to delete");
    scanf("%d", &j);
	root = deleteNode(root, j);
	printf("\nInorder traversal after deletion of %d is:  ",j);
	inorder(root);
    printf("\n"); 
    }