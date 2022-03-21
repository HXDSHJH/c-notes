 练习
1.将1—100按每行10个数输出。
2.计算n！。
当计算结果大于或等于10000时停止。输出形式：  例如8！=40320
3. 输出100以内（不含100）能被3整除且个位数是6的所有整数


1、for语句实现



#include"stdafx.h"
#include<stdio.h>
#include"stdlib.h"
int main()
{
int i ;
for(i=1;i<=100;i++)
{
	if(i%10==0)
        printf("%d\n",i);
}

int i ;
for(i=1;i<=100;i++)
{
	if(i%10==0)
		putchar('\n')
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
  int i,gw;
    for(i=1;i<100;i++)
  {    gw=i%10;//得到个位（表达出个位）
	   if(i%3==0 && gw==6)
        printf("%d\n",i);
  }
   
   system("pause");
	return 0;
   }
