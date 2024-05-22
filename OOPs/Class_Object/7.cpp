#include<iostream>
using namespace std;

class Book{
        string title;
        string author;
        float price;

       public: 
       void scan(){
            cout << "\nEnter the title of the book:- ";
            cin.ignore();
            getline(cin,title);
            cout << "\nEnter the name of book's author:-  ";
            cin.ignore();
            getline(cin,author);
            cout << "\nEnter the price of book:-  ";
            cin >> price;
       } 
       void display(){
            cout << "\nThe title of the book is:- " << title ;
            cout << "\nThe aouther's name of this book is:-  " << author;
            cout << "\nThe price of this book is:- " << price;
       }
       void avaibility(){
            
       }
       
};

int main(){
    Book b;
    b.scan();
    b.display();
}