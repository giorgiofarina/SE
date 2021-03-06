#ifndef UTILS_H
#define UTILS_H

#include "stdlib.h"
#include <stdint.h>

#define GIC 0
typedef struct{
    uint32_t interrupt_line;
    void* interrupt_handler;
}interrupt_handler;

//Scrive lo stesso bit nelle posizioni desiderate
uint32_t write_bit_in_pos(uint32_t* address, uint32_t pos, uint32_t bit);
uint8_t  read_bit_in_single_pos(uint32_t* address, uint8_t pos);

#if GIC
#include "xscugic.h"
uint32_t gic_enable(uint32_t gic_id,XScuGic* gic_inst);
uint32_t gic_disable(uint32_t gic_id);

uint32_t gic_register_interrupt(XScuGic* gic_inst, uint32_t interrupt_line, void* interrupt_handler);
uint32_t gic_register_interrupt_handler(XScuGic* gic_inst, interrupt_handler* interrupt_handler);
#endif

#endif
