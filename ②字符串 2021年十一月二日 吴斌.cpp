#include"stdafx.h"
#include<stdio.h>
#include"stdlib.h"
int main()
{
	/*char ch;
	ch = getchar();
	putchar(ch);
	*/
	//�ַ���
	/*printf("%-8s%-8s\n","����","����");
	printf("%-8s%-8d\n","����",20);
	printf("%-8s%-8d\n","����",19);
	*/
	
	float x = 2.5;
	printf("%.2f\n",x);//���ȿ����ַ�����ʵ����
	
	printf("%s\n","Hello word!");
	printf("%.5s\n","Hello word!");

	/*int a,b;
	char c,d;
	scanf("%d%c%d%c",&a,&c,&b,&d);
	printf("%d,%d",a,b);
	printf("%c,%c",c,d);
	*/
	
	//1��Ϊʹ��a=1,b=2,c=��A��,d=5.5,�ڼ�����������룿//�����ַ���ǰ���ÿո������Ϊ�ո�Ҳ��һ���ַ���
	/*int a,b;
	char c;
	float d;
	scanf("%d%d%c%f",&a,&b,&c,&d);
	printf("a=%d,b=%d,c=%c,d=%.1f",a,b,c,d);
	*/
	









//2 ��̣�Ҫ��Ӽ����������ݣ�ʹ�����ͱ���a=20��b=18���ַ�����c1=��N����c2=��n����ʵ�ͱ���x=13.21,y=65.534�������������ʽ�������������ʾ�Ľ�����£���
//int a=20,b=18
//char c1=N,c2=n
//float x=13.21,y=64.534.
  /*int a,b;
  char c1,c2;
  float x,y;
  scanf("%d%d%c%c%f%f",&a,&b,&c1,&c2,&x,&y);
  printf("a=%d,b=%d\n,c1=%c,c2=%c\n,x=%.2f,y=%.3f\n",a,b,c1,c2,x,y);
  */






                                   �Ҳ���⡣
//3��̣���������˫�������������ǵ�ƽ��ֵ��������ƽ��ֵС�����һλ������С�����ڶ�λ�������������룬�����������//˫�����ǡ�

  /*float a, b, c;
  float ave;
  scanf("%f%f%f",&a,&b,&c);//1.02 2.01 3.04
  ave = (a+b+c)/3;
  //(ave*10 +0.5) /10
  printf("ave = %.1f\n",ave);//2.03
 */








  //4�������ͬѧ�����������8�����Ա𣨿��3������ͥ��ַ�����20������ϵ��ʽ�����15��

	/*printf("%8s%3s%20s%15s\n","����","��","xx��","��ϵ��ʽ1256153161");
	printf("%8s%3s%20s%15s\n","�ܿ�","��","xx��","��ϵ��ʽ1254616153");
	printf("%8s%3s%20s%15s\n","����","Ů","xx��","��ϵ��ʽ1245678913");
	*/
	
	




	//5�ж��û���������Ƿ�Ϊ����
	/*int x;
	printf("������һ����");
	scanf("%d",&x);
	if(x>0)
		printf("����\n");
	else
		printf("������\n");
		*/






//6�ж��û���������Ƿ���7�ı�����
	/*int y;
	printf("������һ����");
	scanf("%d",&y);
	if(y/7 == 0)
		printf("%d��7�ı���\n",y);
	else
		printf("%d����7�ı���\n",y);

		*/






//7�ж��û��Ӽ��������������������ż��
  /*int a ;
  printf("������һ����");
	scanf("%d",&a);
	if(a%2==0)
		printf("%dΪż��",a);
	else
		printf("%d������",a);
 

     */





//8�ж��û��Ӽ�������������Ƿ���5��3�ı���

  /* int x;
   printf("������һ����");
   scanf("%d",&x);
   if(x/5==0 && x/3==0)
	   printf("%d��������ı���",x);
   else
	   printf("%d����������ı���",x);

	   */







//9�ж��û��Ӽ������������ĸ�Ƿ��Ǵ�д��ĸ

   /*char c;
   printf("������һ����ĸ");
   scanf("%c",&c);
   if(c>64 && c<=90)//��д��ĸ��ȡֵ��Χ
         printf("%c�Ǵ�д��ĸ",c);
   else
	   printf("%c��Сд��ĸ",c);
   
   */









//10�ж��û�������Ƿ���ˮ�ɻ�����  �磺 153==1*1*1+5*5*5+3*3*3
 /*int x;
 int a,b,c;//�ֱ��Ű�ʮ��λ
 scanf("%d",&x);
 a =x /100;
 b = x/10%10;
 c = x%10;
 if(x == a*a*a + b*b*b + c*c*c)
 {
    printf("%d��ˮ�ɻ���\n",x); 
 }
 else
 {
 printf("%d����ˮ�ɻ���\n",x);
 }
 */




//11�û��Ӽ���������������������еĴ���
   /*float f ,g;
   printf("������������");
   scanf("%f%f",&f,&g);
   if(f-g>0)
	   printf("%fΪ����",f);
   else
	   printf("%fΪС��",g);
  
  */





//12�û��Ӽ���������ߺ�����,����BMI��ֵ(����ָ��(BMI)=����(kg)/��� (m)^2)�����BMI��ֵ��18.5��23.9 ֮�䣬���BMIֵ�������������BMIֵ������
   float sg, tz;
   float bmi;
   printf("�������������:");
   scanf("%f",&sg);
   printf("����������;");
   scanf("%f",&tz);
   bmi =tz/(sg*sg);
   printf("bmiΪ;%f=%f/(%f*%f)\n",bmi);
   if(bmi>=18.5 && bmi<=23.9)
	   printf("bmi%f����",bmi);
   else
	   printf("bmi%f�쳣",bmi);







//13�ж��û��������������껹��ƽ�꣨�ܹ���4�������Ҳ��ܱ�100���������ܹ���400������

   /*int year;
   printf("������һ�����");
   scanf("%d",&year);
   if(year%4==0 && year%100 || year%400!=0)
	   printf("%dΪ����",year);
   else
	   printf("%dΪƽ��",year);


	   */


























	
	system("pause");
	return 0;


}