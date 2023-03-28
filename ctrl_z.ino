#include <Keyboard.h>

const int buttonPin = 0;          // 按键连接引脚
const int ledPin =  13;
int n = 0;                  // 按键计数器

void setup() {
  
  // 初始化按键引脚，如果没有下拉电阻，需要使用INPUT_PULLDOWN，但是我有
  pinMode(buttonPin, INPUT);
  // 初始化模拟键盘功能
  Keyboard.begin();
  attachInterrupt(buttonPin, ctrl_z, RISING);
  
}

void ctrl_z(){

    Keyboard.press(KEY_LEFT_CTRL);
    digitalWrite(ledPin, HIGH);
    Keyboard.press('z');
    delay(80);
    Keyboard.releaseAll();
    digitalWrite(ledPin, LOW);
    n++;

  }

void loop() {
  // put your main code here, to run repeatedly:
  delay(50);
}
