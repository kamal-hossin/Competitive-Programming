#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *left;
    Node *right;

    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *input_tree()
{
    int val;
    cin >> val;
    Node *root;
    if (val == -1)
    {
        root = NULL;
    }
    else
    {
        root = new Node(val);
    }

    queue<Node *> q;
    if (root != NULL)
    {
        q.push(root);
    }
    while (!q.empty())
    {
        Node *p = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;
        Node *myleft, *myright;
        if (l == -1)
        {
            myleft = NULL;
        }
        else
        {
            myleft = new Node(l);
        }
        if (r == -1)
        {
            myright = NULL;
        }
        else
        {
            myright = new Node(r);
        }
        p->left = myleft;
        p->right = myright;

        if (p->left != NULL)
        {
            q.push(p->left);
        }
        if (p->right != NULL)
        {
            q.push(p->right);
        }
    }
    return root;
}

int Depth(Node *root)
{
    if (root == NULL)
        return 0; // aikhane return zeo add krsi , jehetu function ta integer
    int l = Depth(root->left);
    int r = Depth(root->right);

    return max(l, r) + 1;
}

void Level_find(Node *root, int level)
{

    if (root == NULL)
        return; // aikhane e return zero hobe na , coz funtion ta void

    if (level == 0)
    {
        cout << root->val << " ";
        return; // aikahe Source value print korle return kore dete hobe
    }
    Level_find(root->left, level - 1);
    Level_find(root->right, level - 1);
}
int main()
{
    Node *root = input_tree();

    int level_take;
    cin >> level_take;

    if (level_take >= 0 && level_take < Depth(root))
    {
        Level_find(root, level_take);
    }
    else
    {
        cout << "Invalid";
    }

    return 0;
}
