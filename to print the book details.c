#include <stdio.h>
struct Book {
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
};
void printBook(struct Book book) {
    printf("Title: %s\n", book.title);
    printf("Author: %s\n", book.author);
    printf("Subject: %s\n", book.subject);
    printf("Book ID: %d\n", book.book_id);
}
int main() {
    struct Book book1 = {"The C Programming Language", "Brian W. Kernighan and Dennis M. Ritchie", "Computer Programming", 1001};
    printBook(book1);
    return 0;
}
