/*
 * Copyright 2008 Vincent Sanders <vince@simtec.co.uk>
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

typedef int (*fb_widget_mouseclick_t)(struct gui_window *g, browser_mouse_state st, int x, int y);

void fb_rootwindow_click(struct gui_window *g, browser_mouse_state st , int x, int y);
void fb_rootwindow_create(framebuffer_t *fb);

struct fb_widget *fb_add_window_widget(struct gui_window *g, fb_widget_mouseclick_t click_rtn);

void fb_rootwindow_status(framebuffer_t *fb, const char* text);
