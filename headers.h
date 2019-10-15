struct book {char* title; int length;};

struct book writeBook(char* name);
void printBook(struct book toRead);
void setAttr(struct book toWrite, char* newName, int newLen)
