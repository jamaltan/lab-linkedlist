#ifndef _LIST_H_
#define _LIST_H_

struct node {
  int val;
  struct node *next;
};

struct list {
  struct node *head;
};

void iterator(struct node **head);
void add(struct node *head, int val);
struct list *create();

#endif /* _LIST_H_ */
