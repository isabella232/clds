// Licensed under the MIT license.See LICENSE file in the project root for full license information.

#define GBALLOC_H

#define clds_singly_linked_list_create real_clds_singly_linked_list_create
#define clds_singly_linked_list_destroy real_clds_singly_linked_list_destroy
#define clds_singly_linked_list_insert real_clds_singly_linked_list_insert
#define clds_singly_linked_list_delete real_clds_singly_linked_list_delete
#define clds_singly_linked_list_delete_if real_clds_singly_linked_list_delete_if
#define clds_singly_linked_list_find real_clds_singly_linked_list_find
#define clds_singly_linked_list_find_st real_clds_singly_linked_list_find_st
#define clds_singly_linked_list_node_create real_clds_singly_linked_list_node_create
#define clds_singly_linked_list_node_destroy real_clds_singly_linked_list_node_destroy
#define clds_singly_linked_list_delete_if_st real_clds_singly_linked_list_delete_if_st

#include "../src/clds_singly_linked_list.c"
