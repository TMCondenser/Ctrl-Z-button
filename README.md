# Ctrl-Z-button
当arduino的数字引脚被上拉时，向串口发送一次Ctrl Z
踏板或者按钮接在数字引脚和电源之间。可以5v也可以3v3。然后在GND和数字引脚之间接上下拉电阻，阻值大概1kΩ。最好再并联0.224μf的电容。大功告成。
当程序判断引脚上拉时，执行动作。
