#ifndef BOOKS_H
#define BOOKS_H

struct book {
  char* title;
  int length;
};

void writeBook(struct book* new, char* name);
void printBook(struct book toRead);
void setAttr(struct book* toWrite, char* newName, int newLen);

#endif
