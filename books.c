#include <stdlib.h>
#include <stdio.h>
#include "books.h"

struct book writeBook(char* name) {
  struct book new;
  new.title = name;
  new.length = rand() % 900 + 100;
  return new;
}

void printBook(struct book toRead) {
  printf("\"%s\" has a length of %d pages.\n", toRead.title, toRead.length);
}

void setAttr(struct book* toWrite, char* newName, int newLen) {
  toWrite->title = newName;
  toWrite->length = newLen;
}
