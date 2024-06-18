#include "Member.h"
#include "Book.h"

Member::Member(const std::string& name, const std::string& memberId)
	: name(name), memberId(memberId) {}

std::string Member::getName() const { return name; }

std::string Member::getMemberId() const { return memberId; }

void Member::borrowBook(Book& book) {
	if (book.getIsAvailable()) {
		borrowedBooks.push_back(&book);
		book.isAvailable = false;
		std::cout << "Book borrowed successfully!" << std::endl;
	}
	else {
		std::cout << "Book is not available for borrowing." << std::endl;
	}
}

void Member::returnBook(Book& book) {
	auto it = std::find(borrowedBooks.begin(), borrowedBooks.end(), &book);
	if (it != borrowedBooks.end()) {
		borrowedBooks.erase(it);
		book.isAvailable = true;
		std::cout << "Book returned successfully!" << std::endl;
	}
	else {
		std::cout << "You have not borrowed this book." << std::endl;
	}
}