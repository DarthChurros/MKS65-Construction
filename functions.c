#include "headers.h"

struct book writeBook(char* name) {
  struct book new;
  new.title = name;
  new.length = rand() % 900 + 100;
  return new;
}

void printBook(struct book toRead) {

}

void setAttr(struct book toWrite, char* newName, int newLen) {

}
