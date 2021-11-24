#include"stdafx.h"       //1、用双分支型求一个数的绝对值。
                        //4、登陆密码设置。
#include<stdio.h>       //2、将用户输入的字母转换成小写字母。
                        //5、抽奖
#include"stdlib.h"      //3、输入任意三个数按从大到小排序。                                                    //6、运用多分支判输入的一个字符是大写 、小写字母 ， 数字或其他                                                                              字符。
int main()
{
	//1.用单分支型求一个数的绝对值
	/*int x,abs;
	printf("请输入一个整数");
	scanf("%d",&x);
	abs = x;
	if(x<0)//单分支型
	{  
	   abs = -x;
	}
	printf("%d的绝对值=%d\n",x,abs);
	*/

	//2.将用户输入的字母转换成小写字母。
	/*char x,y;
	printf("请输入一个字母");
	scanf("%c",&x);
	y = x;//假设小写字母。
	if(x<=90 && x>=65)
	{
	  y = x + 32;
	}
	printf("%c的小写字母为%c\n",x,y);
	*/


	//3.输入三个数按从小到大排序。
	/*float x, y, z,t;
	printf("排序前：请输入三个任意整数");
	scanf("%f%f%f",&x,&y,&z);
	if(x>y)
	{
          t=x;
	  x=y;
	  y=t;
	} 
	if(x>z)
	{
	  t=x;
	  x=z;
	  z=t;
	}
	if(y>z)
	{
	  t=y;
	  y=z;
	  z=t;
	}
	printf("排序后：%f<%f<%f\n",x,y,z);
	*/



	//4.登录密码。单分支型
	/*float x=1514;
	float y;
	printf("请输入您的密码\n");
	scanf("%f",&y);
	if(x==y)
	{
	  printf("密码正确\n");
	}
	if(x!=y)
	{
	 printf("密码错误\n");
	}
	*/	



	//5.抽奖(1-10)。
	/*int x,y,z,sum;
	x = rand()%10;
	y = rand()%10;
	z = rand()%10;
	sum = x + y + z;
	printf("您抽中的是%d %d %d 共%d\n",x,y,z,sum);
        if(sum<=10)
	{
	  printf("三等奖\n");
	}
	if(x<=15&&x>10)
	{
	  printf("二等奖\n");
	}
	if(x>15)
	{
	  printf("一等奖\n");
	}
	*/


	运用多分枝

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



        运用switch实现分支结构

	//1、四则运算
      /*float x,y,r;
	char ch;
	printf("四则运算：");
	scanf("%f%c%f",&x,&ch,&y);
	switch(ch)
	{
	case '+':r = x+y;printf("%f%c%f=%f\n",x,y,ch,r);break;
        case '-':r = x-y;printf("%f%c%f=%f\n",x,y,ch,r);break;
        case '*':r = x*y;printf("%f%c%f=%f\n",x,y,ch,r);break;
        case '/':r = x/y;printf("%f%c%f=%f\n",x,y,ch,r);break;
        default:printf("输入错误！");break;

	}

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



     //10、求一个数的绝对值（用条件）
     /*int x,abs;
       scanf("%d",&x);
       abs = x>0?x:-x;//条件表达式（双分支的渐变）  表达式一满足就输出表达式二 ，否则就输出表达式三（x>0是表达式一；x是表达式二；-x是表达式三）
       printf("%d的绝对值是%d\n",x,abs);



         //11、输出两个数中的大数。
	 int x,y,max;
	 scanf("%d%d",&x,&y);
	 max = x>y?x:y;//条件表达式。
	 printf("%d\n",max);
	 */













	system("pause");
	return 0;
}
