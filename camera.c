#include <stdio.h>
#include "global.h"
#include "mce.h"

void main(void)
{
  int mce_green;

  mce_green = get_mce();

  printf("Настройки->Сцена->Пейзаж, избирате настройка Пейзаж.\n\
Ще засилим цвят \"%s\"\n", REG_TABLE[mce_green]);
}

