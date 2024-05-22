// 4. Develop a class for a book with member variables for title, author, and publication year. Write a constructor that initializes these variables when an object of the class is instantiated.

#include<iostream>
using namespace std;

class Book{
    private:
    string title;
    string author;
    int publicationYear;

    public:
    Book(string t, string a, int y){
        title = t;
        author = a;
        publicationYear = y;
    }
    void displayBookInfo(){
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Publication Year: " << publicationYear << endl;
    }
};
int main(){

    Book book1("To Kill a Mockingbird", "Harper Lee", 1960);
    book1.displayBookInfo();
    return 0;
}