// version:2.3   版权所有：1977177093@qq.com             
//1.7说明：重写了链表头指针指向问题 
//1.8说明：修改主菜单逻辑问题
//1.9说明：修改实验数据，开始建立基本的链表，已完成所有基本功能的执行    修改时间:15:04 2019/3/1
//2.1说明：开始着手于文件的读写功能，将生成的完整链表信息，写入的相应的文件中  修改时间：10:06 2019/3/12
/*
	2.2说明：如果没有正确写入全部信息，不允许，退出程序，
	并且要求其完成全部的信息写入后，再进行其他相关操作  修改时间：16:00 2019/3/13
	2.2二次修改，定义变量来标记数学，英语，语文，c语言的录入情况    修改时间：16:04 2019/3/13 
*/
//2.3说明：修改逻辑问题，学号唯一，姓名不唯一，对学号有重复的，进行删除，待解决（）修改时间 ：19:41 2019/3/13 

#include "list.h"
#include "BasicTools.h"
#include <stdio.h>
#include <string.h> 
#include <stdlib.h>

int main() {
	SetWindow();   		//首次调用SetWindow对窗口进行美化
	int i = -1;        	//用于读取用户所有所输入进行选择的数字,从而进行相应功能的选择 
	
	List list;
	list = NULL;
	InitlizeList(&list);
	
	
	while(1) {
		system("cls");      //每次进来时都进行一次清屏操作 
		MainMenu();    		//首次代用Menu便于用户进行基本功能选择
			
		printf("请输入:\n");
		scanf("%d", &i);		 
		
		while(!((i>=0) && (i<=5))) {
			printf("您的输入有误，请重新输入：\n"); 
			scanf("%d", &i);
		}
		
		MainMenuSelct(i, &list);
	}

	return 0;
}
