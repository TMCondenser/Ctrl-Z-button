#include <Mouse.h>

const int buttonPin = 0;          // 按键连接引脚
const int ledPin =  13;
int i = 0;                  // 按键计数器

void setup() {
  
  // 初始化按键引脚，如果没有下拉电阻，需要使用INPUT_PULLDOWN，但是我有
  pinMode(buttonPin, INPUT);
  // 初始化模拟键盘功能
  Keyboard.begin();
  attachInterrupt(buttonPin, left_click, RISING);
  
}

void left_click(){

    digitalWrite(ledPin, HIGH);
    for (i = 0; i <= 10; i++) {
      Mouse.click(MOUSE_LEFT);
    }
    digitalWrite(ledPin, LOW);

  }

void loop() {
  // put your main code here, to run repeatedly:
  delay(50);
}
