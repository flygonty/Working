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
    nftnl_rule *v0 = NULL; // r
    nftnl_parse_type v1 = { 5,  }; // type_
    _IO_FILE *v2 = NULL; // fp
    nftnl_parse_err *v3 = NULL; // err
    i32 v4 = nftnl_rule_parse_file(v0, v1, v2, v3); // $target
}
