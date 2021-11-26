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
  一、使用swile语句(基本实现循环语句的写法)实现循环结构。

  1、输出10行Hello Word
      /*int i;
	i = 0;
	while(i<=10)
	{printf("Hello Word\n");
	i++;
	
	}
	*/

  2、用while语句求解1～100累加和	
      /*int i,sum=0;
	i = 1;
	while(i<=100)
	{ sum = sum + i;
	  i++;
	}
	printf("%d",sum);
	*/

   //用户从键盘输入n,用while语句求解1～n累加和
      /*int i,sum=0,n;
	i = 1;
	printf("请输入一个数");
	scanf("%d",&n);
	while(i<=n)
	{sum = sum + n;
	 i++;
	}
	printf("%d\n",sum);
	*/


  3、求1---100之间所有3的倍数的和
      /*int i,sum=0;
	i = 1;
	while(i<=100)
	{   if(i%3==0)
	    sum = sum + i;
	    i++;
	}
	printf("%d",sum);
	*/

  4、求1-2+3-4+5….+99-100的和
      /*int i,sum = 0,flag = 1;
	i = 1;
	while(i<=100)
	{
	   sum = sum + flag*i;//(flag*i改变i的符号)
	    i++;
	   flag = -flag;//使得flag能够在正负之间转变。
	}
	printf("%d",sum);
	*/
  5、求s= 1/1+1/3+1/5+…1/99,直到最后一项的结果不小于1.0e-6
      /*int i;//最开始的1是整型数。
	float s = 0;//s存放结果
	i = 1;//循环变量赋初值
	while(1.0/i>=1.0e-6)//1.0e-6=10的负六次方。
	{
	  s += 1.0/i;
	  i = i+2;//（奇数）
	}
	printf("%f\n",s);
	printf("%d\n",i);
	*/
  6、求n的阶乘n!(例：5！=5*4*3*2*1)
      /*int n ,s = 1;
	scanf("%d",&n);
        printf("请输入n的值：");
	while(n>=1)
	{
	  s = s * n;
	  n--;
	}
	printf("n!为：%d\n",s);
	*/

  7、输出所有的水仙花数.水仙花数是指一个 3 位数，它的每个位上的数字的 3次幂之和等于它本身
      /*int i,bw,sw,gw;
	i = 100;
	while(i<=999)
	{
	   bw=i/100;
	   sw=i/10%10;
	   gw=i%10;
	   if(i==bw*bw*bw+sw*sw*sw+gw*gw*gw)
	   printf("%d\n",i);
	   i++;
	
	}
	*/

  8、输出一到一百的数,以及再每十个数是换行。

      /*int i;
	i = 1;
	while(i<=100)
	{
	    printf("%-5d",i);//（%和5之间的 '-'号代表的是左对齐）
	    if(i%10==0)
	    putchar('\n');
	    i++;
	}
	*/

    二、使用for语句（第二种实现循环语句的写法比while简单）实现循环语句。

    // 1、 输出10行hello　World
      /*int i;
	for(i=0;i<10;i++)
	{
           printf("Hello Word\n");
	 }
	*/

     
   //2、求解1～100累加和
      /*int i,sum = 0;
	for(i=1;i<=100;i++)
	{   
	 sum += i;
	}
	printf("%d",sum);
	*/


   //用户从键盘输入n,用while语句求解1～n累加和
      /*int i,sum = 0,n;
	printf("请输入一个数");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	 sum += i;
	}
	printf("%d\n",sum);
	*/


   //3、求1---100之间所有3的倍数的和
      /*int i,sum = 0;
	for(i=1;i<=100;i++)
	{ 
	 if(i%3==0)
	 sum += i;
	}
	printf("%d",sum);
	*/

   
   //4、求1-2+3-4+5….+99-100的和
      /*int i,sum = 0, flag = 1;
	for(i=1;i<=100;i++)
	{
		sum = sum + flag*i;
		flag = -flag;
	}
	printf("%d",sum);
	*/

    
   //5、求s=1+1/3+1/5+…,直到最后一项不小于1.0e-6
      /*int i;
	float s = 0;
	for(i=1;1.0/i>=1.0e-6;i = i+2)
	{
	 s += 1.0/i;
	}
	printf("%f",s);
	*/

 
   //6、求n的阶乘n!(例：5！=5*4*3*2*1)
  /*int n,s = 1;
    printf("请输入n的值:");
	scanf("%d",&n);
	for(s=1;n>=1;n--)
	{
	 s = s * n;
	}
	printf("n的阶乘n!为：%d\n",s);
	*/

 
   //7、输出所有的水仙花数.水仙花数是指一个 3 位数，它的每个位上的数字的 3次幂之和等于它本身
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

 
   //8、输出一到一百的数,以及再每十个数是换行。
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

