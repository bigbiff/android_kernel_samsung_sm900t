/*
*
* arch/arm/mach-s5pv310/include/mach/tdmb_pdata.h
*
* tdmb driver
*
* Copyright (C) (2011, Samsung Electronics)
*
* This program is free software; you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation version 2.
*
* This program is distributed "as is" WITHOUT ANY WARRANTY of any
* kind, whether express or implied; without even the implied warranty
* of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*
*/

#ifndef _TDMB_PDATA_H_
#define _TDMB_PDATA_H_


#if defined(CONFIG_TDMB) || defined(CONFIG_TDMB_MODULE)
struct tdmb_platform_data {
	void (*gpio_on) (void);
	void (*gpio_off)(void);
	unsigned int	irq;
	unsigned int	system_rev;
#if defined(CONFIG_TDMB_EBI)
	unsigned long cs_base;
	int mem_size;
#endif
#if defined(CONFIG_TDMB_ANT_DET)
	unsigned int	gpio_ant_det;
	unsigned int	irq_ant_det;
#endif
};
struct tdmb_dt_platform_data {
	int tdmb_irq;
	int tdmb_en;
	int tdmb_rst;
	int tdmb_spi_mosi;
	int tdmb_spi_miso;
	int tdmb_spi_cs;
	int tdmb_spi_clk;
#ifdef CONFIG_TDMB_ANT_DET
	int tdmb_ant_irq;
#endif
};
#endif
#endif
