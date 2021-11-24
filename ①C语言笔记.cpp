#include"stdafx.h"
#include<stdio.h>
#include"stdlib.h"
#define   PI  3.1415926
int main()
{
	//1、任意三个整数之和。
	/*int a,b,c,d;
	printf("请输入任意一个整数");
	scanf("%d",&a);
        printf("请输入任意一个整数");
        scanf("%d",&b);
        printf("请输入任意一个整数");
        scanf("%d",&c);
	d = a + b + c ;
	printf("%d = %d + %d + %d",d,a,b,c);
	system("pause");
	*/


	//2、已知圆的半径r为5求周长与面积。
	/*int r = 5;
	float 周长,面积;
	周长=2*PI*r;
	面积=PI*(r*r);
	printf("周长为%f,面积为%f",周长,面积);
	system("pause");
0	*/


    //3、把从键盘输入的小写字母变为大写字母。
	/*char wordx,wordd;
	printf("请输入一个小写字母");
	scanf("%c",&wordx);
	wordd=wordx-32;
	printf("%c的大写字母为:%c\n",wordx,wordd);
	system("pause");
	*/

	//4、输入体重和身高计算bmi的值。
	/*float tz,sg,bmi;
	printf("请输入您的体重");
	scanf("%f",&tz);
	printf("请输入您的身高");
	scanf("%f",&sg);
	bmi=tz/(sg*sg);//表示出bmi
	printf("体重为：%f,身高为：%f,bmi值为：%f\n",tz,sg,bmi);
	if(bmi<18)
        {
	 printf("偏瘦\n");
        {
 	else
	printf("偏胖\n");
	*/

	//整数转小时转分钟。
	/*int x=410,xs,fz;
	xs = x/60; //取整。
	fz = x%60; //取余。
	printf("%d=%d小时=%d分钟",x,xs,fz);
	*/

	//两个数交换。
	/*int x=10,y=5;
	int z=0; //用于转换的数。
	printf("转换前的值为%d %d\n",x,y);
	z=y;
	y=x;
	x=z;
	printf("转换后的值为%d %d\n",x,y);
	*/


	//判断用户输入的闰年年还是平年。
	/*int year;
	printf("请输入一个年份:");
	scanf("%d",&year);
	if(year%4==0 && year%100!=0 || year%400==0)   //==为等于；&&表示且；！=表示不等于；||表示或。
		printf("%d是闰年",year);
	else //否则。
		printf("%d是平年",year);
		*/


	//判断用户输入的数是奇数还是偶数。
	/*int x;
	printf("请输入一个数");
	scanf("%d",&x);
	if(x%2==0)
		printf("%d是偶数",x);
	else
		printf("%d是奇数");
		*/


	//分别输出一个四位数的千位百位十位和个位。
	/*int x=1234,a,b,c,d;
	a = x/1000;
	b = x%1000/100;
	c = x%1000%100/10;
	d = x%1000%100%10;
	printf("千位%d 百位%d 十位%d 个位%d",a,b,c,d);
	*/


	//输出一个输的绝对值。
      /*float x;
	printf("请输入一个数");
	scanf("%f",&x);
	if(x<0)
		x=-x;
		printf("%f",x);
	*/


	
     //华氏度转化为摄氏度。

     float x;
     printf("请输入一个华氏温度:");
     scanf("%f",&x);


		
		





	


	
	
	system("pause");
	return 0;





}