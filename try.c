#include "all.h"
#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <math.h>
typedef uint8_t   u8;   
typedef uint16_t  u16;  
typedef uint32_t  u32;  
typedef uint64_t  u64;
typedef unsigned int usize;
typedef int8_t  i8;
typedef int16_t i16;
typedef int32_t i32;
typedef int64_t i64;
typedef int isize;
typedef float f32;
typedef double f64;
int main() {
    i8 v0_tmp[] = {99, 111, 110, 110, 108, 105, 109, 105, 116, 0, 0, }; // name
    i8 *v0 = malloc(sizeof v0_tmp);
    memcpy(v0, v0_tmp, sizeof v0_tmp);
    i8 *v1 = v0; // name
    nftnl_expr *v2 = nftnl_expr_alloc(v1); // expr
    if (v2 == NULL) return 0;
    nftnl_expr *v4 = v2; // expr
    u16 v5 = 64; // type_
    u64 v6 = nftnl_expr_get_u64(v4, v5); // $target
}
