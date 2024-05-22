#include <iostream>
using namespace std;

class Book {
private:
    string title;
    string author;
public:  
    Book(string title, string author) : title(title), author(author) {}
    void borrowBook() {
            cout << "Book '" << this->title << "' by " << this->author << " has been borrowed.\n";
    }
    void borrowBook2() {
            cout << "Sorry, the book '" << this->title << "' by " << this->author << " is not available.\n";
    }
};
int main() {
    Book book1("The Great Gatsby", "F. Scott Fitzgerald");
    Book book2("To Kill a Mockingbird", "Harper Lee");

    book1.borrowBook();
    book2.borrowBook2();

    return 0;
}
