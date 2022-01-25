#include <stdint.h>

typedef uint32_t ip_addr_t;

extern int ip_addr_pton(const char *p, ip_addr_t *n);
extern int int_as_buffer(int *i);
extern int multi_buffer(uint64_t in, uint64_t *out1, uint64_t *out2,
                        uint64_t *out3);