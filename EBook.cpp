
#include "Book.h"
#include "EBook.h"
EBook::EBook( std::string& title,  std::string& author, const std::string& isbn, int fileSize):Book(title, author, isbn), fileSize(fileSize) {}

void EBook::displayDetails() {
	Book::displayDetails();
	std::cout << "File Size: " << fileSize << " MB" << std::endl;
}