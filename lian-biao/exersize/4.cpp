//循环链表
#include <bits/stdc++.h>
#define LL long long
using namespace std;
struct student
{
    int tol;
    struct student* next;
};
typedef struct student stu;
int main()
{
    stu* head,*tail,*p;
    head=new stu;
    head->next=head;
    tail=head;
    int n;
    cin>>n;
    for(int i=0;i<n;++i){
        stu* q=new stu;
        q->tol=i+1;
        tail->next=q;
        q->next=NULL;
        tail=q;
    }
    tail->next=head;
    p=head->next;
    while(p!=head)
    {
        cout<<p->tol<<' ';
        p=p->next;
    }
    return 0;
}

//双向链表
存2个指针
*pre 为前驱指针，指向上一个节点
*next 后驱，指向下一个节点