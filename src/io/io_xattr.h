/**
 * @file
 *
 * @version 1.0
 *
 * @section DESCRIPTION
 *
 * API for reading and writing entries from and to a stream. Entries are written
 * as JSON Objects where only valid digests are written. A single entry is on
 * a single line.
 */
#ifndef IO_XATTR_H__
#define IO_XATTR_H__

#include <stdio.h>
#include <stddef.h>
#include <time.h>
#include <sys/types.h>

/* Public API *****************************************************************/


/**
 * write the following fields as a JSON object to the stream
 *
 * @param pathmd5       16 byte md5 of the path
 * @param name			the name of the xattr field
 * @param valuebuffer	the contents of the xattr field
 * @param valuesize		the size of the xattr field
 * @param stream        where to write the json object
 *
 * @return              0 on success, -1 on error
 */
int io_entry_write_xattr_fields(const void *pathmd5, const char *name,
        void *valuebuffer, ssize_t valuesize, FILE *stream);


#endif
