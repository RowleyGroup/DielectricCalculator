
#ifndef TOPO_MOL_PLUGINIO_H
#define TOPO_MOL_PLUGINIO_H

#include <stdio.h>
#include "topo_mol.h"
#include "stringhash.h"

int topo_mol_read_plugin(topo_mol *mol, const char *pluginname,
                         const char *filename, 
                         const char *segid, stringhash *h,
                         int coordinatesonly, int residuesonly,
                         void *, void (*print_msg)(void *, const char *));

int topo_mol_write_plugin(topo_mol *mol, const char *pluginname,
                          const char *filename, 
                          void *, void (*print_msg)(void *, const char *));

#endif

