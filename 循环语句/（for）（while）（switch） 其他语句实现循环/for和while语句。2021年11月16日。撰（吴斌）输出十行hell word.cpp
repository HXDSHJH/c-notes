//1�����10��hello��World
//2����while������1��100�ۼӺ�
//�û��Ӽ�������n,��while������1��n�ۼӺ�
//3����1---100֮������3�ı����ĺ�
//4����1-2+3-4+5��.+99-100�ĺ�
//5����s=1+1/3+1/5+��,ֱ�����һ�С��1.0e-6
//6����n�Ľ׳�n!(����5��=5*4*3*2*1)
//7��������е�ˮ�ɻ���.ˮ�ɻ�����ָһ�� 3 λ��������ÿ��λ�ϵ����ֵ� 3����֮�͵���������
//8�����һ��һ�ٵ���,�Լ���ÿʮ�����ǻ��С�



#include"stdafx.h"
#include<stdio.h>
#include"stdlib.h"
int main()
{
  һ��ʹ��swile���(����ʵ��ѭ������д��)ʵ��ѭ���ṹ��

  1�����10��Hello Word
      /*int i;
	i = 0;
	while(i<=10)
	{printf("Hello Word\n");
	i++;
	
	}
	*/

  2����while������1��100�ۼӺ�	
      /*int i,sum=0;
	i = 1;
	while(i<=100)
	{ sum = sum + i;
	  i++;
	}
	printf("%d",sum);
	*/

   //�û��Ӽ�������n,��while������1��n�ۼӺ�
      /*int i,sum=0,n;
	i = 1;
	printf("������һ����");
	scanf("%d",&n);
	while(i<=n)
	{sum = sum + n;
	 i++;
	}
	printf("%d\n",sum);
	*/


  3����1---100֮������3�ı����ĺ�
      /*int i,sum=0;
	i = 1;
	while(i<=100)
	{   if(i%3==0)
	    sum = sum + i;
	    i++;
	}
	printf("%d",sum);
	*/

  4����1-2+3-4+5��.+99-100�ĺ�
      /*int i,sum = 0,flag = 1;
	i = 1;
	while(i<=100)
	{
	   sum = sum + flag*i;//(flag*i�ı�i�ķ���)
	    i++;
	   flag = -flag;//ʹ��flag�ܹ�������֮��ת�䡣
	}
	printf("%d",sum);
	*/
  5����s= 1/1+1/3+1/5+��1/99,ֱ�����һ��Ľ����С��1.0e-6
      /*int i;//�ʼ��1����������
	float s = 0;//s��Ž��
	i = 1;//ѭ����������ֵ
	while(1.0/i>=1.0e-6)//1.0e-6=10�ĸ����η���
	{
	  s += 1.0/i;
	  i = i+2;//��������
	}
	printf("%f\n",s);
	printf("%d\n",i);
	*/
  6����n�Ľ׳�n!(����5��=5*4*3*2*1)
      /*int n ,s = 1;
	scanf("%d",&n);
        printf("������n��ֵ��");
	while(n>=1)
	{
	  s = s * n;
	  n--;
	}
	printf("n!Ϊ��%d\n",s);
	*/

  7��������е�ˮ�ɻ���.ˮ�ɻ�����ָһ�� 3 λ��������ÿ��λ�ϵ����ֵ� 3����֮�͵���������
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

  8�����һ��һ�ٵ���,�Լ���ÿʮ�����ǻ��С�

      /*int i;
	i = 1;
	while(i<=100)
	{
	    printf("%-5d",i);//��%��5֮��� '-'�Ŵ����������룩
	    if(i%10==0)
	    putchar('\n');
	    i++;
	}
	*/

    ����ʹ��for��䣨�ڶ���ʵ��ѭ������д����while�򵥣�ʵ��ѭ����䡣

    // 1�� ���10��hello��World
      /*int i;
	for(i=0;i<10;i++)
	{
           printf("Hello Word\n");
	 }
	*/

     
   //2�����1��100�ۼӺ�
      /*int i,sum = 0;
	for(i=1;i<=100;i++)
	{   
	 sum += i;
	}
	printf("%d",sum);
	*/


   //�û��Ӽ�������n,��while������1��n�ۼӺ�
      /*int i,sum = 0,n;
	printf("������һ����");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	 sum += i;
	}
	printf("%d\n",sum);
	*/


   //3����1---100֮������3�ı����ĺ�
      /*int i,sum = 0;
	for(i=1;i<=100;i++)
	{ 
	 if(i%3==0)
	 sum += i;
	}
	printf("%d",sum);
	*/

   
   //4����1-2+3-4+5��.+99-100�ĺ�
      /*int i,sum = 0, flag = 1;
	for(i=1;i<=100;i++)
	{
		sum = sum + flag*i;
		flag = -flag;
	}
	printf("%d",sum);
	*/

    
   //5����s=1+1/3+1/5+��,ֱ�����һ�С��1.0e-6
      /*int i;
	float s = 0;
	for(i=1;1.0/i>=1.0e-6;i = i+2)
	{
	 s += 1.0/i;
	}
	printf("%f",s);
	*/

 
   //6����n�Ľ׳�n!(����5��=5*4*3*2*1)
  /*int n,s = 1;
    printf("������n��ֵ:");
	scanf("%d",&n);
	for(s=1;n>=1;n--)
	{
	 s = s * n;
	}
	printf("n�Ľ׳�n!Ϊ��%d\n",s);
	*/

 
   //7��������е�ˮ�ɻ���.ˮ�ɻ�����ָһ�� 3 λ��������ÿ��λ�ϵ����ֵ� 3����֮�͵���������
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

 
   //8�����һ��һ�ٵ���,�Լ���ÿʮ�����ǻ��С�
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

//foe�����swile���
#include"stdafx.h"
#include<stdio.h>
#include"stdlib.h"
int main()
{
//1�����10��hello��world
	//ʹ��forѭ��ʵ�֡�
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
//2����while������1��100�ۼӺ�
      /*int i,sum=0;
	i = 1;
	while(i<=100)
	{ sum = sum + i;
	  i++;
	}
	printf("%d",sum);
	*/
        /*int i,sum = 0;//for���
	for(i=1;i<=100;i++)
	{   
	  sum += i;
	 }
	printf("%d",sum);

//�û��Ӽ�������n,��while������1��n�ۼӺ�
	/*int i,sum = 0,n;
	printf("������n��ֵ��");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	  sum += i;
	 }
	printf("%d\n",sum);
	*/

	/*int i,sum=0,n;
	i = 1;
	printf("������һ����");
	scanf("%d",&n);
	while(i<=n)
	{
          sum = sum + n;
	  i++;
	}
	printf("%d\n",sum);
	*/


//3����1---100֮������3�ı����ĺ�
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
//4����1-2+3-4+5��.+99-100�ĺ�
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
	
//5����s=1+1/3+1/5+��,ֱ�����һ�С��1.0e-6
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
//6����n�Ľ׳�n!(����5��=5*4*3*2*1)
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




//7��������е�ˮ�ɻ���.ˮ�ɻ�����ָһ�� 3 λ��������ÿ��λ�ϵ����ֵ� 3����֮�͵���������
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

//8�����һ��һ�ٵ���,�Լ���ÿʮ�����ǻ��С�
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

/* ��ϰ
1.��1��100��ÿ��10���������
2.����n����
�����������ڻ����10000ʱֹͣ�������ʽ��  ����8��=40320
3. ���100���ڣ�����100���ܱ�3�����Ҹ�λ����6����������

ѡ���⣺
1. �ж��ڰ뾶Ϊ1-10��Բ���Ƿ�����������200��Բ
2. ��̼���1+12+123+1234+12345
*/
//1��for���ʵ��
/*int i ;
for(i=1;i<=100;i++)
{
	if(i%10==0)
		putchar('\n')
}


//2��
int n=1,sum ;
for(;;)
{
	printf("%d\n",sum);
}


//3��
/*int i,gw;
for(i=1;i<100;1++)
{
	if(i%3==0 &&)
}
*/


//��ӡ*����������
  /* int i,j;
   for(i=1;i<5;i++)//��ѭ��������
   {
	   for(j=0;j<5;j++)//��ѭ��������
		  {
		   printf("* ");
	   }
	   printf("\n");

   }
   */
//��������
/*int i,j;
   for(i=0;i<5;i++)//��ѭ��������
   { 
	   for(j=0;j<=i;j++)//��ѭ��������
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

//�žų˷���
int i,j;
   for(i=1;i<=9;i++)//��ѭ��������
   { 
	   for(j=1;j<=i;j++)//��ѭ��������
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
//1�����10��hello��world
	//ʹ��forѭ��ʵ�֡�
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
//2����while������1��100�ۼӺ�
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
//�û��Ӽ�������n,��while������1��n�ۼӺ�
	/*int i,sum = 0,n;
	printf("������һ����");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum += i;
	}
	printf("%d\n",sum);
	*/

	/*int i,sum=0,n;
	i = 1;
	printf("������һ����");
	scanf("%d",&n);
	while(i<=n)
	{sum = sum + n;
	 i++;
	}
	printf("%d\n",sum);
	*/


//3����1---100֮������3�ı����ĺ�
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
//4����1-2+3-4+5��.+99-100�ĺ�
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
	
//5����s=1+1/3+1/5+��,ֱ�����һ�С��1.0e-6
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
//6����n�Ľ׳�n!(����5��=5*4*3*2*1)
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




//7��������е�ˮ�ɻ���.ˮ�ɻ�����ָһ�� 3 λ��������ÿ��λ�ϵ����ֵ� 3����֮�͵���������
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



/* ��ϰ
1.��1��100��ÿ��10���������
2.����n����
�����������ڻ����10000ʱֹͣ�������ʽ��  ����8��=40320
3. ���100���ڣ�����100���ܱ�3�����Ҹ�λ����6����������

ѡ���⣺
1. �ж��ڰ뾶Ϊ1-10��Բ���Ƿ�����������200��Բ
2. ��̼���1+12+123+1234+12345
*/



//3��
/*int i,gw;
for(i=1;i<100;1++)
{
	if(i%3==0 &&)
}
*/

  system("pause");
  return 0;
   }
 