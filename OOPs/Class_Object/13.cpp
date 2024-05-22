#include <iostream>
#include <string>
#include <limits>

const int MAX_BOOKS = 100; // Change this to desired maximum number of books

class Book {
public:
  std::string title;
  std::string author;

  // Constructor for creating a Book object
  Book(const std::string& title, const std::string& author) : title(title), author(author) {}
};

class LibraryCatalog {
private:
  Book books[MAX_BOOKS];
  int numBooks;

public:
  LibraryCatalog() : numBooks(0) {}

  // Add a book to the catalog (checks for free space)
  void addBook(const std::string& title, const std::string& author) {
    if (numBooks >= MAX_BOOKS) {
      std::cout << "Catalog is full!" << std::endl;
      return;
    }
    books[numBooks] = Book(title, author);
    numBooks++;
  }

  // Remove a book by title (assumes unique titles)
  void removeBook(const std::string& title) {
    int foundIndex = -1;
    for (int i = 0; i < numBooks; ++i) {
      if (books[i].title == title) {
        foundIndex = i;
        break;
      }
    }

    if (foundIndex == -1) {
      std::cout << "Book not found!" << std::endl;
      return;
    }

    // Shift remaining elements to fill the gap
    for (int i = foundIndex; i < numBooks - 1; ++i) {
      books[i] = books[i + 1];
    }
    numBooks--;
  }

  // Search for books by title (returns first matching book)
  Book* searchByTitle(const std::string& title) const {
    for (int i = 0; i < numBooks; ++i) {
      if (books[i].title == title) {
        return &books[i];
      }
    }
    return nullptr;
  }

  // Search for books by author (returns the first matching book)
  Book* searchByAuthor(const std::string& author) const {
    for (int i = 0; i < numBooks; ++i) {
      if (books[i].author == author) {
        return &books[i];
      }
    }
    return nullptr;
  }

  // Calculate the total number of books in the catalog
  int getTotalBooks() const {
    return numBooks;
  }

  // Display all books in the catalog (handles empty catalog)
  void displayBooks() const {
    if (numBooks == 0) {
      std::cout << "No books in the catalog!" << std::endl;
      return;
    }

    for (int i = 0; i < numBooks; ++i) {
      std::cout << "Title: " << books[i].title << ", Author: " << books[i].author << std::endl;
    }
  }
};

int main() {
  LibraryCatalog catalog;

  catalog.addBook("The Lord of the Rings", "J.R.R. Tolkien");
  catalog.addBook("The Hitchhiker's Guide to the Galaxy", "Douglas Adams");
  catalog.addBook("Pride and Prejudice", "Jane Austen");

  catalog.displayBooks();  // Output: Title: The Lord of the Rings, Author: J.R.R. Tolkien ...

  Book* result = catalog.searchByAuthor("Douglas Adams");
  if (result) {
    std::cout << "Found book by Douglas Adams: " << result->title << std::endl;
  } else {
    std::cout << "No books found by Douglas Adams." << std::endl;
  }

  catalog.removeBook("Pride and Prejudice");
  catalog.displayBooks();  // Output: (List without Pride and Prejudice)

  return 0;
}
