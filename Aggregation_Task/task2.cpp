// Library Catalog System:
//    Design a library catalog system where each library has multiple sections, and each section contains multiple books. Create classes for Library, Section, and Book. The Library class should aggregate Section objects, and each Section object should aggregate Book objects. Implement functionalities to add new books, search for books by title or author, and display all books available in a particular section.


#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    string title;
    string author;
public:
    Book(string title, string author) : title(title), author(author) {}

    string& getTitle()  {
        return title;
    }

    string& getAuthor() {
        return author;
    }

    void display()  {
        cout << "Title: " << title << ", Author: " << author << endl;
    }
};

class Section {
private:
    string name;
    Book* books[100];
    int numBooks;
public:
    Section(string name) : name(name), numBooks(0) {}

    string& getName()  {
        return name;
    }

    void addBook(const Book& book) {
        if (numBooks < 100) {
            books[numBooks++] = new Book(book);
        }
    }

    void displayBooks() {
        cout << "Books in Section " << name << ":" << endl;
        for (int i = 0; i < numBooks; ++i) {
            books[i]->display();
        }
    }

    Book* findBookByTitle(const string& title){
        for (int i = 0; i < numBooks; ++i) {
            if (books[i]->getTitle() == title) {
                return books[i];
            }
        }
        return nullptr;
    }

    Book* findBookByAuthor(const string& author){
        for (int i = 0; i < numBooks; ++i) {
            if (books[i]->getAuthor() == author) {
                return books[i];
            }
        }
        return nullptr;
    }
};

class Library {
private:
    string name;
    Section* sections[10];
    int numSections;
public:
    Library(string name) : name(name), numSections(0) {}

    void addSection(const Section& section) {
        if (numSections < 10) {
            sections[numSections++] = new Section(section);
        }
    }

    void displayBooksInSection(const string& sectionName){
        for (int i = 0; i < numSections; ++i) {
            if (sections[i]->getName() == sectionName) {
                sections[i]->displayBooks();
                return;
            }
        }
        cout << "Section not found." << endl;
    }

    Book* findBookByTitle(const string& title){
        for (int i = 0; i < numSections; ++i) {
            Book* book = sections[i]->findBookByTitle(title);
            if (book != nullptr) {
                return book;
            }
        }
        return nullptr;
    }

    Book* findBookByAuthor(const string& author){
        for (int i = 0; i < numSections; ++i) {
            Book* book = sections[i]->findBookByAuthor(author);
            if (book != nullptr) {
                return book;
            }
        }
        return nullptr;
    }
};

int main() {
    Book book1("The Great Gatsby", "F. Scott Fitzgerald");
    Book book2("To Kill a Mockingbird", "Harper Lee");
    Book book3("1984", "George Orwell");

    Section fiction("Fiction");
    fiction.addBook(book1);
    fiction.addBook(book2);

    Section nonFiction("Non-Fiction");
    nonFiction.addBook(book3);

    Library library("My Library");
    library.addSection(fiction);
    library.addSection(nonFiction);

    library.displayBooksInSection("Fiction");

    Book* foundBook = library.findBookByTitle("1984");
    if (foundBook != nullptr) {
        cout << "Book found: ";
        foundBook->display();
    } else {
        cout << "Book not found." << endl;
    }
    
    foundBook = library.findBookByAuthor("F. Scott Fitzgerald");
    if (foundBook != nullptr) {
        cout << "Book found: ";
        foundBook->display();
    } else {
        cout << "Book not found." << endl;
    }
    return 0;
}
