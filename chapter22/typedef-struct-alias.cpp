#include <iostream>

using namespace std;


typedef struct Book {
  char title[50];
  char author[50];
  char subject[50];
  int book_id;
} Book;

void printBook( Book *book );

int main()
{
  Book book1;
  Book book2;

  strcpy( book1.title, "The Fellowship of the Ring" );
  strcpy( book1.author, "JRR Tolkien" );
  strcpy( book1.subject, "Fantasy" );
  book1.book_id = 1257;

  strcpy( book2.title, "Harry Potter: volume 1" );
  strcpy( book2.author, "JK Rowling" );
  strcpy( book2.subject, "Fantasy" );
  book2.book_id = 1258;

  printBook(&book1);
  printBook(&book2);

  return 0;
}

void printBook( Book *book )
{
  cout << "Book title: " << book->title << endl;
  cout << "Book author: " << book->author << endl;
  cout << "Book subject: " << book->subject << endl;
  cout << "Book id: " << book->book_id << endl;
}
