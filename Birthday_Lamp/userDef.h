
#define PIN_KEY     6      //碰撞开关引脚. 
#define PIN_BUZZER  8      //蜂鸣器引脚.
#define PIN_LED     4      //彩灯引脚.
#define LED_NUM     2      //彩灯的数量 

//=================================自己动手修改参数!========================================//
//示例: 将 "#define BRIGHT_MAX 128" 修改成 "#define BRIGHT_MAX 180".                        //
//         意味着LED彩灯的显示亮度会变亮.                                                   //
//                                                                                          //
//提示: 参数修改完后，记得将代码重新上传到核心模块！                                    //
//==========================================================================================//
#define BRIGHT_MAX  128     //LED彩灯显示的最大亮度。最大亮度是255，最小亮度是0

/***********定义彩灯颜色*/
const uint32_t colorArray[10] = {
  COLOR_NONE,       //0x000000, 彩灯关闭，colorLED OFF
  COLOR_RED,        //0xff0000, 红色，Red
  COLOR_ORANGE,     //0xea8b17, 橙色，Orange
  COLOR_YELLOW,     //0xffff00, 黄色，Yellow
  COLOR_GREEN,      //0x00ff00, 绿色，Green
  COLOR_CYAN,       //0x00ffff, 青色，Cyan
  COLOR_BLUE,       //0x0000ff, 蓝色，Blue
  COLOR_PURPLE,     //0xff00ff, 紫色，Purple
  COLOR_WARM,       //0x9b6400, 暖色，Warm
  COLOR_COLD,       //0x648264, 冷色，Cold
};
