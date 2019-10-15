struct book {char* title; int length;};

struct book writeBook(char* name);
void getAttr(struct book myBook);
void setAttr(struct book myBook, char* newName, int newLen)
