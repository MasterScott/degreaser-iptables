/*  ------------------------------------------------------------------------
	xt_notarpit - A xtables match for detecting network tarpits.
	Copyright (c) 2014, Lance Alt

	This program is free software: you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published
	by the Free Software Foundation, either version 3 of the License, or
	(at your option) any later version.

	This program is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
	GNU General Public License for more details.

	You should have received a copy of the GNU Lesser General Public License
	along with this program. If not, see <http://www.gnu.org/licenses/>.
	------------------------------------------------------------------------ */


#include <getopt.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <xtables.h>
#include "compat_user.h"

static void notarpit_mt_help(void) {
}

static void notarpit_mt_save(const void *ip, const struct xt_entry_match *match) {
}

static void notarpit_mt_print(const void *ip, const struct xt_entry_match *match,
    int numeric) {
}

static struct xtables_match notarpit_mt_reg = {
	.version	= XTABLES_VERSION,
	.name		= "notarpit",
	.revision	= 0,
	.family		= NFPROTO_UNSPEC,
	.help		= notarpit_mt_help,
	.print		= notarpit_mt_print,
	.save		= notarpit_mt_save,
};

static void _init(void) {
	xtables_register_match(&notarpit_mt_reg);
}

