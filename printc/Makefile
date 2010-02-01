# $Id: Makefile,v 1.1 2007/10/01 20:45:15 casse Exp $
include ../Makefile.head

SOURCES = \
        printc_bin.ml

OCAML_INC += ../frontc
OCAML_LIB += unix ../frontc/frontc

$(eval $(call ocaml_prog,printc,$(SOURCES)))

include ../Makefile.tail
