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



#include"stdafx.h"
#include<stdio.h>
#include"stdlib.h"
int main()
{
/*int i ;
for(i=1;i<=100;i++)
{
	if(i%10==0)
        printf("%d\n",i);
}


  //2、计算n！。
  当计算结果大于或等于10000时停止。输出形式：  例如8！=40320
        int i,n,sum=1;
	printf("输入n的值");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{   
           sum= sum*i;
       
	}
	   printf("%d! = %d\n",n,sum);


  //3、输出100以内（不含100）能被3整除且个位数是6的所有整数
  /*int i,gw;
    for(i=1;i<100;i++)
  {    gw=i%10;//得到个位（表达出个位）
	   if(i%3==0 && gw==6)
        printf("%d\n",i);
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
//  三角形
*
**
***
****
*****
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
    int i,j;//已经学会。	
 for(i=0;i<5;i++)//外循环控制行数。
 {
	 for(j=1;j<=5-i;j++)
		 printf("  ");
	 for(j=0;j<=i;j++)//内循环控制空格个数和*数。
		 printf("* "); 
	 printf("\n");
 }
   */
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