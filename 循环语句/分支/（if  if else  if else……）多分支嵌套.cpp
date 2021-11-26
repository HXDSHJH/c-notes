#include"stdafx.h"      
#include<stdio.h>
#include"stdlib.h"
int main()
{
    表示输出的字符是 大写 或 小写 或 数字 或 其他字符。
   /*1、char ch;
	scanf("%c",&ch);
	if(ch>='A'&&ch<='Z')
	{
	  printf("%c为大写字母",ch);
	}
	else if(ch>='a'&&ch<='z')
	{
	 printf("%c为小写字母",ch);
	}
	else if(ch>='0'&&ch<='9')
	{
	  printf("%c为数字",ch);
	}
	else
	{
	  printf("%c为其他字符",ch);
	}
	*/

	//1、求bmi的值在判断： bmi<18 偏瘦；bni值在(18-23.5)为正常；bmi>23.5为偏胖。
	/*float sg, tz ,bmi;
	printf("请输入您的身高和体重\n");
	scanf("%f%f",&sg,&tz);
	bmi = tz/(sg*sg);
	if(bmi<18)
	{
	  printf("%f为偏瘦",bmi);
	}
	else if(bmi<=23.5 && bmi>=18)
	{
	  printf("%f为正常",bmi);
	}
	else if(bmi>23.5)
	{
	  printf("%f为偏胖",bmi);
	}
	*/

	//if语句的嵌套（分支结构）。
        /*float x,y,r;
	char ch;
	printf("四则运算：");
	scanf("%f%c%f",&x,&ch,&y);
	if(ch=='+')
	{
		r = x + y ;printf("%f%c%f=%f\n",x,y,ch,r);
	}
	else if(ch=='-')
	{
		r = x - y ;printf("%f%c%f=%f\n",x,y,ch,r);
	}
	else if( ch=='*')
	{
		r = x * y ;printf("%f%c%f=%f\n",x,y,ch,r);
	}
	else if(ch=='/')
	{
		r = x / y ;printf("%f%c%f=%f\n",x,y,ch,r);
	}
	else
	{
		printf("输入有误！");
	
	}
	*/




	//输出 x>0 y=1;x=0 y=0;x<0 y=-1
	/*int x,y;
	printf("请输入一个数");
	scanf("%d",&x);//y是要输出的不用定义，不然会出错。
	if(x>0)
	{
		y = 1;
	}
	else if(x==0)
	{
		y = 0;
	}
	else if(x<0)
	{
		y = -1;
	}
	printf("x = %d,y = %d\n",x,y);
	*/


	//9、计算员工工资         工资=基本工资+提成。 
    /* 销售额s                        基本工资             提成
	 <10000                         1000               0
	 >=20000                        1000             （s-10000）*0.05
	 <=50000&&>20000                1000             （s-20000）*0.06
	 <=100000&&>50000               1000             （s-50000）*0.07
	 >100000                        1000             （s-100000）*0.08
	 */
    /* float gz,tc,s;
	 printf("请输入");
	 scanf("%f",&s);
	 if(s<10000)
	 {
		 gz = 1000;
	 }
	 else if(s>10000&&s<=20000)
	 {
	         gz = 1000+(s-10000)*0.05;
	 }
	 else if(s>20000&&s<=50000)
	 {
		 gz = 1000+(s-20000)*0.06;
	 }
	 else if(s>50000&&s<=100000)
	 {
		 gz = 1000+(s-50000)*0.07;
	 }
	 else if(s>100000)
	 {
                 gz = 1000+(s-100000)*0.08;
	 }
	 */

            system("pause");
            return 0;

           }


