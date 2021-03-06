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

#include "vfsvol_dirnode.h"
#include "error.h"

vfsvol_SiDirNode::vfsvol_SiDirNode(Char * filename):vfs_SiDirNode(filename)
{
	image_id=SDCARD_BITMAP;
	x_offset=ICON_WIDTH;
	select_action=ACTION_CHANGE_DIR;
	options=TOP_LEVEL|CREATE_DIRECTORIES;
	m_font=boldFont;
}
SiDirNode * vfsvol_SiDirNode::get_copy()
{
	SiDirNode * ret_node=new vfsvol_SiDirNode(name);
	ret_node->volRefNum=volRefNum;
	ret_node->parent=parent;
	return ret_node;

}

Int16 vfsvol_SiDirNode::get_position_index()
{
	return VFSVOL_POSITION;
}
