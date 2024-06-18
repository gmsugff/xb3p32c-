#pragma once
class Book;

class Member {
private:
	std::string name;
	std::string memberId;
	std::vector<Book*> borrowedBooks;
public:
	Member(const std::string& name, const std::string& memberId);
	std::string getName() const;
	std::string getMemberId() const;
	void borrowBook(Book& book);
	void returnBook(Book& book);
};
