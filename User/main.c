#include "stm32f10x.h"                  // Device header
#include "Delay.h"
#include "OLED.h"

/**
  * 坐标轴定义：
  * 左上角为(0, 0)点
  * 横向向右为X轴，取值范围：0~127
  * 纵向向下为Y轴，取值范围：0~63
  * 
  *       0             X轴           127 
  *      .------------------------------->
  *    0 |
  *      |
  *      |
  *      |
  *  Y轴 |
  *      |
  *      |
  *      |
  *   63 |
  *      v
  * 
  */

int main(void)
{
	/*OLED初始化*/
	OLED_Init();
	
	/*在(96, 48)位置显示图像，宽16像素，高16像素，图像数据为Diode数组*/
	OLED_ShowImage(0, 0, 128, 64, img001);
	
	/*调用OLED_Update函数，将OLED显存数组的内容更新到OLED硬件进行显示*/
	OLED_Update();
	
	/*延时3000ms，观察现象*/
	Delay_ms(1750);
	
	OLED_ShowImage(0, 0, 128, 64, img036);
	OLED_Update();
	Delay_ms(50);
	
	OLED_ShowImage(0, 0, 128, 64, img037);
	OLED_Update();
	Delay_ms(50);
	
	OLED_ShowImage(0, 0, 128, 64, img038);
	OLED_Update();
	Delay_ms(50);
	
	OLED_ShowImage(0, 0, 128, 64, img039);
	OLED_Update();
	Delay_ms(50);

	OLED_ShowImage(0, 0, 128, 64, img040);
	OLED_Update();
	Delay_ms(50);

	OLED_ShowImage(0, 0, 128, 64, img041);
	OLED_Update();
	Delay_ms(50);

	OLED_ShowImage(0, 0, 128, 64, img042);
	OLED_Update();
	Delay_ms(50);

	OLED_ShowImage(0, 0, 128, 64, img043);
	OLED_Update();
	Delay_ms(50);

	OLED_ShowImage(0, 0, 128, 64, img044);
	OLED_Update();
	Delay_ms(50);

	OLED_ShowImage(0, 0, 128, 64, img045);
	OLED_Update();
	Delay_ms(50);

	OLED_ShowImage(0, 0, 128, 64, img046);
	OLED_Update();
	Delay_ms(50);

	OLED_ShowImage(0, 0, 128, 64, img047);
	OLED_Update();
	Delay_ms(50);

	OLED_ShowImage(0, 0, 128, 64, img048);
	OLED_Update();
	Delay_ms(50);

	OLED_ShowImage(0, 0, 128, 64, img049);
	OLED_Update();
	Delay_ms(50);

	OLED_ShowImage(0, 0, 128, 64, img050);
	OLED_Update();
	Delay_ms(50);

	OLED_ShowImage(0, 0, 128, 64, img051);
	OLED_Update();
	Delay_ms(50);

	OLED_ShowImage(0, 0, 128, 64, img052);
	OLED_Update();
	Delay_ms(50);

	OLED_ShowImage(0, 0, 128, 64, img053);
	OLED_Update();
	Delay_ms(50);
	
	OLED_Clear();
	
	OLED_ShowImage(0, 0, 128, 64, img054);
	OLED_Update();
	Delay_ms(50);

	OLED_ShowImage(0, 0, 128, 64, img055);
	OLED_Update();
	Delay_ms(50);

	OLED_ShowImage(0, 0, 128, 64, img056);
	OLED_Update();
	Delay_ms(50);

	OLED_ShowImage(0, 0, 128, 64, img057);
	OLED_Update();
	Delay_ms(50);

	OLED_ShowImage(0, 0, 128, 64, img058);
	OLED_Update();
	Delay_ms(50);

	OLED_ShowImage(0, 0, 128, 64, img059);
	OLED_Update();
	Delay_ms(50);

	OLED_ShowImage(0, 0, 128, 64, img060);
	OLED_Update();
	Delay_ms(200);
	

	OLED_ShowImage(0, 0, 128, 64, img064);
	OLED_Update();
	Delay_ms(50);

	OLED_ShowImage(0, 0, 128, 64, img065);
	OLED_Update();
	Delay_ms(50);

	OLED_ShowImage(0, 0, 128, 64, img066);
	OLED_Update();
	Delay_ms(50);

	OLED_ShowImage(0, 0, 128, 64, img067);
	OLED_Update();
	Delay_ms(50);

	OLED_ShowImage(0, 0, 128, 64, img068);
	OLED_Update();
	Delay_ms(50);

	OLED_ShowImage(0, 0, 128, 64, img069);
	OLED_Update();
	Delay_ms(50);

	OLED_ShowImage(0, 0, 128, 64, img070);
	OLED_Update();
	Delay_ms(150);


	OLED_ShowImage(0, 0, 128, 64, img073);
	OLED_Update();
	Delay_ms(50);

	OLED_ShowImage(0, 0, 128, 64, img074);
	OLED_Update();
	Delay_ms(50);
	OLED_Clear();

	OLED_ShowImage(0, 0, 128, 64, img075);
	OLED_Update();
	Delay_ms(50);

	OLED_ShowImage(0, 0, 128, 64, img076);
	OLED_Update();
	Delay_ms(50);
	
	OLED_Clear();

	OLED_ShowImage(0, 0, 128, 64, img077);
	OLED_Update();
	Delay_ms(50);

	OLED_ShowImage(0, 0, 128, 64, img078);
	OLED_Update();
	Delay_ms(50);

	OLED_ShowImage(0, 0, 128, 64, img079);
	OLED_Update();
	Delay_ms(50);

	OLED_ShowImage(0, 0, 128, 64, img080);
	OLED_Update();
	Delay_ms(50);
	
	OLED_Clear();

	OLED_ShowImage(0, 0, 128, 64, img081);
	OLED_Update();
	Delay_ms(50);

	OLED_ShowImage(0, 0, 128, 64, img082);
	OLED_Update();
	Delay_ms(400);


	OLED_ShowImage(0, 0, 128, 64, img090);
	OLED_Update();
	Delay_ms(100);

	OLED_Clear();

	OLED_ShowImage(0, 0, 128, 64, img092);
	OLED_Update();
	Delay_ms(100);

	

	OLED_ShowImage(0, 0, 128, 64, img094);
	OLED_Update();
	Delay_ms(100);

	

	OLED_ShowImage(0, 0, 128, 64, img096);
	OLED_Update();
	Delay_ms(100);



	OLED_ShowImage(0, 0, 128, 64, img098);
	OLED_Update();
	Delay_ms(100);



	OLED_ShowImage(0, 0, 128, 64, img100);
	OLED_Update();
	Delay_ms(100);



	OLED_ShowImage(0, 0, 128, 64, img102);
	OLED_Update();
	Delay_ms(100);



	OLED_ShowImage(0, 0, 128, 64, img104);
	OLED_Update();
	Delay_ms(100);



	OLED_ShowImage(0, 0, 128, 64, img106);
	OLED_Update();
	Delay_ms(100);


	OLED_ShowImage(0, 0, 128, 64, img108);
	OLED_Update();
	Delay_ms(500);
	
	/*清空OLED显存数组*/
	OLED_Clear();
	
	while (1)
	{
		
	}
}
