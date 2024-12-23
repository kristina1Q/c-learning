#include <bits/stdc++.h>

// 定义猴子节点结构体
typedef struct Monkey {
    int number;             // 猴子编号
    struct Monkey* next;    // 指向下一个猴子的指针，形成一个循环链表。
} Monkey;

// 解决约瑟夫问题，返回最后猴王的编号
int josephus(int n, int m) {
    if (n < 1 || m < 1) return -1;  // 确保猴子的数量n和报数的数字m均为正整数。如果不满足，返回-1表示错误。 

    // 创建循环链表
    Monkey* head = (Monkey*)malloc(sizeof(Monkey)); // 为第一个猴子节点分配内存。
    if (!head) {
        printf("内存分配失败\n");
        exit(EXIT_FAILURE);
    }
    head->number = 1;
    head->next = head; //指向自身，暂时形成一个单节点的循环链表。
    Monkey* tail = head; //tail指针指向当前的尾节点，初始为head。 

	// 循环创建剩余的猴子节点
    for (int i = 2; i <= n; i++) {  // 从2到n依次创建每只猴子的节点。
        Monkey* node = (Monkey*)malloc(sizeof(Monkey));
        if (!node) {
            printf("内存分配失败\n");
            exit(EXIT_FAILURE);
        }
        node->number = i;
        node->next = head;  //next指向head，保持循环链表的性质。
        tail->next = node;  //将前一个节点的next指向新节点。 
        tail = node; //更新tail为新节点，确保tail始终指向链表的最后一个节点。
    }

	// 淘汰过程
    Monkey* prev = tail;  //prev指向tail，即最后一个猴子。
    Monkey* current = head;  //current指向head，即第一个猴子，开始报数。

    // 依次淘汰猴子，直到剩下最后一只
    while (current->next != current) { //当current的下一个节点不是自身时（即链表中有多于一只猴子）。
        for (int count = 1; count < m; count++) { //报数
            prev = current;  //每移动一步，prev指向current，current指向下一个猴子。
            current = current->next;  ////current--指向下一个猴子。
        }
        printf("猴子 %d 被淘汰\n", current->number);
        prev->next = current->next;//将prev的next指向current的下一个猴子，跳过current，实现淘汰。 
        free(current);
        current = prev->next; //更新current为prev->next，即淘汰猴子的下一个猴子，继续下一轮报数。 
    }

    int winner = current->number; //current此时指向最后剩下的猴子，获取其number作为猴王编号。
    free(current);
    return winner;
}

int main() {
    int n, m;
    printf("请输入猴子的总数n和报数的数m（以空格分隔）：");
    if (scanf("%d %d", &n, &m) != 2 || n < 1 || m < 1) {
        printf("输入格式错误或n、m不为正整数\n");
        return EXIT_FAILURE;
    }

    int winner = josephus(n, m);
    if (winner != -1) {
        printf("最后的猴王是：%d号猴子\n", winner);
    } else {
        printf("计算过程中出现错误\n");
    }

    return EXIT_SUCCESS;
}
