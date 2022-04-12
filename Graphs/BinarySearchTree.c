#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *left, *right;
} NODE;
NODE *insert(NODE *root, int data)
{
    if (root == NULL)
    {
        root = (NODE *)malloc(sizeof(NODE));
        root->data = data;
        root->left = NULL;
        root->right = NULL;
    }
    else
    {
        if (data < root->data)
            root->left = insert(root->left, data);
        else if (data > root->data)
            root->right = insert(root->right, data);
    }
    return root;
}
void inorder(NODE *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        printf("%d\t", root->data);
        inorder(root->right);
    }
}
void preorder(NODE *root)
{
    if (root != NULL)
    {
        printf("%d\t", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}
void postorder(NODE *root)
{
    if (root != NULL)
    {
        postorder(root->left);
        postorder(root->right);
        printf("%d\t", root->data);
    }
}
NODE *search(NODE *root, int data)
{
    if (root == NULL)
    {
        printf("Key not found\n");
    }
    else
    {
        if (data == root->data)
        {
            printf("Key is found\n");
        }
        else if (data < root->data)
        {
            root->left = search(root->left, data);
        }
        else
        {
            root->right = search(root->right, data);
        }
    }
    return root;
}
void main()
{
    NODE *root = NULL;
    int ch, data;
    while (1)
    {
        printf("Enter \n1. Insert\n2. Inorder\n3. Preorder\n4. Postorder\n5. Search\n0 to exit\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("Enter data\n");
            scanf("%d", &data);
            root = insert(root, data);
            break;
        case 2:
            if (root == NULL)
                printf("Tree is empty\n");
            else
            {
                inorder(root);
                printf("\n");
            }
            break;
        case 3:
            if (root == NULL)
                printf("Tree is empty\n");
            else
            {
                preorder(root);
                printf("\n");
            }
            break;
        case 4:
            if (root == NULL)
                printf("Tree is empty\n");
            else
            {
                postorder(root);
                printf("\n");
            }
            break;
        case 5:
            if (root == NULL)
                printf("Tree is empty\n");
            else
            {
                printf("Enter key to be searched\n");
                scanf("%d", &data);
                root = search(root, data);
            }
            break;
        case 0:
            exit(0);
        default:
            printf("Invalid choice\n");
            break;
        }
    }
}
