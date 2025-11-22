#include <iostream>

using namespace std;

struct Book
{
  char title[50];
  char author[50];
  char subject[50];
  int book_id;
};

int main()
{
  struct Book book1;
  struct Book book2;

  strcpy( book1.title, "The Fellowship of the Ring" );
  strcpy( book1.author, "JRR Tolkien" );
  strcpy( book1.subject, "Fantasy" );
  book1.book_id = 1257;

  strcpy( book2.title, "Harry Potter: volume 1" );
  strcpy( book2.author, "JK Rowling" );
  strcpy( book2.subject, "Fantasy" );
  book2.book_id = 1258;

  cout << "Book 1 title: " << book1.title << endl;
  cout << "Book 1 author: " << book1.author << endl;
  cout << "Book 1 subject: " << book1.subject << endl;
  cout << "Book 1 book_id: " << book1.book_id << endl;

  cout << "_________________" << endl;

  cout << "Book 1 title: " << book2.title << endl;
  cout << "Book 1 author: " << book2.author << endl;
  cout << "Book 1 subject: " << book2.subject << endl;
  cout << "Book 1 book_id: " << book2.book_id << endl;



  return 0;
}
