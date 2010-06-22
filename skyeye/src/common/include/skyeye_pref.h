#ifndef __SKYEYE_DEFS_H__
#define __SKYEYE_DEFS_H__
#include "skyeye_types.h"

#ifdef __cplusplus
 extern "C" {
#endif 

struct _sky_pref_s{
	//generic_address_t elf_load_base;
	//uinteger_t elf_load_mask;
	/* */
	char* module_search_dir;
	generic_address_t start_address;
	//char *elf_file;
	bool_t remote_debugmode;

	char* exec_file;
	generic_address_t exec_load_base;
	uint32_t exec_load_mask;

	char* conf_filename;
	bool_t interactive_mode;
	endian_t endian;
	/*
	 * if true, we will run the simulator loop before cli.
	 */
	bool_t autoboot;
};
typedef struct _sky_pref_s sky_pref_t;

sky_pref_t * get_skyeye_pref();
char* get_conf_filename();

#ifdef __cplusplus
}
#endif 

#endif
