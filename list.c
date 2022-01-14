#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "list.h"

void iterator(struct node **head) {
  do {
    printf("node ptr: %p, val: %d\n", *head, (*head)->val);
    head = &(*head)->next;
  } while (*head != NULL);
  /**
  while(*head != NULL){
          head = &(*head)->next;
          printf("node ptr: %p, val: %d\n", *head, (*head)->val);
  }
  **/
}

void add(struct node *head, int val) {
  struct node *node;
  struct node *prev, *curr;

  prev = head;
  curr = head->next;

  while (curr != NULL) {
    prev = curr;
    curr = curr->next;
  }

  node = (struct node *)malloc(sizeof(struct node));
  assert(node);

  node->val = val;

  prev->next = node;
}

struct list *create() {
  struct list *list;
  struct node *head;

  list = (struct list *)malloc(sizeof(struct list));
  assert(list);

  head = (struct node *)malloc(sizeof(struct node));
  assert(head);

  list->head = head;

  return list;
}
