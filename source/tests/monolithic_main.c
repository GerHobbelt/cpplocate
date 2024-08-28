
#define BUILD_MONOLITHIC 1
#include "monolithic_examples.h"


#define USAGE_NAME   "cpplocate"

#include "monolithic_main_internal_defs.h"

MONOLITHIC_CMD_TABLE_START()
	{ "liblocate_test", {.fa = liblocate_test_main } },
	{ "cpplocate_test", {.fa = cpplocate_test_main } },
MONOLITHIC_CMD_TABLE_END();

#include "monolithic_main_tpl.h"
