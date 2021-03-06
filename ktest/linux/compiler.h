/**
 *	Tempesta kernel emulation unit testing framework.
 *
 * Copyright (C) 2015-2019 Tempesta Technologies, Inc.
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License,
 * or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 * FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along with
 * this program; if not, write to the Free Software Foundation, Inc., 59
 * Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 */
#ifndef __COMPILER_H__
#define __COMPILER_H__

typedef unsigned long u64;
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef long ktime_t;

/* asm/types.h */
#define BITS_PER_LONG	64

#define likely(e)	__builtin_expect((bool)(e), 1)
#define unlikely(e)	__builtin_expect((bool)(e), 0)

#define cpu_to_be64(x)	__builtin_bswap64(x)
#define be64_to_cpu(x)	__builtin_bswap64(x)

#define __percpu

#endif /* __COMPILER_H__ */
