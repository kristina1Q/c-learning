//单链表
//最好先创建一个空的头节点
sdu* head=NULL;
sdu* q=new sdu;
head=q;
q->next=NULL;
tail=q;


#include <bits/stdc++.h>
#define LL long long
using namespace std;
struct student
{
    int titl;
    struct student* next;
};
typedef struct student sdu;
int main()
{
    int n;
    cin>>n;
    //创建链表
    sdu* head=NULL;
    sdu* tail=NULL;
    sdu* p;
    for(int i=0;i<n;++i){
        if(!i){
            head=new sdu;
            cin>>head->titl;
            head->next=NULL;
            tail=head;
        }
        else{
            sdu* q=new sdu;
            cin>>q->titl;
            tail->next=q;
            q->next=NULL;
            tail=q;
        }
    }
    p=head;
    int count=1;
    //在元素2前插入37
    while(count<=n){
        if(p->next->titl==2)
        {
            sdu* q=new sdu;
            q->titl=37;
            q->next=p->next;
            p->next=q;
            break;
        }
        p=p->next;
        count++;
    }
    //删除元素37
    p=head;
        while(p!=NULL){
        cout<<p->titl<<' ';
        p=p->next;
    }
    cout<<'\n';
    count=1;
    p=head;
    while(count<=n){
        if(p->next->titl==2)
        {
            p->next=p->next->next;
            break;
        }
        p=p->next;
        count++;
    }
    while(p!=NULL){
        cout<<p->titl<<' ';
        p=p->next;
    }
    return 0;
}