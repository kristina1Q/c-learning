#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct stud_node {
     int    num;
     char   name[20];
     int    score;
     struct stud_node *next;
};
struct stud_node *head, *tail;

void input();

int main()
{
    struct stud_node *p;
    
    head = tail = NULL;
    input();
    for ( p = head; p != NULL; p = p->next )
        printf("%d %s %d\n", p->num, p->name, p->score);

    return 0;
}

/* 你的代码将被嵌在这里 */
void input()
{
    int n,ans=0;
    for(;;){
        scanf("%d",&n);
        if(n==0)break;
        if(!ans){
            head=(struct stud_node*)malloc(sizeof(struct stud_node));
            head->num=n;
            scanf("%s%d",&head->name,&head->score);
            tail=head;
            head->next=NULL;
        }
        else
        {
            struct stud_node* q=(struct stud_node*)malloc(sizeof(struct stud_node));
            tail->next=q;
            tail=q;
            q->num=n;
            scanf("%s%d",&q->name,&q->score);
            q->next=NULL;
        }
        ans++;
    }
}