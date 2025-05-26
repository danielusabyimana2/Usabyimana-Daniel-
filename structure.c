#include <stdio.h>
#include <stdlib.h>

// Define a structure to store book details
struct Book {
    char title[100];
    char author[100];
    float price;
};

int main() {
    struct Book book;
    FILE *file;

    // Get book details from the user
    printf("Enter the book title: ");
    fgets(book.title, sizeof(book.title), stdin);

    printf("Enter the author name: ");
    fgets(book.author, sizeof(book.author), stdin);

    printf("Enter the price: ");
    scanf("%f", &book.price);

    // Save book details to a file
    file = fopen("book.txt", "w"); // open file in write mode
    if (file == NULL) {
        printf("Could not open file for writing.\n");
        return 1;
    }

    // Write each part to the file separately
    fputs(book.title, file);
    fputs(book.author, file);
    fprintf(file, "%.2f\n", book.price);

    fclose(file); // Close the file after writing

    // Open the file again to read the saved details
    file = fopen("book.txt", "r");
    if (file == NULL) {
        printf("Could not open file for reading.\n");
        return 1;
    }

    // Read the book details back
    char title[100], author[100];
    float price;

    fgets(title, sizeof(title), file);
    fgets(author, sizeof(author), file);
    fscanf(file, "%f", &price);

    // Display the book details
    printf("\nBook details saved in file:\n");
    printf("Title : %s", title);
    printf("Author: %s", author);
    printf("Price : %.2f\n", price);

    fclose(file); // Close the file after reading

    return 0;
}


 
 
 
 