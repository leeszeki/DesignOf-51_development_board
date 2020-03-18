/*********************************************************************************************************
*名称：delay.c
*功能：延时所用到的函数
创建时间：2019/7/5
修改时间：2019/XX/XX
作者：XXX
**********************************************************************************************************/

#include "delay.h"

/*******************************************************************************
* 函 数 名         : Delay_ms
* 函数功能		   : 延时函数，1Ms的延时
*******************************************************************************/
void Delay_ms(U16 z)
{
	U16 x,y;

	for(x=z;x>0;x--)

		for(y=110;y>0;y--);
}

/*******************************************************************************
* 函 数 名         : nop
* 函数功能		   : 延时函数，当晶振为12HZ，延时2us
*******************************************************************************/

void nop()
{
	_nop_();
	_nop_();
}