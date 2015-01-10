#ifndef DHCP_FP_RADIX_TREE_H
#define DHCP_FP_RADIX_TREE_H
#include "dhcp_fp.h"
typedef struct dhcp_fp_radix_trie_clb{
    int (*has_more_input) (void *);
    uint8_t (*get_input) (void *);
    int (*consume_result) (void *
                          ,struct dhcp_fp *
                          ,int
                          ,int);
} dhcp_fp_radix_trie_clb_t;
int dhcp_fp_radix_trie(void *cc
                      ,dhcp_fp_radix_trie_clb_t *callback);
#endif