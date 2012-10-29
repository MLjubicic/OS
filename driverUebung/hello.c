#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

MODULE_LICENSE("Dual BSP/GPL");

static int helloinit(void) {
  printk("Hello World!\n");
  return 0;
}

static void helloexit(void) {
  printk("Adios world");
}

module_init(helloinit);
module_exit(helloexit);
