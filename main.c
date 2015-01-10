#include <stdio.h>
#include "dhcp_fp_radix.h"

struct str_input {
    uint8_t *p;
    uint8_t *pe;
};

static uint8_t __input(void *cc) {
    struct str_input *inp = cc;
    if( inp->p < inp->pe ) {
        fprintf(stderr, "input: %c\n", *inp->p);
        return *(inp->p++);
    }
    return 0;
}

static int __has_more_input(void *cc){
    struct str_input *inp = cc;
    return (inp->p < inp->pe);
}


static int __match( void *cc
                  , struct dhcp_fp *r
                  , int consumed
                  , int exact ) {

    fprintf(stderr, "__match\n");

    return 1;
}


int main(void) {

    uint8_t s0[] = {1,28,2,3,15,6,119,12};
    struct str_input i0 = { .p = s0, .pe = sizeof(s0) + 1 };

    dhcp_fp_radix_trie_clb_t cb = { __has_more_input
                                  , __input
                                  , __match
                                  };

    int r = dhcp_fp_radix_trie(&i0, &cb);

    return 0;
}

