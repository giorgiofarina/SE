#ifndef CONFIG_H
#define CONFIG_H

<<<<<<< Updated upstream:Temp/Gabriele/Zybo/UART/UART-1-Interrupt/Software/Testbed/Examples/no_driver/config.h
/**
* UIO device macros
**/
#define UART1_ADDR 0x43c00000
#define UART2_ADDR 0x43c10000
=======

#ifdef MYGPIO_UIO
#define UIO_FILE_LED "/dev/uio0"
#define UIO_FILE_BTN "/dev/uio1"
#define UIO_FILE_SWT "/dev/uio2"
#endif

#ifdef MYGPIO_NO_DRIVER
//Button Peripheral base address
#define ADDR_BTN 0x43c10000
//Switch Peripheral base address
#define ADDR_SWT 0x43c20000
//Led Peripheral base address
#define ADDR_LED 0x43c00000
#endif

#ifdef MYGPIO_BARE_METAL
//#include "xparameters.h"
//Switch interrupt line
#define SWT_IRQN XPAR_FABRIC_MYGPIO_INT_SEL_2_INTERRUPT_INTR

//Button interrupt line
#define BTN_IRQN XPAR_FABRIC_MYGPIO_INT_SEL_1_INTERRUPT_INTR

//Button Peripheral base address
#define BTN_BA XPAR_MYGPIO_INT_SEL_1_S00_AXI_BASEADDR

//Switch Peripheral base address
#define SWT_BA XPAR_MYGPIO_INT_SEL_2_S00_AXI_BASEADDR

//Led Peripheral base address
#define LED_BA XPAR_MYGPIO_INT_SEL_0_S00_AXI_BASEADDR

//GIC Peripheral ID
#define GIC_ID XPAR_PS7_SCUGIC_0_DEVICE_ID
#endif

>>>>>>> Stashed changes:Temp/Gabriele/Zybo/GPIO/Software/Testbed/uio/config.h

/**
 *  colors macros 
 **/
#define COL(x) "\033[" #x ";1m"
#define COL_RED COL(31)
#define COL_GREEN COL(32)
#define COL_YELLOW COL(33)
#define COL_BLUE COL(34)
#define COL_WHITE COL(37)
#define COL_GRAY "\033[0m"

#endif


