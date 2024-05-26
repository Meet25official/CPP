// #include<iostream>
// using namespace std;

// class Student {
// public:
//     int id;
//     string name;
//     int age;

//     Student() :  id(0), name(""), age(0) {}

//     Student(int id, string name, int age) : id(id), name(name), age(age) {}

//     void display() {
//         cout << "Id: " << id << ", Name: " << name << ", Age: " << age << endl;
//     }
// };

// class StudentManager {
// private:
//     Student* students;
//     int capacity;
//     int count;
// public:
//     StudentManager(int capacity) : capacity(capacity), count(0) {
//         students = new Student[this->capacity];
//     }

//     ~StudentManager() {
//         delete[] students;
//     }

//     void createStudent(int id, string name, int age) {
//         if(count >= capacity) {
//             cout << "Error: Capacity full. Cannot add more students. " << endl;
//             return;
//         }

//         students[count++] = Student(id, name, age);
//         cout << "Student added successfully." << endl;
//     }

//     void readStudent() {
//         if(count == 0) {
//             cout << "No Students to display." << endl;
//             return;
//         }

//         for (int i = 0; i < count; i++) {
//             students[i].display();
//         }
//     }

//     void updateStudent(int id, string name, int age) {
//         for (int i = 0; i < count; i++) {
//             if(students[i].id == id) {
//                 students[i].name = name;
//                 students[i].age = age;
//                 cout << "Student updated successfully." << endl;
//                 return;
//             }
//         }
//         cout << "Error: Student with ID " << id << " not found" << endl;
//     }

//     void deleteStudent(int id) {
//         for (int i = 0; i < count; i++) {
//             if(students[i].id == id) {
//                 for (int j = i; j < count - 1; j++) {
//                     students[j] = students[j+1];
//                 }
//                 count--;
//                 cout << "Student deleted successfully." << endl;
//                 return;
//             }
//         }
//         cout << "Error: Stduent with ID " << id << " not found." << endl;
//     }
// };

// int main() {
//     StudentManager manager(5);

//     manager.createStudent(1, "Alice", 20);
//     manager.createStudent(2, "Bob", 22);
//     manager.createStudent(3, "Charlie", 23);
//     manager.createStudent(4, "Vedant", 18);

//     cout << "Current Students: " << endl;
//     manager.readStudent();

//     cout << "\nUpdating Bob's age to 25: " << endl;
//     manager.updateStudent(2, "Bob", 25);

//     cout << "\nDeleting Charlie: " << endl;
//     manager.deleteStudent(3);

//     cout << "\nCurrent Students: " << endl;
//     manager.readStudent();

//     manager.createStudent(3, "Pratham", 19);

//     cout << "\nCurrent Students: " << endl;
//     manager.readStudent();

//     return 0;
// }

/*
-> Problem Statement 2: Library Book Inventory System
You need to develop a Library Book Inventory System to manage the books available in a library. The system should support the following operations:

1. Create: Add a new book with the attributes ISBN, title, and author.
2. Read: List all the books available in the library.
3. Update: Update the details (title and author) of an existing book based on its ISBN.
4. Delete: Remove a book from the inventory based on its ISBN.

USE SWITCH CASE WHERE IT IS POSSIBLE
*/
#include <iostream>
using namespace std;

class Book{
    public:
    string ISBN;
    string title;
    string author;

    Book(): ISBN(0) , title("") , author("") {}
    Book(string isbn, string t, string a){
        ISBN = isbn;
        title = t;
        author = a;
    }
    void displyBook(){
        cout << "ISBN: " << ISBN << ", Title: " << title << ", Author: " << author << endl;
    }

};
class Library{
    private:
    Book* books;
    int capacity;
    int size;
    public:
    Library(int c){
        capacity = c;
        size = 0;
        books = new Book[capacity];
    }
    ~Library(){
        delete[] books;
    }
    void createBook(string isbn, string t, string a){
        if(size < capacity){
            books[size] = Book(isbn, t, a);
            size++;
        }
        else{
            cout << "Library is full. Cannot add more books." << endl;
        }
    }
    void readBook(){
        if(size == 0){
            cout << "Library is empty. No books to display." << endl;
        }
        else{
            for(int i = 0; i < size; i++){
                books[i].displyBook();
            }
        }
    }
};
int main(){
    Library lib(5);
    lib.createBook("1234567890", "Book1", "Author1");
    lib.createBook("2345678901", "Book2", "Author2");
    lib.createBook("3456789012", "Book3", "Author3");
    lib.readBook();
    return 0;
}

// #include <iostream>
// #include <string>
// using namespace std;

// class Book
// {
// private:
//     string ISBN;
//     string title;
//     string author;
// public:
//     Book(){}
//     Book(string ISBN, string title, string author)
//     {
//         this->ISBN = ISBN;
//         this->title = title;
//         this->author = author;
//     }
//     string getISBN()
//     {
//         return ISBN;
//     }
//     string getTitle()
//     {
//         return title;
//     }
//     string getAuthor()
//     {
//         return author;
//     }
//     void setTitle(string title)
//     {
//         this->title = title;
//     }
//     void setAuthor(string author)
//     {
//         this->author = author;
//     }
//     void setISBN(string ISBN){
//         this->ISBN = ISBN;
//     }
// };
// class Library
// {
// private:
//     Book *books;
//     int size;

// public:
//     Library()
//     {
//         size = 0;
//         books = new Book[size];
//     }
//     ~Library()
//     {
//         delete[] books;
//     }
//     void addBook(string ISBN, string title, string author)
//     {
//         Book *temp = new Book[size + 1];
//         for (int i = 0; i < size; i++)
//         {
//             temp[i] = books[i];
//         }
//         temp[size].setISBN(ISBN);
//         temp[size].setTitle(title);
//         temp[size].setAuthor(author);
//         delete[] books;
//         books = temp;
//         size++;
//     }
//     void removeBook(string ISBN)
//     {
//         for (int i = 0; i < size; i++)
//         {
//             if (books[i].getISBN() == ISBN)
//             {
//                 for (int j = i; j < size - 1; j++)
//                 {
//                     books[j] = books[j + 1];
//                 }
//                 size--;
//                 Book *temp = new Book[size];
//                 for (int k = 0; k < size; k++)
//                 {
//                     temp[k] = books[k];
//                 }
//                 delete[] books;
//                 books = temp;
//                 return;
//             }
//         }
//     }
//     void printBooks()
//     {
//         for (int i = 0; i < size; i++)
//         {
//             cout << "ISBN: " << books[i].getISBN() << ", Title: " << books[i].getTitle() << ", Author: " << books[i].getAuthor() << endl;
//         }
//     }
// };
// int main()
// {
//     Library lib;
//     lib.addBook("1234567890", "Book1", "Author1");
//     lib.addBook("2345678901", "Book2", "Author2");
//     lib.printBooks();
//     lib.removeBook("1234567890");
//     lib.printBooks();
// }