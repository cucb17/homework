#include <stdio.h>
#include <stdlib.h>
#include "stack.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int isNUM(char c) {
	if(c>='0'&&c<='9')
		return 1;
	else
		return 0;
}


//����׺���ʽת��Ϊ��׺���ʽ


int main(int argc, char *argv[]) {

	//������ջ


	char * p_str="2+343*234+(3+4)/4";
	char * p_char=p_str;
	int num1,num2,res;
	int sign;

	int i,j;
	printf("Hello world!\n");
	printf("Input the data such as '12+43*(234-3)/2'\n");
	printf("%s\n",p_str);

	num1=0;
	while(*p_char!=0) {
		printf("=====================\n");print();printf("******************\n");
		if(isNUM(*p_char)) {
			num1*=10;
			num1+=*p_char-'0';
		} else {
			//���Ŵ���
			if(num1) {
				printf("num��=%d\t",num1);
				push(num1);//������������ֱ�����
				num1=0;

			} 
			if(1){
			
				printf("TNT...");
				if(is_empty()) { //ջΪ��ʱ��ֱ�����Ԫ��
				
					push(*p_char);
//					top();
printf("top()���ó�����ֵ: %d\n",top());
				} else {
					//��Ϊ��ʱ������ֱ����ջ
					printf("not empty...");
					switch(*p_char) {
						case '(':
							push(*p_char);
//							top();
printf("top()���ó�����ֵ: %d\n",top());
							break;
						case ')':
							while(top()!='(') {
//								top();
printf("top()���ó�����ֵ: %d\n",top());
								pop();
							}
							break;
						case '+':
						case '-':
							while(top()=='+'||top=='-'||top=='*'||top=='/') {
//								top();
printf("top()���ó�����ֵ: %d\n",top());
								pop();
							}
							push(*p_char);
							printf("push %c",*p_char);
							break;
						case '*':
						case '/':
							while(top=='*'||top=='/') {
//								top();
printf("top()���ó�����ֵ: %d\n",top());
								pop();
							}
							push(*p_char);
							break;
							break;
					}
					break;
				}
			}
		}

	
	p_char++;
}

print();
//    push(10); push(9); push(7); push(6); push(5);
//    push(4);  push(3); push(2); push(1); push(0);
printf("pushѹ����ֵ��\n");
print();
printf("\n");
//    pop();
//    pop();
//    printf("����pop��������Ԫ�غ�Ķ�ջԪ��:\n");
//    print();
printf("\n");
printf("top()���ó�����ֵ: %d\n",top());


return 0;
}


