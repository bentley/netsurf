/*
 * Copyright 2014 Vincent Sanders <vince@netsurf-browser.org>
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

/**
 * \file
 *
 * NetSurf core interface registration, construction and destruction.
 */

#ifndef _NETSURF_DESKTOP_NETSURF_H_
#define _NETSURF_DESKTOP_NETSURF_H_

#include "utils/errors.h"
#include "desktop/gui_table.h"

/**
 * Register operation table.
 *
 * @param table NetSurf operations table.
 * @return NSERROR_OK on success or error code on failure. On failure
 *                    global table will not be initialised.
 */
nserror netsurf_register(struct netsurf_table *table);

/**
 * Initialise netsurf core.
 *
 * @param messages path to translation mesage file.
 * @param store_path path to persistent storage.
 * @return NSERROR_OK on success or error code on failure.
 */
nserror netsurf_init(const char *messages, const char *store_path);

/**
 * Finalise NetSurf core
 */
extern void netsurf_exit(void);

#endif
