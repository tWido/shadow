/**
 * The Shadow Simulator
 *
 * Copyright (c) 2010-2011 Rob Jansen <jansen@cs.umn.edu>
 * Copyright (c) 2006-2009 Tyson Malchow <tyson.malchow@gmail.com>
 *
 * This file is part of Shadow.
 *
 * Shadow is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Shadow is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Shadow.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef _vector_h
#define _vector_h

typedef struct vector_t {
	size_t num_elems;
	size_t num_allocated;
	gpointer * elems;
} vector_t, * vector_tp;

#define VECTOR_MIN_SIZE 8

vector_tp vector_create (void);

size_t vector_size (vector_tp v);
gpointer vector_get (vector_tp v, guint i);
gpointer vector_remove (vector_tp v, guint i);

void vector_push (vector_tp v, gpointer o);
gpointer vector_pop (vector_tp v);

void vector_destroy (vector_tp v);

#endif