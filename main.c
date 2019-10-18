#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "books.h"

int main() {
  srand(time(NULL));

  struct book myBook = writeBook("The Lord of the Rings");

  printBook(myBook);
  printf("\"%s\" is located at address %p\n\n", myBook.title, &myBook);

  struct book newBook = writeBook("Homo Deus");

  printBook(newBook);

  printf("\nShortening LoTR to one volume...\n");

  setAttr(&myBook, "The Return of the King", myBook.length / 3);
  printBook(myBook);
  printf("\"%s\" is located at address %p\n", myBook.title, &myBook);

  return 0;
}
