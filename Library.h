#pragma once
#include "Book.h"
#include "Member.h"

class Library {
private:
	std::vector<Book*> books;
	std::vector members;
public:
	void addBook(const Book& book);
	void removeBook(const std::string& isbn);
	Book* findBook(const std::string& isbn);
	void registerMember(const Member& member);
	void unregisterMember(const std::string& memberId);
	void displayAllBooks();
};