#include"stdafx.h"       //1����˫��֧����һ�����ľ���ֵ��
                        //4����½�������á�
#include<stdio.h>       //2�����û��������ĸת����Сд��ĸ��
                        //5���齱
#include"stdlib.h"      //3�������������������Ӵ�С����                                                    //6�����ö��֧�������һ���ַ��Ǵ�д ��Сд��ĸ �� ���ֻ�����                                                                              �ַ���
int main()
{
	//1.�õ���֧����һ�����ľ���ֵ
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

	//2.���û��������ĸת����Сд��ĸ��
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


	//3.��������������С��������
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



	//4.��¼���롣����֧��
	/*float x=1514;
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
	*/


	���ö��֦

        ��ʾ������ַ��� ��д �� Сд �� ���� �� �����ַ���
   /*1��char ch;
	scanf("%c",&ch);
	if(ch>='A'&&ch<='Z')
	{
	  printf("%cΪ��д��ĸ",ch);
	}
	else if(ch>='a'&&ch<='z')
	{
	 printf("%cΪСд��ĸ",ch);
	}
	else if(ch>='0'&&ch<='9')
	{
	  printf("%cΪ����",ch);
	}
	else
	{
	  printf("%cΪ�����ַ�",ch);
	}
	*/

	//1����bmi��ֵ���жϣ� bmi<18 ƫ�ݣ�bniֵ��(18-23.5)Ϊ������bmi>23.5Ϊƫ�֡�
	/*float sg, tz ,bmi;
	printf("������������ߺ�����\n");
	scanf("%f%f",&sg,&tz);
	bmi = tz/(sg*sg);
	if(bmi<18)
	{
	  printf("%fΪƫ��",bmi);
	}
	else if(bmi<=23.5 && bmi>=18)
	{
	  printf("%fΪ����",bmi);
	}
	else if(bmi>23.5)
	{
	  printf("%fΪƫ��",bmi);
	}
	*/



        ����switchʵ�ַ�֧�ṹ

	//1����������
      /*float x,y,r;
	char ch;
	printf("�������㣺");
	scanf("%f%c%f",&x,&ch,&y);
	switch(ch)
	{
	case '+':r = x+y;printf("%f%c%f=%f\n",x,y,ch,r);break;
        case '-':r = x-y;printf("%f%c%f=%f\n",x,y,ch,r);break;
        case '*':r = x*y;printf("%f%c%f=%f\n",x,y,ch,r);break;
        case '/':r = x/y;printf("%f%c%f=%f\n",x,y,ch,r);break;
        default:printf("�������");break;

	}

	//if����Ƕ�ף���֧�ṹ����
        /*float x,y,r;
	char ch;
	printf("�������㣺");
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
		printf("��������");
	
	}
	*/




	//��� x>0 y=1;x=0 y=0;x<0 y=-1
	/*int x,y;
	printf("������һ����");
	scanf("%d",&x);//y��Ҫ����Ĳ��ö��壬��Ȼ�����
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


	//9������Ա������         ����=��������+��ɡ� 
    /* ���۶�s                        ��������             ���
	 <10000                         1000               0
	 >=20000                        1000             ��s-10000��*0.05
	 <=50000&&>20000                1000             ��s-20000��*0.06
	 <=100000&&>50000               1000             ��s-50000��*0.07
	 >100000                        1000             ��s-100000��*0.08
	 */
    /* float gz,tc,s;
	 printf("������");
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



     //10����һ�����ľ���ֵ����������
     /*int x,abs;
       scanf("%d",&x);
       abs = x>0?x:-x;//�������ʽ��˫��֧�Ľ��䣩  ���ʽһ�����������ʽ�� �������������ʽ����x>0�Ǳ��ʽһ��x�Ǳ��ʽ����-x�Ǳ��ʽ����
       printf("%d�ľ���ֵ��%d\n",x,abs);



         //11������������еĴ�����
	 int x,y,max;
	 scanf("%d%d",&x,&y);
	 max = x>y?x:y;//�������ʽ��
	 printf("%d\n",max);
	 */













	system("pause");
	return 0;
}
