#include <kernel/kdebug.hpp>
#include <kernel/object/ObjectManager.hpp>
#include <kernel/device/DeviceManager.hpp>

using namespace Chino;
using namespace Chino::Device;

static void OnIRQ(int32_t irq)
{
	g_DeviceMgr->OnIRQ(0, irq);
}

extern "C"
{
#define IRQ_THUNK(Name, IRQ) void Name##_IRQHandler() { OnIRQ(IRQ); }

	IRQ_THUNK(WWDG, 0);
	IRQ_THUNK(PVD, 1);
	IRQ_THUNK(TAMPER, 2);
	IRQ_THUNK(RTC, 3);
	IRQ_THUNK(FLASH, 4);
	IRQ_THUNK(RCC, 5);
	IRQ_THUNK(EXTI0, 6);
	IRQ_THUNK(EXTI1, 7);
	IRQ_THUNK(EXTI2, 8);
	IRQ_THUNK(EXTI3, 9);
	IRQ_THUNK(EXTI4, 10);
	IRQ_THUNK(DMA1_Channel1, 11);
	IRQ_THUNK(DMA1_Channel2, 12);
	IRQ_THUNK(DMA1_Channel3, 13);
	IRQ_THUNK(DMA1_Channel4, 14);
	IRQ_THUNK(DMA1_Channel5, 15);
	IRQ_THUNK(DMA1_Channel6, 16);
	IRQ_THUNK(DMA1_Channel7, 17);
	IRQ_THUNK(ADC1_2, 18);
	IRQ_THUNK(USB_HP_CAN1_TX, 19);
	IRQ_THUNK(USB_LP_CAN1_RX0, 20);
	IRQ_THUNK(CAN1_RX1, 21);
	IRQ_THUNK(CAN1_SCE, 22);
	IRQ_THUNK(EXTI9_5, 23);
	IRQ_THUNK(TIM1_BRK, 24);
	IRQ_THUNK(TIM1_UP, 25);
	IRQ_THUNK(TIM1_TRG_COM, 26);
	IRQ_THUNK(TIM1_CC, 27);
	IRQ_THUNK(TIM2, 28);
	IRQ_THUNK(TIM3, 29);
	IRQ_THUNK(TIM4, 30);
	IRQ_THUNK(I2C1_EV, 31);
	IRQ_THUNK(I2C1_ER, 32);
	IRQ_THUNK(I2C2_EV, 33);
	IRQ_THUNK(I2C2_ER, 34);
	IRQ_THUNK(SPI1, 35);
	IRQ_THUNK(SPI2, 36);
	IRQ_THUNK(USART1, 37);
	IRQ_THUNK(USART2, 38);
	IRQ_THUNK(USART3, 39);
	IRQ_THUNK(EXTI15_10, 40);
	IRQ_THUNK(RTCAlarm, 41);
	IRQ_THUNK(USBWakeUp, 42);
	IRQ_THUNK(TIM8_BRK, 43);
	IRQ_THUNK(TIM8_UP, 44);
	IRQ_THUNK(TIM8_TRG_COM, 45);
	IRQ_THUNK(TIM8_CC, 46);
	IRQ_THUNK(ADC3, 47);
	IRQ_THUNK(FSMC, 48);
	IRQ_THUNK(SDIO, 49);
	IRQ_THUNK(TIM5, 50);
	IRQ_THUNK(SPI3, 51);
	IRQ_THUNK(UART4, 52);
	IRQ_THUNK(UART5, 53);
	IRQ_THUNK(TIM6, 54);
	IRQ_THUNK(TIM7, 55);
	IRQ_THUNK(DMA2_Channel1, 56);
	IRQ_THUNK(DMA2_Channel2, 57);
	IRQ_THUNK(DMA2_Channel3, 58);
	IRQ_THUNK(DMA2_Channel4_5, 59);

	void HardFault_Handler()
	{
		while (1);
	}

	void MemManage_Handler()
	{
		while (1);
	}

	void BusFault_Handler()
	{
		while (1);
	}

	void UsageFault_Handler()
	{
		while (1);
	}
}
