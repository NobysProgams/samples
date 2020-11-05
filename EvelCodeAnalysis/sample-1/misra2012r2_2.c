#include <stdio.h>

typedef struct ST_S2RECT_SAMP_ {
  short s_lft;
  short s_top;
  short s_rgt;
  short s_btm;
} ST_S2RECT_SAMP;

int temp_func_c( void ) {
  int result = 0;
  int result2;

  ST_S2RECT_SAMP st_samp = {0};
  ST_S2RECT_SAMP st_samp2 = {1};
  st_samp = st_samp2;
  st_samp.s_lft = 1U;
  st_samp.s_top = 2U;
  st_samp2.s_lft = st_samp.s_lft;
  st_samp2.s_top = st_samp.s_top;
  
  return result;
}

void main()
{
    temp_func_c();
    return;
}
