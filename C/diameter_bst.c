#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <stdlib.h>

struct TreeNode
{
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};

int height(struct TreeNode *node)
{
    if (node != NULL)
    {
        int left = height(node->left);
        int right = height(node->right);
        if (left >= right)
        {
            return left + 1;
        }
        else
        {
            return right + 1;
        }
    }
    else
    {
        return 0;
    }
}

int longest_path(struct TreeNode *node)
{
    if (node != NULL)
    {
        int left = longest_path(node->left);
        int right = longest_path(node->right);
        int current = height(node->left) + height(node->right);
        if (left >= right && left >= current)
        {
            return left;
        }
        else if (right >= left && right >= current)
        {
            return right;
        }
        else
        {
            return current;
        }
    }
    else
    {
        return 0;
    }
}

int diameterOfBinaryTree(struct TreeNode *root)
{
    return longest_path(root);
}