//foe语句与swile语句
#include"stdafx.h"
#include<stdio.h>
#include"stdlib.h"
int main()
{
//1、输出10行hello　world
	//使用for循环实现。
	/*int i;
	for(i=0;i<10;i++)
	{
         printf("Hello Word\n");
	}

	int i;
	i = 0;
	while(i<=10)
	{
          printf("Hello Word\n");
	  i++;
	 }
	*/
//2、用while语句求解1～100累加和
      /*int i,sum=0;
	i = 1;
	while(i<=100)
	{ sum = sum + i;
	  i++;
	}
	printf("%d",sum);
	*/
        /*int i,sum = 0;//for语句
	for(i=1;i<=100;i++)
	{   
	  sum += i;
	 }
	printf("%d",sum);

//用户从键盘输入n,用while语句求解1～n累加和
	/*int i,sum = 0,n;
	printf("请输入n的值：");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	  sum += i;
	 }
	printf("%d\n",sum);
	*/

	/*int i,sum=0,n;
	i = 1;
	printf("请输入一个数");
	scanf("%d",&n);
	while(i<=n)
	{
          sum = sum + n;
	  i++;
	}
	printf("%d\n",sum);
	*/


//3、求1---100之间所有3的倍数的和
	/*int i,sum = 0;
	for(i=1;i<=100;i++)
	{ 
	  if(i%3==0)
	  sum += i;
	}
	printf("%d",sum);
	*/
      /*int i,sum=0;
	i = 1;
	while(i<=100)
	{   if(i%3==0)
	    sum = sum + i;
	    i++;
	}
	printf("%d",sum);
	*/
//4、求1-2+3-4+5….+99-100的和
      /*int i,sum = 0, flag = 1;
	for(i=1;i<=100;i++)
	{
	  sum = sum + flag*i;
	  flag = -flag;
	}
	printf("%d",sum);
	*/

      /*int i,sum = 0,flag = 1;
	i = 1;
	while(i<=100)
	{
	   sum = sum + flag*i;
	   i++;
	   flag = -flag;
	}
	printf("%d",sum);
	*/
	
//5、求s=1+1/3+1/5+…,直到最后一项不小于1.0e-6
      /*int i;
	float s = 0;
	for(i=1;1.0/i>=1.0e-6;i = i+2)
	{
	  s += 1.0/i;
	}
	printf("%f",s);
	*/

      /*int i;
	float s = 0;
	i = 1;
	while(1.0/i>=1.0e-6)
	{
	  s += 1.0/i;
	  i = i+2;
	}
	printf("%f\n",s);
	printf("%d\n",i);
	*/
//6、求n的阶乘n!(例：5！=5*4*3*2*1)
      /*int n,s = 1;
	scanf("%d",&n);
	for(s=1;n>=1;n--)
	{
	  s = s * n;
	}
	printf("%d\n",s);
	*/

      /*int n ,s = 1;
	scanf("%d",&n);
	while(n>=1)
	{
	  s = s * n;
	  n--;
	}
	printf("%d\n",s);
	*/




//7、输出所有的水仙花数.水仙花数是指一个 3 位数，它的每个位上的数字的 3次幂之和等于它本身
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

	/*int i,bw,sw,gw;
	i = 100;
	while(i<=999)
	{
	   bw=i/100;
	   sw=i/10%10;
	   gw=i%10;
	   if(i==bw*bw*bw+sw*sw*sw+gw*gw*gw)
	   printf("%d\n",i);
	   i++;
	
	}
	*/

//8、输出一到一百的数,以及再每十个数是换行。
   /* int i;
	for(i=1;i<=100;i++)
	{
		printf("%-5d",i);
	    if(i%10==0)
		putchar('\n');
	}
	*/

	/*int i;
	i = 1;
	while(i<=100)
	{
		printf("%-5d",i);
	    if(i%10==0)
		putchar('\n');
	    i++;
	}
	*/

/* 练习
1.将1—100按每行10个数输出。
2.计算n！。
当计算结果大于或等于10000时停止。输出形式：  例如8！=40320
3. 输出100以内（不含100）能被3整除且个位数是6的所有整数

选做题：
1. 判断在半径为1-10的圆中是否存在面积大于200的圆
2. 编程计算1+12+123+1234+12345
*/
//1、for语句实现
/*int i ;
for(i=1;i<=100;i++)
{
	if(i%10==0)
		putchar('\n')
}


//2、
int n=1,sum ;
for(;;)
{
	printf("%d\n",sum);
}


//3、
/*int i,gw;
for(i=1;i<100;1++)
{
	if(i%3==0 &&)
}
*/


//打印*号五行五列
  /* int i,j;
   for(i=1;i<5;i++)//外循环控制行
   {
	   for(j=0;j<5;j++)//内循环控制列
		  {
		   printf("* ");
	   }
	   printf("\n");

   }
   */
//正三角形
/*int i,j;
   for(i=0;i<5;i++)//外循环控制行
   { 
	   for(j=0;j<=i;j++)//内循环控制列
		  {
		   printf("* ");
	   }
	   printf("\n");
	   */   

/*
    *
   **
  ***
 ****
*****

   int i,j;
	for(i=0;i<5;i++)
	{
		for(j=0;j<=5-i;j++)
		{
			printf("  ");
		}
		for(j=0;j<=i;j++)
		{
			printf("* ");
		}
		printf("\n");
	}

//九九乘法表。
int i,j;
   for(i=1;i<=9;i++)//外循环控制行
   { 
	   for(j=1;j<=i;j++)//内循环控制列
	  {    
		   printf("%4d * %d = %d ",j,i,j*i);
	   }
	   printf("\n");
   }












   system("pause");
	return 0;
   }
   






























  

































#include"stdafx.h"
#include<stdio.h>
#include"stdlib.h"
int main()
{
//1、输出10行hello　world
	//使用for循环实现。
	/*int i;
	for(i=0;i<10;i++)
	{printf("Hello Word\n");
	}

	int i;
	i = 0;
	while(i<=10)
	{printf("Hello Word\n");
	i++;
	
	}
	*/
//2、用while语句求解1～100累加和
	/*int i,sum = 0;
	for(i=1;i<=100;i++)
	{   
		sum += i;
	}
	printf("%d",sum);

	int i,sum=0;
	i = 1;
	while(i<=100)
	{ sum = sum + i;
	  i++;
	}
	printf("%d",sum);
	*/
//用户从键盘输入n,用while语句求解1～n累加和
	/*int i,sum = 0,n;
	printf("请输入一个数");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum += i;
	}
	printf("%d\n",sum);
	*/

	/*int i,sum=0,n;
	i = 1;
	printf("请输入一个数");
	scanf("%d",&n);
	while(i<=n)
	{sum = sum + n;
	 i++;
	}
	printf("%d\n",sum);
	*/


//3、求1---100之间所有3的倍数的和
	/*int i,sum = 0;
	for(i=1;i<=100;i++)
	{ 
		if(i%3==0)
		sum += i;
	}
	printf("%d",sum);
	*/
	/*int i,sum=0;
	i = 1;
	while(i<=100)
	{   if(i%3==0)
		sum = sum + i;
	    i++;
	}
	printf("%d",sum);
	*/
//4、求1-2+3-4+5….+99-100的和
	/*int i,sum = 0, flag = 1;
	for(i=1;i<=100;i++)
	{
		sum = sum + flag*i;
		flag = -flag;
	}
	printf("%d",sum);
	*/

	/*int i,sum = 0,flag = 1;
	i = 1;
	while(i<=100)
	{
	   sum = sum + flag*i;
	    i++;
		flag = -flag;
	}
	printf("%d",sum);
	*/
	
//5、求s=1+1/3+1/5+…,直到最后一项不小于1.0e-6
	/*int i;
	float s = 0;
	for(i=1;1.0/i>=1.0e-6;i = i+2)
	{
		 s += 1.0/i;
	}
	printf("%f",s);
	*/

	/*int i;
	float s = 0;
	i = 1;
	while(1.0/i>=1.0e-6)
	{
	  s += 1.0/i;
	  i = i+2;
	}
	printf("%f\n",s);
	printf("%d\n",i);
	*/
//6、求n的阶乘n!(例：5！=5*4*3*2*1)
    /*int n,s = 1;
	scanf("%d",&n);
	for(s=1;n>=1;n--)
	{
		s = s * n;
	}
	printf("%d\n",s);
	*/

	/*int n ,s = 1;
	scanf("%d",&n);
	while(n>=1)
	{
	  s = s * n;
	  n--;
	}
	printf("%d\n",s);
	*/




//7、输出所有的水仙花数.水仙花数是指一个 3 位数，它的每个位上的数字的 3次幂之和等于它本身
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

	/*int i,bw,sw,gw;
	i = 100;
	while(i<=999)
	{
	   bw=i/100;
	   sw=i/10%10;
	   gw=i%10;
	   if(i==bw*bw*bw+sw*sw*sw+gw*gw*gw)
	   printf("%d\n",i);
	   i++;
	
	}
	*/



/* 练习
1.将1—100按每行10个数输出。
2.计算n！。
当计算结果大于或等于10000时停止。输出形式：  例如8！=40320
3. 输出100以内（不含100）能被3整除且个位数是6的所有整数

选做题：
1. 判断在半径为1-10的圆中是否存在面积大于200的圆
2. 编程计算1+12+123+1234+12345
*/



//3、
/*int i,gw;
for(i=1;i<100;1++)
{
	if(i%3==0 &&)
}
*/

  system("pause");
  return 0;
   }
 