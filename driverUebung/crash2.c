#include <linux/init.h>
#include <linux/kernel.h>
#include <linux/module.h>


MODULE_LICENSE("Dual BSD/GPL");


void crash(void) {
  panic("Panic!!!");
  return 0;
}


module_init(crash);
