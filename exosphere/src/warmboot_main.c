#include "utils.h"
#include "mmu.h"
#include "memory_map.h"

/* start.s */
void __jump_to_lower_el(uint64_t arg, uintptr_t ep, unsigned int el);

void warmboot_main(void) {
    /* TODO */
}
