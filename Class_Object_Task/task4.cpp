// 4. Design a class called "Book" with attributes for book title, author, and price. Write functions to input book details, update price, and display book information.

#include<iostream>
using namespace std;

class Book{
    string title;
    string author;
    double price;

public:
void inputBookDetails(){
    cout << "Enter the book title: " << endl;
    cin >> title;
    cout << "Enter the author's name: " << endl;
    cin >> author;
    cout << "Enter the book price: " << endl;
    cin >> price;
}

void updatePrice(double newPrice){
    if (newPrice >=0){
        price = newPrice;
        cout << "Price updated successfully. New price is: " << price << endl;
    }else{
        cout << "Invalid price. Price cannot be negative." << endl;
    }
}
void displayBookInfo(){
    cout << "Book Title: " << title << endl;
    cout << "Author: " << author << endl;
    cout << "Price: " << price << endl;
}
};
int main(){
    Book book;
    
    book.inputBookDetails();
    book.displayBookInfo();
    book.updatePrice(150);

    return 0;
}