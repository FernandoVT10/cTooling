#include <stdio.h>

#include "cTooling.h"

int main(void)
{
    String str = string_create(NULL);
    string_append_text(&str, "Hello!");
    string_insert_text(&str, " World", 5);
    string_insert_chr(&str, ',', 5);

    String bye = string_create(" Bye!");
    string_append_string(&str, bye);
    string_append_chr(&str, '\0');

    string_remove_chr(&str, 5);

    printf("String \"%s\" is length: %lu\n", str.items, str.count - 1);

    string_free(&str);
    string_free(&bye);

    LList *list = llist_create();

    llist_append_node(list, llist_create_node(0, NULL));
    llist_append_node(list, llist_create_node(1, NULL));
    llist_append_node(list, llist_create_node(2, NULL));

    LNode *node = list->head;

    while(node != NULL) {
        printf("Node type: %d\n", node->type);
        node = node->next;
    }

    llist_destroy(list);

    return 0;
}
