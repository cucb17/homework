 /* 
**  
** 静态数组实现堆栈程序 a_stack.c ，数组长度由#define确定 
*/  
  
#include"stack.h"  
#include<assert.h>  
#include<stdio.h>  
  
#define STACK_SIZE 100 /* 堆栈最大容纳元素数量 */  
  
/* 
** 存储堆栈中的数组和一个指向堆栈顶部元素的指针 
*/  
static STACK_TYPE stack[STACK_SIZE];  
static int top_element = -1;  
  
/* push */  
void push(STACK_TYPE value)  
{  
    assert(!is_full()); /* 压入堆栈之前先判断是否堆栈已满*/  
    top_element += 1;  
    stack[top_element] = value;  
}  
  
/* pop */  
void pop(void)  
{  
    assert(!is_empty()); /* 弹出堆栈之前先判断是否堆栈已空 */  
    top_element -= 1;  
}  
  
/* top */  
STACK_TYPE top(void)  
{  
    assert(!is_empty());  
    return stack[top_element];  
}  
  
/* is_empty */  
int is_empty(void)  
{  
    return top_element == -1;  
}  
  
/* is_full */  
int is_full(void)  
{  
    return top_element == STACK_SIZE - 1;  
}  
  
/* 
** 定义一个print函数，用来打印堆栈里面的元素。 
*/  
void print(void)  
{  
    int i;  
    i = top_element;  
    printf("打印出静态数组堆栈里面的值: ");  
    if(i == -1)  
        printf("这是个空堆栈\n");  
    while(i!= -1)  
        printf("%d ",stack[i--]);  
    printf("\n");  
}  
