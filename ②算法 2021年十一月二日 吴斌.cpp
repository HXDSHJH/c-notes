#include"stdafx.h"
#include<stdio.h>
#include"stdlib.h"
int main()
{
	/*char ch;
	ch = getchar();
	putchar(ch);
	*/
	//字符串
	/*printf("%-8s%-8s\n","姓名","年龄");
	printf("%-8s%-8d\n","李四",20);
	printf("%-8s%-8d\n","张三",19);
	*/
	
	float x = 2.5;
	printf("%.2f\n",x);//精度控制字符串和实数。
	
	printf("%s\n","Hello word!");
	printf("%.5s\n","Hello word!");

	/*int a,b;
	char c,d;
	scanf("%d%c%d%c",&a,&c,&b,&d);
	printf("%d,%d",a,b);
	printf("%c,%c",c,d);
	*/
	
	//1、为使得a=1,b=2,c=‘A’,d=5.5,在键盘上如何输入？//输入字符是前后不用空格隔开因为空格也是一个字符。
	/*int a,b;
	char c;
	float d;
	scanf("%d%d%c%f",&a,&b,&c,&d);
	printf("a=%d,b=%d,c=%c,d=%.1f",a,b,c,d);
	*/
	









//2 编程，要求从键盘输入数据，使得整型变量a=20，b=18；字符变量c1=‘N’，c2=‘n’；实型变量x=13.21,y=65.534。按下面输出格式进行输出（即显示的结果如下）：
//int a=20,b=18
//char c1=N,c2=n
//float x=13.21,y=64.534.
  /*int a,b;
  char c1,c2;
  float x,y;
  scanf("%d%d%c%c%f%f",&a,&b,&c1,&c2,&x,&y);
  printf("a=%d,b=%d\n,c1=%c,c2=%c\n,x=%.2f,y=%.3f\n",a,b,c1,c2,x,y);
  */






                                   我不理解。
//3编程：读入三个双精度数，求它们的平均值并保留此平均值小数点后一位数，对小数点后第二位数进行四舍五入，最后输出结果。//双精度是。

  /*float a, b, c;
  float ave;
  scanf("%f%f%f",&a,&b,&c);//1.02 2.01 3.04
  ave = (a+b+c)/3;
  //(ave*10 +0.5) /10
  printf("ave = %.1f\n",ave);//2.03
 */








  //4输出三个同学的姓名（宽度8），性别（宽度3），家庭地址（宽度20），联系方式（宽度15）

	/*printf("%8s%3s%20s%15s\n","李四","男","xx地","联系方式1256153161");
	printf("%8s%3s%20s%15s\n","杰克","男","xx地","联系方式1254616153");
	printf("%8s%3s%20s%15s\n","杰西","女","xx地","联系方式1245678913");
	*/
	
	




	//5判断用户输入的数是否为正数
	/*int x;
	printf("数输入一个数");
	scanf("%d",&x);
	if(x>0)
		printf("正数\n");
	else
		printf("非正数\n");
		*/






//6判断用户输入的数是否是7的倍数。
	/*int y;
	printf("请输入一个数");
	scanf("%d",&y);
	if(y/7 == 0)
		printf("%d是7的倍数\n",y);
	else
		printf("%d不是7的倍数\n",y);

		*/






//7判断用户从键盘输入的数是奇数还是偶数
  /*int a ;
  printf("请输入一个数");
	scanf("%d",&a);
	if(a%2==0)
		printf("%d为偶数",a);
	else
		printf("%d是奇数",a);
 

     */





//8判断用户从键盘上输入的数是否是5和3的倍数

  /* int x;
   printf("请输入一个数");
   scanf("%d",&x);
   if(x/5==0 && x/3==0)
	   printf("%d是三和五的倍数",x);
   else
	   printf("%d不是三和五的倍数",x);

	   */







//9判断用户从键盘上输入的字母是否是大写字母

   /*char c;
   printf("请输入一个字母");
   scanf("%c",&c);
   if(c>64 && c<=90)//大写字母的取值范围
         printf("%c是大写字母",c);
   else
	   printf("%c是小写字母",c);
   
   */









//10判断用户输入的是否是水仙花数。  如： 153==1*1*1+5*5*5+3*3*3
 /*int x;
 int a,b,c;//分别存放百十个位
 scanf("%d",&x);
 a =x /100;
 b = x/10%10;
 c = x%10;
 if(x == a*a*a + b*b*b + c*c*c)
 {
    printf("%d是水仙花数\n",x); 
 }
 else
 {
 printf("%d不是水仙花数\n",x);
 }
 */




//11用户从键盘输入两个数，输出其中的大数
   /*float f ,g;
   printf("请输入两个数");
   scanf("%f%f",&f,&g);
   if(f-g>0)
	   printf("%f为大数",f);
   else
	   printf("%f为小数",g);
  
  */





//12用户从键盘输入身高和体重,计算BMI的值(体质指数(BMI)=体重(kg)/身高 (m)^2)，如果BMI的值在18.5－23.9 之间，输出BMI值正常，否则输出BMI值不正常
   float sg, tz;
   float bmi;
   printf("请输入您的身高:");
   scanf("%f",&sg);
   printf("请输入体重;");
   scanf("%f",&tz);
   bmi =tz/(sg*sg);
   printf("bmi为;%f=%f/(%f*%f)\n",bmi);
   if(bmi>=18.5 && bmi<=23.9)
	   printf("bmi%f正常",bmi);
   else
	   printf("bmi%f异常",bmi);







//13判断用户输入的年份是闰年还是平年（能够被4整除并且不能被100整除或者能够被400整除）

   /*int year;
   printf("请输入一个年份");
   scanf("%d",&year);
   if(year%4==0 && year%100 || year%400!=0)
	   printf("%d为闰年",year);
   else
	   printf("%d为平年",year);


	   */


























	
	system("pause");
	return 0;


}