循环语句的基本条件：1、定义循环变量 2、循环变量赋初值 3、循环条件 4、改变循环变量的值。
注意：每个循环语句都要有这四个基本条件。
#include"stdafx.h"
#include<stdio.h>
#include"stdlib.h"
int main()
{
   int i;//定义循环变量。
   i = o;//循环变量赋初值。
   while(i<=100)//循环条件。
  {printf("计用218\n");//{}里的是改变循环变量的值。
    i++; 
   }

  system("pause");
  return 0;
}

练习题：
1、求一到一百的所有数。

int i;
 i = 1;
 whlie(i<=100)
{ printf("%d",i);
  i++;
}


2、求一到一百的和。

int i,sum=0;
i=1;
while(i<=100)
{sum = sum + i;
 i++;  

}
printf("%d",sum);


3、求一道一百中三的倍数之和。

int i,sum=0;
i=1;
while(i<=100)
{if(i%3==0)
 sum=sum+i;
 i++;
}
printf("%d",sum);


4、求1-2+3-4+5-6……+99-100的和。（不会写）

int i, sum=0;//错误
i = 1;//错误
while(i<=100)//错误
{if(i%2==0)//错误
 i=-i;//错误
 sum = sum + i;//错误
 i++;//错误
}
printf("%d",sum);

5、求1 + 1/3 + 1/5……+1/99的和。
int i;
float sum=0;
i = 1;
while(i<=100)
第一种：{if(i%2==1)
 sum = sum + 1.0/i;
 i++;
}
第二种：{sum = sum +1.0/i;
i = i +2;
}
printf("%d",sum);











}