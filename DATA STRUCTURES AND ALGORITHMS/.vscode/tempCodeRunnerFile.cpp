#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
struct tree
{
    char data;
    struct tree *left, *right;
};
int top = -1;
struct tree *stack[20];
struct tree *root;
void push(struct tree *root)
{
    top++;
    stack[top] = root;
}
struct tree *pop(void)
{
    return (stack[top--]);
}
void inorder(struct tree *root)
{
    if (root == NULL)
        return;
    else
    {
        if (root != NULL)
        {
            inorder(root->left);
        }
        printf("%c ", root->data);
        inorder(root->right);
    }
    printf(" ");
}
void preorder(struct tree *root)
{
    if (root == NULL)
        return;
    else
    {
        if (root != NULL)
        {
            printf("%c ", root->data);
        }
        preorder(root->left);
        preorder(root->right);
    }
    printf(" ");
}
void postorder(struct tree *root)
{
    if (root == NULL)
        return;
    else
    {
        if (root != NULL)
        {
            postorder(root->left);
        }
        postorder(root->right);
        printf("%c ", root->data);
    }
    printf(" ");
}
void operand(char b)
{
    struct tree *root;
    root = (struct tree *)malloc(sizeof(struct tree));
    root->data = b;
    root->left = NULL;
    root->right = NULL;
    printf("\n%c", root->data);
    push(root);
}
void operators(char a)

{
    struct tree *root;
    root = (struct tree *)malloc(sizeof(struct tree));
    root->data = a;
    root->right = pop();
    root->left = pop();
    push(root);
}
int main()
{
    int i = 0;
    char s[20];
    printf("Enter the postfix expression:\n");
    scanf("%s", s);
    while (s[i] != '\0')
    {
        if (isalnum(s[i]))
        {
            printf("\nOperand: %c", s[i]);
            operand(s[i]);
        }
        else
        {
            printf("\nOperator: %c", s[i]);
            operators(s[i]);
        }
        i++;
    }
    printf("\n\nThe Inorder traversal is:\n");
    inorder(stack[top]);
    printf("\n\nThe Preorder traversal is:\n");
    preorder(stack[top]);
    printf("\n\nThe Postorder traversal is:\n");
    postorder(stack[top]);
    return 0;
}