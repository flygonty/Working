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
i32 GENERATED_hopper_callback_9(struct nftnl_set_elem *e, void *data) {
    return *(i32  *)calloc(1, sizeof(i32 ));
}
int main() {
    struct nftnl_set *v0 = nftnl_set_alloc(); // s
    if (v0 == NULL) return 0;
    struct nftnl_set *v2 = v0; // s
    i32  (*v3)(struct nftnl_set_elem *,void *) = &GENERATED_hopper_callback_9; // cb
    i8 *v4 = NULL; // data
    struct nftnl_set_elem *v5 = nftnl_set_elem_alloc(); // elem
    if (v5 == NULL) return 0;
    struct nftnl_set_elem *v7 = v5; // elem
    i32 v9 = nftnl_set_elem_foreach(v2, v3, v4); // $target
}
