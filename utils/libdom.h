/*
 * Copyright 2011 John-Mark Bell <jmb@netsurf-browser.org>
 *
 * This file is part of NetSurf, http://www.netsurf-browser.org/
 *
 * NetSurf is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; version 2 of the License.
 *
 * NetSurf is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */


/** \file
 * libdom utilities (implementation).
 */

#ifndef NETSURF_UTILS_LIBDOM_H_
#define NETSURF_UTILS_LIBDOM_H_

#include <stdbool.h>

#include <dom/dom.h>

/* depth-first walk the dom calling callback for each element
 *
 * \param root the dom node to use as the root of the tree walk
 * \return true if all nodes were examined, false if the callback terminated
 *         the walk early.
 */
bool libdom_treewalk(dom_node *root,
		bool (*callback)(dom_node *node, dom_string *name, void *ctx),
		void *ctx);

/**
 * Search the descendants of a node for an element.
 *
 * \param  node		dom_node to search children of, or NULL
 * \param  element_name	name of element to find
 * \return  first child of node which is an element and matches name, or
 *          NULL if not found or parameter node is NULL
 */
dom_node *libdom_find_element(dom_node *node, lwc_string *element_name);

#endif