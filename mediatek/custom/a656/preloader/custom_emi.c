/*****************************************************************************
 *
 * Filename:
 * ---------
 *   custom_emi.c
 *
 * Project:
 * --------
 *   Android
 *
 * Description:
 * ------------
 *   This Module defines the EMI (external memory interface) related setting.
 *
 * Author:
 * -------
 *  EMI auto generator V0.01
 *
 *   Memory Device database last modified on 2016/6/6
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 * $Revision$
 * $Modtime$
 * $Log$
 *
 *------------------------------------------------------------------------------
 * WARNING!!!  WARNING!!!   WARNING!!!  WARNING!!!  WARNING!!!  WARNING!!! 
 * This file is generated by EMI Auto-gen Tool.
 * Please do not modify the content directly!
 * It could be overwritten!
 *============================================================================
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

#include "mt_emi.h"

#define NUM_EMI_RECORD (3)

int num_of_emi_records = NUM_EMI_RECORD ;

EMI_SETTINGS emi_settings[] =
{
     
	//KMKJS000VM_B309
	{
		0x0,		/* sub_version */
		0x0202,		/* TYPE */
		9,		/* EMMC ID/FW ID checking length */
		0,		/* FW length */
		{0x15,0x01,0x00,0x4B,0x4A,0x53,0x30,0x30,0x4D,0x0,0x0,0x0,0x0,0x0,0x0,0x0},		/* NAND_EMMC_ID */
		{0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0},		/* FW_ID */
		0x0002A3AE,		/* EMI_CONA_VAL */
		0xCC00CC00,		/* DRAMC_DRVCTL0_VAL */
		0xCC00CC00,		/* DRAMC_DRVCTL1_VAL */
		0x00000007,		/* DRAMC_DLE_VAL */
		0x666844b4,		/* DRAMC_ACTIM_VAL */
		0x11000000,		/* DRAMC_GDDR3CTL1_VAL */
		0xf07486e1,		/* DRAMC_CONF1_VAL */
		0xc0063201,		/* DRAMC_DDR2CTL_VAL */
		0x9f098ca0,		/* DRAMC_TEST2_3_VAL */
		0x03406341,		/* DRAMC_CONF2_VAL */
		0x11672342,		/* DRAMC_PD_CTRL_VAL */
		0x00008888,		/* DRAMC_PADCTL3_VAL */
		0xEEEEEEEE,		/* DRAMC_DQODLY_VAL */
		0x00000000,		/* DRAMC_ADDR_OUTPUT_DLY */
		0x00000000,		/* DRAMC_CLK_OUTPUT_DLY */
		0x01000e10,		/* DRAMC_ACTIM1_VAL*/
		0x07000000,		/* DRAMC_MISCTL0_VAL*/
		{0x20000000,0x20000000,0,0},		/* DRAM RANK SIZE */
		{0,0,0,0,0,0,0,0,0,0},		/* reserved 10 */
		0x00330001,		/* DDR2_MODE_REG1 */
		0x00060002,		/* DDR2_MODE_REG2 */
		0x00020003,		/* DDR2_MODE_REG3 */
		0x000A00FF,		/* DDR2_MODE_REG10 */
		0x0000003F		/* DDR2_MODE_REG63 */
	} ,
	//SD7DP28C_4
	{
		0x0,		/* sub_version */
		0x0202,		/* TYPE */
		9,		/* EMMC ID/FW ID checking length */
		0,		/* FW length */
		{0x45,0x01,0x00,0x53,0x45,0x4D,0x30,0x34,0x47,0x0,0x0,0x0,0x0,0x0,0x0,0x0},		/* NAND_EMMC_ID */
		{0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0},		/* FW_ID */
		0x0002A3AE,		/* EMI_CONA_VAL */
		0xCC00CC00,		/* DRAMC_DRVCTL0_VAL */
		0xCC00CC00,		/* DRAMC_DRVCTL1_VAL */
		0x00000008,		/* DRAMC_DLE_VAL */
		0x556844A4,		/* DRAMC_ACTIM_VAL */
		0x11000000,		/* DRAMC_GDDR3CTL1_VAL */
		0xF07486E1,		/* DRAMC_CONF1_VAL */
		0xC0063201,		/* DRAMC_DDR2CTL_VAL */
		0x9F098CA0,		/* DRAMC_TEST2_3_VAL */
		0x0340633F,		/* DRAMC_CONF2_VAL */
		0x11642342,		/* DRAMC_PD_CTRL_VAL */
		0x00008888,		/* DRAMC_PADCTL3_VAL */
		0xEEEEEEEE,		/* DRAMC_DQODLY_VAL */
		0x00000000,		/* DRAMC_ADDR_OUTPUT_DLY */
		0x00000000,		/* DRAMC_CLK_OUTPUT_DLY */
		0x01000610,		/* DRAMC_ACTIM1_VAL*/
		0x07000000,		/* DRAMC_MISCTL0_VAL*/
		{0x20000000,0x20000000,0,0},		/* DRAM RANK SIZE */
		{0,0,0,0,0,0,0,0,0,0},		/* reserved 10 */
		0x00C30001,		/* DDR2_MODE_REG1 */
		0x00060002,		/* DDR2_MODE_REG2 */
		0x00020003,		/* DDR2_MODE_REG3 */
		0x00FF000A,		/* DDR2_MODE_REG10 */
		0x0000003F		/* DDR2_MODE_REG63 */
	} ,
	//H9TP32A8JDACPR_KGM
	{
		0x0,		/* sub_version */
		0x0202,		/* TYPE */
		9,		/* EMMC ID/FW ID checking length */
		0,		/* FW length */
		{0x90,0x01,0x4A,0x48,0x34,0x47,0x31,0x64,0x04,0x0,0x0,0x0,0x0,0x0,0x0,0x0},		/* NAND_EMMC_ID */
		{0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0},		/* FW_ID */
		0x0002A3AE,		/* EMI_CONA_VAL */
		0xCC00CC00,		/* DRAMC_DRVCTL0_VAL */
		0xCC00CC00,		/* DRAMC_DRVCTL1_VAL */
		0x00000008,		/* DRAMC_DLE_VAL */
		0x666844B4,		/* DRAMC_ACTIM_VAL */
		0x11000000,		/* DRAMC_GDDR3CTL1_VAL */
		0xF07486E1,		/* DRAMC_CONF1_VAL */
		0xC0063201,		/* DRAMC_DDR2CTL_VAL */
		0x9F098CA0,		/* DRAMC_TEST2_3_VAL */
		0x0340633F,		/* DRAMC_CONF2_VAL */
		0x11642342,		/* DRAMC_PD_CTRL_VAL */
		0x00008888,		/* DRAMC_PADCTL3_VAL */
		0xEEEEEEEE,		/* DRAMC_DQODLY_VAL */
		0x00000000,		/* DRAMC_ADDR_OUTPUT_DLY */
		0x00000000,		/* DRAMC_CLK_OUTPUT_DLY */
		0x01000e10,		/* DRAMC_ACTIM1_VAL*/
		0x07000000,		/* DRAMC_MISCTL0_VAL*/
		{0x20000000,0x20000000,0,0},		/* DRAM RANK SIZE */
		{0,0,0,0,0,0,0,0,0,0},		/* reserved 10 */
		0x00C30001,		/* DDR2_MODE_REG1 */
		0x00060002,		/* DDR2_MODE_REG2 */
		0x00020003,		/* DDR2_MODE_REG3 */
		0x00FF000A,		/* DDR2_MODE_REG10 */
		0x0000003F		/* DDR2_MODE_REG63 */
	}
};
