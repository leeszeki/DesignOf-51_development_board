/*********************************************************************************************************
*名称：main.c
*功能：动态数码管显示
	   在main函数中的display()中填入数字即可显示
创建时间：2019/7/8
修改时间：2019/7/11
作者：黄彦钊
*********************************************************************************************************/	  
#include   "includes.h"	
void main(void)
{  
	init();
	while(1)
	{
	  	LED4_Display ();
	}
}              