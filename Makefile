#----------------------------------------------------------------------------
#       Make Workspace
#
# 
#
# This file was generated by MPC.  Any changes made directly to
# this file will be lost the next time it is generated.
#
# MPC Command:
# mwc.pl -type make
#
#----------------------------------------------------------------------------


all: assignment3 assignment4

depend: assignment3-depend assignment4-depend

clean generated realclean check-syntax $(CUSTOM_TARGETS):
	@$(MAKE) -f Makefile.assignment3 $(@)
	@$(MAKE) -f Makefile.assignment4 $(@)

.PHONY: assignment3
assignment3:
	@$(MAKE) -f Makefile.assignment3 all

.PHONY: assignment3-depend
assignment3-depend:
	@$(MAKE) -f Makefile.assignment3 depend

.PHONY: assignment4
assignment4:
	@$(MAKE) -f Makefile.assignment4 all

.PHONY: assignment4-depend
assignment4-depend:
	@$(MAKE) -f Makefile.assignment4 depend

project_name_list:
	@echo assignment3
	@echo assignment4
