#include <stdlib.h>
#include <stdio.h>
#include "headers.h"

int main() {
  struct book myBook;
  writeBook(myBook, "The Lord of the Rings");

  printBook(myBook);

  struct book newBook;
  writeBook(newBook, "Homo Deus");

  printBook(newBook);

  printf("\nShortening LoTR to one volume...");

  setAttr(myBook, "The Return of the King", myBook.length / 3);
  printBook(myBook);
}
