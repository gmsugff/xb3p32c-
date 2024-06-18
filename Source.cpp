#include <iostream>
#include <vector>
#include <string>
#include "Book.h"
#include "EBook.h"
#include "Member.h"
#include "Library.h"

int main() {
    

int main(){
        Library library;
        Book book1("The Great Gatsby", "F. Scott Fitzgerald", "9780743273565");
        EBook ebook1("The Hunger Games", "Suzanne Collins", "9780439023481", 5);

        Member member1("John Doe", "M12345");

        library.addBook(book1);
        library.addBook(ebook1);
        library.registerMember(member1);

        library.displayAllBooks();

        member1.borrowBook(*library.findBook("9780743273565"));
        member1.borrowBook(*library.findBook("9780439023481"));

        library.displayAllBooks();

        member1.returnBook(*library.findBook("9780743273565"));

        library.displayAllBooks();

       
}