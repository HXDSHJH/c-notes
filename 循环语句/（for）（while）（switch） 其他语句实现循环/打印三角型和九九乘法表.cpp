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


