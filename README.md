# STM32F4xx_LED_Example

STM32F4的LED驱动。适用于STM32F4全部芯片。

## 开发环境

* 固件库：STM32F4xx_DSP_StdPeriph_Lib_V1.8.0
* 编译器：ARMCC V5.06
* IDE：Keil uVision5
* 操作系统：Windows 10 专业版

## API

* void LED_SetStatus(LED_Pin pin, LED_Status status)
* LED_Status LED_GetStatus(LED_Pin pin)

## 注意

修改接口需要注意，LED的驱动方式和增减LED的个数。对应修改LED_Status枚举和源文件的变量定义。
