#include"stdafx.h"
#include<stdio.h>
#include"stdlib.h"
int main()
{  
	//�õ���֧ʵ����һ��������ֵ
  /*int x,abs;
	printf("������һ������");
	scanf("%d",&x);
	abs = x;
	if(x<0)//����֧��
	{  
	   abs = -x;
	}
	printf("%d�ľ���ֵ=%d\n",x,abs);
	*/

	/*int x;
	printf("��ʾ����һ����");
	scanf("%d",&x);
	if(x<=0)
	{
		x = -x;
		printf("����ֵΪ%d��\n",x);
	}
	*/

	/*int x,abs;
    scanf("%d",&x);
    abs = x>0?x:-x;//�������ʽ��˫��֧�Ľ��䣩  ���ʽһ�����������ʽ�� �������������ʽ����x>0�Ǳ��ʽһ��x�Ǳ��ʽ����-x�Ǳ��ʽ����
    printf("%d�ľ���ֵ��%d\n",x,abs);
	*/

	//�õ���֧ʵ�ֽ��û��������ĸת����Сд��ĸ���
           /*���Ʒ   char x;
	         printf("������һ����ĸ");
	          scanf("%c",&x);
	          if(x>='A' && x<='Z' || x>='a' && x<='z')
	          {
	            	x = x+32;
	             	printf("������ĸ��Сд��ĸΪ��%c\n",x);

	            }
	            */
	/*char x,y;
	printf("������һ����ĸ");
	scanf("%c",&x);
	y = x;//����Сд��ĸ��
	if(x<=90 && x>=65)
	{
	  y = x + 32;
	}
	printf("%c��Сд��ĸΪ%c\n",x,y);
	*/

	//�õ���֧ʵ��3������С�������� 
	/*int a,b,c;
	int x=0;
	printf("����������������;");
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
	printf("����������С��������Ϊ��%d>%d>%d\n",a,b,c);
	*/

  /*float x, y, z,t;
	printf("����ǰ��������������������");
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
	printf("�����%f<%f<%f\n",x,y,z);
	*/

	/*��¼���롣����֧��
	float x=1514;
	float y;
	printf("��������������\n");
	scanf("%f",&y);
	if(x==y)
	{
	  printf("������ȷ\n");
	}
	if(x!=y)
	{
	 printf("�������\n");
	}
	*/	

	//5.�齱(1-10)��
	/*int x,y,z,sum;
	x = rand()%10;
	y = rand()%10;
	z = rand()%10;
	sum = x + y + z;
	printf("�����е���%d %d %d ��%d\n",x,y,z,sum);
        if(sum<=10)
	{
	  printf("���Ƚ�\n");
	}
	if(x<=15&&x>10)
	{
	  printf("���Ƚ�\n");
	}
	if(x>15)
	{
	  printf("һ�Ƚ�\n");
	}

	}
	*/

	//��д Сд ���� �����ַ�
	/*char x;
	printf("������һ���ַ�");
	scanf("%c",&x);
	if(x>='A' && x<='Z')
	{
		printf("%cΪ��д��ĸ\n",x);
	}
	else if(x>='a' && x<='z')
	{
		printf("%cΪСд��ĸ\n",x);
	}
	else if(x>='0' && x<='9')
	{
		printf("%cΪ����\n",x);
	}
	else
	{
	  printf("%cΪ�����ַ�",x);
	}
	*/

	//����������  ���û����룺�����������������  1+2 / 1-2 / 1*2 / 1/2��
	/*float a,b,c;
	char ch;
	printf("�����������");
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
	printf("������Ϊ��%f%c%f=%f",a,ch,b,c);
	*/

	/*����=��������+��ɡ�(���֧)
	
	���۶� s            ��������      ���
	<10000             1000           0
	>=20000             1000         ��s-10000��*5%  
	<=50000&&>20000    1000          ��s-20000��*6%
	<=100000&&>50000   1000           ��s-50000��*7%
	>100000            1000          ��s-100000��*8%
	*/
   float gz,tc,s;
   printf("���������۶");
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