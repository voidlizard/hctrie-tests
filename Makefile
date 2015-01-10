.PHONY: clean
.DEFAULT: all

all: dhcp_fp_radix.c 
	gcc -O2 main.c dhcp_fp_radix.c -o hctrie_test

# dhcp_fp_radix.c: $(DATA)/dhcp_fingerprints.conf
#     $(MGEN) fingerbank < $(DATA)/dhcp_fingerprints.conf |\
#         $(HCTRIE) --prefix dhcp_fp \
#                   --headers "\"dhcp_fp.h\""\
#                   --struct "struct dhcp_fp"

clean:
	$(RM) *.o hctrie_test


