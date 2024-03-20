#include <iostream>
#include <string>

class Book {
private:
    std::string title;
    std::string author;
    int publicationYear;

public:
    // Constructor with initial values
    Book(const std::string& bookTitle, const std::string& bookAuthor, int pubYear)
        : title(bookTitle), author(bookAuthor), publicationYear(pubYear) {}

    // Method to display book information
    void displayBookInfo() {
        std::cout << "Title: " << title << std::endl;
        std::cout << "Author: " << author << std::endl;
        std::cout << "Publication Year: " << publicationYear << std::endl;
    }
};

int main() {
    // Creating a book object
    Book book1("The Great Gatsby", "F. Scott Fitzgerald", 1925);

    // Displaying book information
    std::cout << "Book Information:" << std::endl;
    book1.displayBookInfo();

    return 0;
}
