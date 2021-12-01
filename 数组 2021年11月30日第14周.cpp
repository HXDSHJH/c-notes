#include"stdafx.h"
#include<stdio.h>
#include"stdlib.h"
int main()
{
	//1、int x = 10;     2、int x ,x = 10;  3、int x; scanf("%d",&x);//从键盘输入
	int a[10],i;//赋值
	for(i=0;i<10;i++)
	a[i]=i+1;//a[0]=1
	for(i=0;i<10;i++)
	printf("%d\n",a[i]);
	
	//3、从键盘上输入十个数并打印。
	int a[10],i;
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	for(i=0;i<10;i++)
		printf("%d\n",a[i]);


	int a[10]={1,2,3,4,5,6,7,8,9,10};//下标从0开始。
	int i;
	for(i=0;i<10;i++)
	{
	  printf("%d\n",a[i]);//数组元素引用,循环变量做下标用
	}
	
	//1、创建一个长度是10的数组，初始值为1-10，输出所有元素。
	int a[10]={1,2,3,4,5,6,7,8,9,10};
	int i;
	for(i=0;i<10;i++)
	{
		printf("%d\n",a[i]);
	}
	
	//2、创建一个长度是10的数组，初始值为1-10，输出所有奇数元素。
	int a[10]={1,2,3,4,5,6,7,8,9,10};
	int i;
	for(i=0;i<10;i++)
	{
		if(i%2==0)
		{
			printf("%d\n",a[i]);
		}
	}
	
	//3、创建一个长度是10的数组，初始值为1-10，输出所有偶数元素。
	int a[10]={1,2,3,4,5,6,7,8,9,10};
	int i;
	for(i=0;i<10;i++)
	{
		if(i%2==1)
		{
			printf("%d\n",a[i]);
		}
	}
	

	//4、创建一个长度是10的数组，初始值为1-10，输出所有元素的和。
	int a[10]={1,2,3,4,5,6,7,8,9,10};
	int i,sum=0;
	for(i=0;i<10;i++)
	{
		sum += a[i];
	}
	printf("%d\n",sum);
	
	//5、创建一个长度是10的数组，初始值为1-10，输出所有偶数元素的和。
	int a[10]={1,2,3,4,5,6,7,8,9,10};
	int i,sum=0;
	for(i=0;i<10;i++)
	{
		if(i%2==1)
		{
			sum += a[i];
		}
	}
	printf("%d",sum);
	
	//6、创建一个长度是10的数组，初始值为1-10，输出所有奇数元素的和
	int a[10]={1,2,3,4,5,6,7,8,9,10};
	int i,sum=0;
	for(i=0;i<10;i++)
	{
		if(i%2==0)
		{
			sum += a[i];
		}
	}
	printf("%d",sum);
	
	//7、创建一个长度是10的数组，元素赋值1-10，输出所有元素
	int a[10];
	int i;
	for(i=0;i<10;i++)
	{
		a[i] = i +1;
	}
	for(i=0;i<10;i++)
	{
	  printf("%d\n",a[i]);
	}
	
	//8、创建一个长度是10的数组，元素赋值1-10，输出所有偶数元素
	int a[10];
	int i;
	for(i=0;i<10;i++)
	{
		a[i] = i +1;
	}
	for(i=0;i<10;i++)
	{
		if(i%2==1)
		{
			printf("%d\n",a[i]);
		}
	}
	
	//9、创建一个长度是10的数组，元素赋值1-10，输出所有奇数元素
     int a[10];
	 int i;
	 for(i=0;i<10;i++)
	 {
		 a[i] = i + 1;
		 if(i%2==0)
		 {
			 printf("%d\n",a[i]);
		 }
	 }
	 

	//10、创建一个长度是10的数组，元素赋值1-10，所有元素求和
    int a[10];
	 int i,sum=0;
	 for(i=0;i<10;i++)
	 {
		 a[i] = i + 1;
		 sum += a[i];
	 }
	 printf("%d",sum);
	 
	//11、创建一个长度是10的数组，元素值由键盘输入，输出所有元素
     int a[10]={1,2,3,4,5,6,7,8,9,10};
	 int i;
	 for(i=0;i<10;i++)
	 {
		 scanf("%d",&a[i]);
		 printf("%d\n",a[i]);
	 }
	 
	//12、创建一个长度是10的数组，元素值由键盘输入，输出所有偶数元素
     int a[10]={1,2,3,4,5,6,7,8,9,10};
	 int i;
	 for(i=0;i<10;i++)
	 {
		 scanf("%d",&a[i]);
		 if(i%2==1)
		 {
           printf("%d\n",a[i]);
		 }
	 }
	 
	//13、创建一个长度是10的数组，元素值由键盘输入，输出所有元素和
    int a[10]={1,2,3,4,5,6,7,8,9,10};
	 int i,sum=0;
	 for(i=0;i<10;i++)
	 {
		 scanf("%d",&a[i]);
		 sum = sum + a[i];
	 } 
	 printf("%d\n",sum);
	 
	//14、创建一个长度是10的数组，初始值为1-10，判断用户输入的n是否存在于数组当中。
     ①int a[10]={1,2,3,4,5,6,7,8,9,10};
	 int i,n;
	 printf("请输入n的值：");
	 for(i=0;i<10;i++)
	 {
		 scanf("%d",&n);
		 if(n<10 && n>=0)
		 {
           printf("n存在于数组中\n");
		 }
		 else
		 {
			 printf("n不存在于数组中");
		 }
	 } 
	 
    ② int a[10]={12345678910},n,i;
	 scanf("%d",&n);
	 for(i=0;i<10;i++)
	 {
		 if(a[i]==n)
		 break;
	 }
	 if(i==10)
	 {
		 printf("%d不存在\n",n);
	 }
	 else
	 {
		 printf("%d存在\n",n);
	 }
	 
	//15、从键盘输入十个数并逆序输出
      int a[10];
	  int i;
	  for(i=0;i<10;i++)
	  {
		  scanf("%d",&a[i]);
	  }
	  for(a[i]=9;a[i]>=0;a[i]--)
	  {
		  printf("%d\n",a[i]);
	  }
     
	//16、从键盘输入十个数，输出其中最大数
	 int a[10];
	 int i,max;
	 for(i=0;i<10;i++)
	 {
		 scanf("%d",&a[i]); 
	 }
	 max = a[0];
	 for(i=0;i<10;i++)
	 {
		 if(max<a[i])
		 {
			 max = a[i];
		 }
	 }
	 printf("max = %d\n",max);
	 
	//17、从键盘输入十个数，输出其中最小数
	 int a[10];
	 int i,min;
	 for(i=0;i<10;i++)
	 {
		 scanf("%d",&a[i]); 
	 }
	 min = a[0];
	 for(i=0;i<10;i++)
	 {
		 if(min>a[i])
		 {
			 min = a[i];
		 }
	 }
	 printf("min = %d\n",min);
	 
	//18、从键盘输入十个数，输出其中大于3的数
	 int a[10]={1,2,3,4,5,6,7,8,9,10};
	 int i;
	 for(i=0;i<10;i++)
	 {
		 scanf("%d",&a[i]);
		 if(a[i]>3)
		 {
			 printf("%d\n",a[i]);
		 }
	 }
	 
	//19、从键盘输入十个数，并将其中的最大数和最小数交换。
     int a[10],i,max,min,m,t;
	 for(i=0;i<10;i++)
	 {
		 scanf("%d",&a[i]);
	 }
	 max = min = a[0];
	 for(i-0;i<10;i++)
	 {
		 if(max<a[i])
		 {
			 max = a[i];m = i;
		 }
		 if(min>a[i])
		 {
			 min = a[i];
			 n = i;
		 }
	 }
	 for(i=0;i<10;i++)
	 {
		 printf("%d",a[i]);
	 }
	 printf("max = %d\n",max);
	 printf("%d\n",min);
	 t = a[m];a[m] = a[n];a[n] = t;
	 for(i=0;i<10;i++)
	 {
		 printf("%d",a[i]);
	 }
	//20、创建一个长度是10的数组，初始值为1-10,输出元素6的下标。
	 int a[10] = {1,2,3,4,5,6,7,8,9,10};
	 int i;
	 for(i=0;i<10;i++)
	 {
		 printf("%d",a[i]);
	 }



	system("pause");
	return 0;
}