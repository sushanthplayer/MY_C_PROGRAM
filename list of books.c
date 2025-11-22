#include <stdio.h>
struct Book {
    char title[100];
    char author[100];
    int year;
};
int main() {
    int n;
    printf("Enter number of books: ");
    scanf("%d", &n);
    getchar(); 
    struct Book books[n];
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for book %d:\n", i + 1);
        printf("Title: ");
        fgets(books[i].title, sizeof(books[i].title), stdin);
        printf("Author: ");
        fgets(books[i].author, sizeof(books[i].author), stdin);
        printf("Year of Publication: ");
        scanf("%d", &books[i].year);
        getchar(); 
    }
    printf("\n===== List of Books =====\n");
    for (int i = 0; i < n; i++) {
        printf("\nBook %d:\n", i + 1);
        printf("Title : %s", books[i].title);
        printf("Author: %s", books[i].author);
        printf("Year  : %d\n", books[i].year);
    }
}
