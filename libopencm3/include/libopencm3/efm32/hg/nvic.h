/* This file is part of the libopencm3 project.
 *
 * It was generated by the irq2nvic_h script.
 */

#ifndef LIBOPENCM3_EFM32HG_NVIC_H
#define LIBOPENCM3_EFM32HG_NVIC_H

#include <libopencm3/cm3/nvic.h>

/** @defgroup CM3_nvic_defines_EFM32HG User interrupts for EFM32 Happy Gecko series
    @ingroup CM3_nvic_defines

    @{*/

#define NVIC_DMA_IRQ 0
#define NVIC_GPIO_EVEN_IRQ 1
#define NVIC_TIMER0_IRQ 2
#define NVIC_ACMP0_IRQ 3
#define NVIC_ADC0_IRQ 4
#define NVIC_I2C0_IRQ 5
#define NVIC_GPIO_ODD_IRQ 6
#define NVIC_TIMER1_IRQ 7
#define NVIC_USART1_RX_IRQ 8
#define NVIC_USART1_TX_IRQ 9
#define NVIC_LEUART0_IRQ 10
#define NVIC_PCNT0_IRQ 11
#define NVIC_RTC_IRQ 12
#define NVIC_CMU_IRQ 13
#define NVIC_VCMP_IRQ 14
#define NVIC_MSC_IRQ 15
#define NVIC_AES_IRQ 16
#define NVIC_USART0_RX_IRQ 17
#define NVIC_USART0_TX_IRQ 18
#define NVIC_USB_IRQ 19
#define NVIC_TIMER2_IRQ 20

#define NVIC_IRQ_COUNT 21

/**@}*/

/** @defgroup CM3_nvic_isrprototypes_EFM32HG User interrupt service routines (ISR) prototypes for EFM32 Happy Gecko series
    @ingroup CM3_nvic_isrprototypes

    @{*/

BEGIN_DECLS

void dma_isr(void);
void gpio_even_isr(void);
void timer0_isr(void);
void acmp0_isr(void);
void adc0_isr(void);
void i2c0_isr(void);
void gpio_odd_isr(void);
void timer1_isr(void);
void usart1_rx_isr(void);
void usart1_tx_isr(void);
void leuart0_isr(void);
void pcnt0_isr(void);
void rtc_isr(void);
void cmu_isr(void);
void vcmp_isr(void);
void msc_isr(void);
void aes_isr(void);
void usart0_rx_isr(void);
void usart0_tx_isr(void);
void usb_isr(void);
void timer2_isr(void);

END_DECLS

/**@}*/

#endif /* LIBOPENCM3_EFM32HG_NVIC_H */
