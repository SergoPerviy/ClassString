#pragma once

class String{
private:
	char* data;
	size_t size;

public:
	String();
	String(const char* str);
	String(size_t repeats, char sym);
	String(const String& other);
	// онструктор перемещени€
	String(String&& other) noexcept; // rvalue-reference (левосторон€€ ссылка)
	~String();

	void print() const;

	String& operator=(const char* str);
	String& operator=(const String& other);
	String& operator=(String&& other) noexcept;
	String& operator+(const char* str) const;
	String& operator+(const String& other) const;
};

