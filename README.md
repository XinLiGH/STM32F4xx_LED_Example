# STM32F4xx_LED_Example

STM32F4的LED驱动。

## 开发环境

* 适用芯片：STM32F4全部芯片
* 固件库：STM32F4xx_DSP_StdPeriph_Lib_V1.8.0
* IDE：MDK517

## API

* void LED_SetState(LEDPin pin, LEDState state)
* LEDState LED_GetState(LEDPin pin)

## 注意

修改接口需要注意，LED的驱动方式和增减LED的个数。对应修改LEDState枚举和源文件的变量定义。
