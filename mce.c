#include <stdio.h>
#include "global.h"
#include "mce.h"

int get_mce(void)
{
  int mce_reg = REG_GREEN;

  if(HW_VER==0x8974)
    mce_reg = REG_DEFAULT;

  return mce_reg;
}

