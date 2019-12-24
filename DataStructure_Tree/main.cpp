#include <iostream>

using namespace std;
struct NODE{
    int data;
    NODE* pLeft;
    NODE* pRight;
};
//Init
NODE* CreateNode(int x)
{
    NODE* p = new NODE();
    p->data = x;
    p->pLeft = p->pRight = NULL;
    return p;
}
//Insertion
//1. Find the node's location
NODE* FindInsert(NODE* root, int x)
{
    if(root == NULL)
    {
        return NULL;
    }
    NODE* p = root;
    NODE* f = p;
    while(p!= NULL){
        f = p ;
        if(p->data > x)
        {
            p = p->pLeft;
        }else
        {
            p = p->pRight;
        }
    }
    return f;
}
//2. Insert Node
void InserNode(NODE* &root, int x)
{
    NODE* n = CreateNode(x);
    if(root == NULL)
    {
        root = n;
        return;
    }else{
        NODE* f = FindInsert(root,x);
        if(f!= NULL)
        {
            if(f->data > x)
            {
                f->pLeft = n;
            }
            else
            {
                f->pRight = n;
            }
        }

    }
}

int main()
{
    cout << "Hello World!" << endl;
    return 0;
}
