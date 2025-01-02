#include <bits/stdc++.h>
using namespace std;
using i64 = long long;
typedef struct Node
{
    int key;
    Node *next;
    Node *prev;
} Node;
Node nil;
void init()
{
    nil = new Node;
    nil->next = nil;
    nil->prev = nil;
}
Node *listsearching(int key)
{
    Node *cur = nil->next;
    while (cur != nil && cur->key != key)
        cur = cur->next;
    return cur;
}
void printlist()
{
    Node *cur = nil->next;
    int isf = 0;
    while (1)
    {
        if (cur == nil)
            break;
        if (isf++ > 0)
            printf(" ");
        printf("%d", cur->key);
        cur = cur->next;
    }
    printf('\n');
}
void deletenode(Node *t)
{
    if (t == nil)
        return;
    t->next->prev = t->prev;
    t->prev->next = t->next;
}
void deletefirst()
{
    deletenode(nil->next);
}
void deletelast()
{
    deletenode(nil->prev);
}
void insert(int key)
{
    Node *x = new Node;
    x->key = key;
    x->next = nil->next;
    nil->next->prev = x;
    nil->next = x;
    x->prev = nil;
}
int main()
{
    init();
    int key, n, i;
    int size = 0;
    char com[20];
    int np = 0, nd = 0;
    scanf("%d", &n);
    for (i = 0; i < n; ++i)
    {
        scanf("%s%d", com, &key);
        if (com[0] == 'i')
        {
            insert(key), np++, size++;
        }
        else if (com[0] == 'd')
        {
            if (strlen(com) > 6)
            {
                if (com[6] == 'F')
                    deletefirst();
                else if (com[6] == 'L')
                    deletelast();
            }
            else
            {
                deletenode(listsearching(key));
                nd++;
            }
            size--;
        }
    }
    printlist();
    return 0;
}