#include <linux/kernel.h>

asmlinkage long sys_saying (void) {
    printk ("Veritas filia temporis.\n");

    return 0;
}
