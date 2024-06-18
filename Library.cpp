#include "Library.h"
#include "Book.h"
#include "Member.h"


void Library::addBook(const Book& book)
{
	books.push_back(new Book(book));
}
void Library::removeBook(const std::string& isbn) {
	for (auto it = books.begin(); it != books.end(); ++it) {
		if ((*it)->getIsbn() == isbn) {
			delete* it;
			books.erase(it);
			std::cout << "Book removed successfully!" << std::endl;
			return;
		}
	}
	std::cout << "Book with ISBN " << isbn << " not found in the library." << std::endl;
}