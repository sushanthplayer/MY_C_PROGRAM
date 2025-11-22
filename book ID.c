#include <stdio.h>
struct Book {
    char title[50];
    char author[50];
    int year;
};
int main() {
    int n;
    printf("Enter number of books: ");
    scanf("%d", &n);
    struct Book books[n];
    for(int i = 0; i < n; i++) {
        printf("\nEnter details of Book %d\n", i+1);
        printf("Enter Title: ");
        scanf(" %[^\n]", books[i].title);s
        printf("Enter Author: ");
        scanf(" %[^\n]", books[i].author);
        printf("Enter Year of Publication: ");
        scanf("%d", &books[i].year);
    }
    printf("\n------ List of Books ------\n");
    for(int i = 0; i < n; i++) {
        printf("\nBook %d\n", i+1);
        printf("Title: %s\n", books[i].title);
        printf("Author: %s\n", books[i].author);
        printf("Year: %d\n", books[i].year);
    }
}
