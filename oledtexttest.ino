
#include "U8glib.h"

U8GLIB_SSD1306_128X64 u8g(U8G_I2C_OPT_NONE);

void setup(){
}
void loop(){
  u8g.firstPage();
  do{
    u8g.setFont(u8g_font_unifont);
    u8g.setPrintPos(0,10);      //초기 위치 설정
    u8g.print("Hello, World");  //초기 위치 설정에 따른 text 출력
    u8g.drawStr(0,30, "Hello, Arduino");  //x,y 좌표값을 이용한 text 출력
    u8g.drawStr(0,50, "Hello, Naver");
  }while(u8g.nextPage());
}
