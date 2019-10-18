#include <stdlib.h>
#include <stdio.h>
#include "books.h"

void writeBook(struct book* new, char* name) {
  new.title = name;
  new.length = rand() % 900 + 100;
}

void printBook(struct book toRead) {
  printf("\"%s\" has a length of %d pages.\n", toRead.title, toRead.length);
}

void setAttr(struct book* toWrite, char* newName, int newLen) {
  toWrite->title = newName;
  toWrite->length = newLen;
}
