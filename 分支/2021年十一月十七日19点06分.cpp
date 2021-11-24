#include"stdafx.h"
#include<stdio.h>
#include"stdlib.h"
int main()
{  
	//用单分支实现求一个数绝对值
	/*int x;
	printf("请示输入一个数");
	scanf("%d",&x);
	if(x<=0)//x>0?x:-x
	{
		x = -x;
		printf("绝对值为%d：\n",x);
	}
	*/
	//用单分支实现将用户输入的字母转换成小写字母输出
           /*半成品   char x;
	         printf("请输入一个字母");
	          scanf("%c",&x);
	          if(x>='A' && x<='Z' || x>='a' && x<='z')
	          {
	            	x = x+32;
	             	printf("输入字母的小写字母为：%c\n",x);

	            }
	            */
	//用单分支实现3个数从小到大排序 
	/*int a,b,c;
	int x=0;
	printf("请输入三个任意数;");
	scanf("%d%d%d",&a,&b,&c);
	if(a<b)
	{
		x=b;
		b=a;
		a=x;
	}
	if(a<c)
	{
        x=c;
		c=a;
		a=x;
	}
	if(b<c)
	{
        x=c;
		c=b;
		b=x;
	}
	printf("这三个数从小到大排序为：%d>%d>%d\n",a,b,c);
	*/
	//大写 小写 数字 其他字符
	/*char x;
	printf("请输入一个字符");
	scanf("%c",&x);
	if(x>='A' && x<='Z')
	{
		printf("%c为大写字母\n",x);
	}
	else if(x>='a' && x<='z')
	{
		printf("%c为小写字母\n",x);
	}
	else if(x>='0' && x<='9')
	{
		printf("%c为数字\n",x);
	}
	else
	{
	  printf("%c为其它字符",x);
	}
	*/

	//四则运算器  （用户输入：运算数运算符运算数  1+2 / 1-2 / 1*2 / 1/2）
	/*float a,b,c;
	char ch;
	printf("请输入计算数");
	scanf("%f%c%f",&a,&ch,&b);
	if(ch=='+')
	{
		c = a + b;
	}
	if(ch=='-')
	{
		c = a - b;
	}
	if(ch=='*')
	{
		c = a * b;
	}
	if(ch=='/')
	{
		c = a / b;
	}
	printf("运算结果为：%f%c%f=%f",a,ch,b,c);
	*/

	/*工资=基本工资+提成。(多分支)
	
	销售额 s            基本工资      提成
	<10000             1000           0
	>=20000             1000         （s-10000）*5%  
	<=50000&&>20000    1000          （s-20000）*6%
	<=100000&&>50000   1000           （s-50000）*7%
	>100000            1000          （s-100000）*8%
	*/
   float gz,tc,s;
   printf("请输入销售额：");
   scanf("%f%f",&gz,&tc);
   if(s<10000)
   {
	   gz = 1000;
   }
   else if(s>10000 && s<=20000)
   {
	   gz = 1000 + (s-10000)*0.05;
   }
   else if(s>20000 && s<=50000)
   {
	   gz = 1000 + (s-20000)*0.06;
   }
   else if(s>50000 && s<=100000)
   {
	   gz = 1000 +(s-50000)*0.07;
   }
   else if(s>10000)
   {
	   gz = 1000 + (s-100000)*0.08;
   }
	system("pause");
	return 0;
}