#include"stdafx.h"      
#include<stdio.h>
#include"stdlib.h"
int main()
{
      //四则运算器        
        float x,y,r;
	char ch;
	printf("四则运算：");
	scanf("%f%c%f",&x,&ch,&y);
	switch(ch)
	{
	  case '+':r = x+y;
          printf("%f%c%f=%f\n",x,y,ch,r);
          break;

          case '-':r = x-y;
          printf("%f%c%f=%f\n",x,y,ch,r);
          break;

          case '*':r = x*y;
          printf("%f%c%f=%f\n",x,y,ch,r);
          break;

          case '/':r = x/y;
          printf("%f%c%f=%f\n",x,y,ch,r);
          break;

          default:printf("输入错误！");
          break;
          }


1、1-7对应的星期几。(正确)同理可以输入1-12对应的月份。
  /*int x;
  printf("请输入一到七中的任意一个数：");
  scanf("%d",&x);
  switch(x)
  {
    case 1:printf("%d对应的是星期一",x);break;

    case 2:printf("%d对应的是星期二",x);break;

    case 3:printf("%d对应的是星期三",x);break;

    case 4:printf("%d对应的是星期四",x);break;

    default:printf("输入错误！\n");break;
  }


计算器。
/* float a,b,c;
 char ch;
 printf("请输运算：");
 scanf("%f%c%f",&a,&ch,&b);
 switch(ch)
 {
	       case '+':
		 c =a+b;
		 printf("%f + %f = %f",a,b,c);
		 break;

               case '-':
		 c =a-b;
		 printf("%f - %f = %f",a,b,c);
		 break;

               case '*':
		 c =a*b;
		 printf("%f * %f = %f",a,b,c);
		 break;

               case '/':
		 c =a/b;
		 printf("%f / %f = %f",a,b,c);
		 break;
	 default:printf("输入有误！\n");break;
      }
     */

 
       system("pause");
       return 0;
  }
