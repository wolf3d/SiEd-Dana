/*
 * SiEd-Dana - A text editor optimized for the AlphaSmart Dana.
 * Copyright (C) 2016 Reg Tiangha
 * Contact:  reg@reginaldtiangha.com
 *
 * Portions of SiEd-Dana are based off the original SiEd project,
 * Copyright (C) 2003-2005 Benjamin Roe
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation; either version 2 of the License, or (at your
 * option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 */

#include <PalmOS.h>
#include <PalmTypes.h>

enum {READ_ONLY,READ_WRITE};
enum {MAIN_MEMORY,STORAGE};
//MemHandle GetSwapSpace(const Int16 size);
class SiMemChunk
{
public:
	SiMemChunk();
	virtual ~SiMemChunk();
	void page_in();
	void page_out();
	SiMemChunk * next_chunk();
	SiMemChunk * prev_chunk();
	void set_next_chunk(SiMemChunk * chunk);
	void set_prev_chunk(SiMemChunk * chunk);
	void set_size(Int16 size);
	void set_status(Int8 status);
	UInt8 status();
	Int16 size();
	Char * data(Int8 mode);
protected:
	Char * mem_ptr;
};

class SiMasterMemChunk: public SiMemChunk
{
public:
	SiMasterMemChunk();
	virtual ~SiMasterMemChunk();
protected:
	MemHandle swap_handle;
};
