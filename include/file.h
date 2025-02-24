/* apt-spy
 * (c) Steven Holmes, 2003.
 * (c) Stefano Canepa <sc@linux.it>, 2008, 2009
 * This software is licensed as detailed in the LICENSE file.
 */

#ifndef __FILE_H
#define __FILE_H

FILE *select_infile(char *infile);
FILE *select_outfile(char *outfile);
FILE *select_config(char *config_file);
FILE *select_mirror(char *mirror_list, int are_updating);
char *next_entry(FILE *infile_p);
int backup(char *orig_file);
int check_write_access(char *path);

#endif
