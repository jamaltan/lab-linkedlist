#include <stdio.h>
#include "list.h"

int main(void) {
  struct list *list;

  list = create();
  printf("list addr: %p, head addr: %p\n", list, list->head);

  add(list->head, 1);
  add(list->head, 2);
  add(list->head, 3);
  add(list->head, 4);

  printf("list head addr: %p, val: %d\n", list->head, list->head->val);
  printf("list node 1 addr: %p, val: %d\n", list->head->next,
         list->head->next->val);
  printf("list node 2 addr: %p, val: %d\n", list->head->next->next,
         list->head->next->next->val);
  printf("list node 3 addr: %p, val: %d\n", list->head->next->next->next,
         list->head->next->next->next->val);
  printf("list node 4 addr: %p, val: %d\n", list->head->next->next->next->next,
         list->head->next->next->next->next->val);

  printf("list node last addr: %p\n", list->head->next->next->next->next->next);

  struct node **headptr;

  headptr = &list->head;
  printf("list head: %p, headptr: %p %p %p \n", list->head, &headptr, headptr,
         *headptr);

  iterator(headptr);

  return 0;
}
