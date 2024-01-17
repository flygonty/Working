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
    u32 v0 = 8; // data_size
    struct nftnl_udata_buf *v1 = nftnl_udata_buf_alloc(v0); // buf
    if (v1 == NULL) return 0;
    struct nftnl_udata_buf *v3 = v1; // buf
    struct nftnl_udata *v4 = nftnl_udata_end(v3); // attr
    if (v4 == NULL) return 0;
    struct nftnl_udata *v6 = v4; // attr
    u8 v7 = nftnl_udata_type(v6); // $target
}
