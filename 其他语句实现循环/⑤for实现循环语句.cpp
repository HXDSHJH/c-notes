//1、输出10行hello　World
//2、用while语句求解1～100累加和
//用户从键盘输入n,用while语句求解1～n累加和
//3、求1---100之间所有3的倍数的和
//4、求1-2+3-4+5….+99-100的和
//5、求s=1+1/3+1/5+…,直到最后一项不小于1.0e-6
//6、求n的阶乘n!(例：5！=5*4*3*2*1)
//7、输出所有的水仙花数.水仙花数是指一个 3 位数，它的每个位上的数字的 3次幂之和等于它本身
//8、输出一到一百的数,以及再每十个数是换行。
#include"stdafx.h"
#include<stdio.h>
#include"stdlib.h"
int main()
{

//使用for语句实现循环。for(表达式1;表达式2;表达式3)





1、输出10行hello　World
      /*int i;
	for(i=0;i<10;i++)
	{
           printf("Hello Word\n");
	 }
	*/

2、用while语句求解1～100累加和
      /*int i,sum;
        sum = 0;
	while(i<=100)
	{   
	   sum += i;
           i++;
	}
	printf("%d",sum);
	*/



//用户从键盘输入n,用while语句求解1～n累加和
      /*int i,sum = 0,n;
	printf("请输n的值：");
        i = 1;
	scanf("%d",&n);
	while(i<=n)
	{            
           sum += i;
           i++;
	 }
	printf("%d\n",sum);
	*/
3、求1---100之间所有3的倍数的和(for语句)
      /*int i,sum = 0;
	for(i=1;i<=100;i++)
	{ 
	  if(i%3==0)
	  sum += i;
	}
	printf("%d",sum);
	*/
4、求1-2+3-4+5….+99-100的和
      /*int i,sum = 0, flag = 1;
	for(i=1;i<=100;i++)
	{
	   sum = sum + flag*i;
	   flag = -flag;
	 }
	 printf("%d",sum);
	*/
5、求s=1+1/3+1/5+…,直到最后一项不小于1.0e-6
      /*int i;
	float s = 0;
	for(i=1;1.0/i>=1.0e-6;i = i+2)
	{
          s += 1.0/i;
	}
	printf("%f",s);
	*/
6、求n的阶乘n!(例：5！=5*4*3*2*1)
      /*int n,s = 1;
        printf("请输入n的值：");
	scanf("%d",&n);
	for(s=1;n>=1;n--)
	{
	  s = s * n;
	}
	printf("%d\n",s);
	*/
7、输出所有的水仙花数.水仙花数是指一个 3 位数，它的每个位上的数字的 3次幂之和等于它本身
      /*int i,bw,sw,gw;
	for(i=100;i<=999;i++)
	{
	   bw=i/100;
	   sw=i/10%10;
	   gw=i%10;
	   if(i==bw*bw*bw+sw*sw*sw+gw*gw*gw)
	   printf("%d\n",i);
	}
	*/

8、输出一到一百的数,以及再每十个数是换行。 
      /*int i;
	for(i=1;i<=100;i++)
	{
	    printf("%-5d",i);
	    if(i%10==0)
	    putchar('\n');
	}
	*/



	system("pause");
	return 0;
}