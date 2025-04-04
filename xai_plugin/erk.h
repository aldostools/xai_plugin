
/*
	Imported by Evilnat for xai_plugin from flatz's EID root key dumper
*/

#ifndef _ERK_H_
#define _ERK_H_

#define EID_ROOT_KEY_FILE_NAME "eid_root_key"
#define METLDR_FILE_NAME	   "metldr"

#define ERK						0
#define METLDR					1

/* Firmware specific defines */
#define HTAB_PROTECTION_OFFSET	0x80000000002DD70CULL
#define HTAB_PROTECTION_PATCH	0x60000000E97F00A8ULL

#define MAP1_OFFSET				0x80000000002DCF54ULL
#define MAP1_PATCH				0x6000000048000028ULL

#define MAP2_OFFSET				0x80000000002DD284ULL
#define MAP2_PATCH				0x392000014BFFFBFDULL

#define SPE_REGISTER_OFFSET		0x80000000002F9EB8ULL
#define SPE_REGISTER_PATCH		0x3920FFFFE9430000ULL

#define PERMISSION_OFFSET		0x8000000000003D90ULL
#define PERMISSION_PATCH		0x386000014E800020ULL

#define OPD_OFFSET				0x8000000000001630ULL

void dumperk(int mode);
int dump_eid_root_key(uint8_t output[0x30], int mode);

#endif
