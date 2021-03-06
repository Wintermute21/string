#include "string.h"
#include <iostream>
#include <cstring>
#include <cstdlib>
#include <ostream>
#include <istream>
using namespace std;
namespace cs33001 {
	


const string::size_type string::npos = static_cast<size_t>(-1);

/*
 * Like new, we want to guarantee that we NEVER
 * return NULL.  Loop until there is free memory.
 *
 */
static char* malloc_never_null(const size_t b)
{
	char *p;

	do {
		p = static_cast<char*>(malloc(b));
	} while ( p == NULL );

	return p;
}

static char* strdup_never_null(const char* s)
{
	const size_t len = strlen(s)+1;
	char *p = malloc_never_null(len);
	memcpy(p, s, len);
	return p;
}
static char* strdup_never_null (const char& c) {
char* str = new char[2];
str[0] = c; str[1] = 0;
return strdup_never_null(str);
strdup_never_null(str);
}
string::string() : p(strdup_never_null(""))
{
}

string::~string()
{
	free(p);
}

string::string(const string& s) : p(strdup_never_null(s.p))
{
}

string::string(const char* s) : p(strdup_never_null(s))
{
}
string::string(const char & s) : p(strdup_never_null(s)) {
}

string& string::operator=(const char* s)
{
	if ( p != s ) {
		// this should work with overlapping memory
		char *copy = strdup_never_null(s);
		free(p);
		p = copy;
	}

	return *this;
}


string& string::operator=(const string& s)
{
	return operator=(s.p);
}

string& string::operator+=(const string& s)
{
	const size_type lenp = strlen(p);
	const size_type lens = strlen(s.p) + 1;
	p = static_cast<char*>(realloc(p, lenp + lens)); // could return NULL
	memmove(p+lenp, s.p, lens); // p and s.p MAY overlap
	return *this;
}

bool string::operator==(const char* s) const
{
	return !strcmp(p, s);
}

bool string::operator==(const string& s) const
{
	return !strcmp(p, s.p);
}

string::string (int size, char filler) {
	char * temp;					//create the pointer for the string to be returned
	temp = new char [size + 1];     //allocate enough memory for the size and the null terminator

	for (int i = 0; i < size; i++)  //fill the character array with the filler character
		temp[i] = filler;

	temp[size] = '\0';
}
void string::clear()
{
	free(p);
	p = strdup_never_null("");
}

string operator+(const string& lhs, const string& rhs)
{
	return string(lhs) += rhs;
}

string::size_type string::size() const
{
	return strlen(p);
}

bool string::empty() const
{
	return *p == '\0';
}

const char* string::c_str() const
{
	return p;
}

string string::substr(const size_type start, const size_type len_orig) const
{
	string s;
	size_type len = strlen(p);

	if ( start > len )
		throw std::out_of_range("my::string::substr");

	if ( len > len_orig )
		len = len_orig;

	free(s.p);
	s.p = malloc_never_null(len+1);
	memcpy(s.p, p + start, len);
	s.p[len] = '\0';

	return s;
}

// unchecked access
char& string::operator[](const size_type n) const
{
	return p[n];
}

// checked access
char string::at(const size_type n) const
{
	if ( n > strlen(p) )
		throw std::out_of_range("my::string::at()");

	return p[n];
}

string& string::erase(size_type pos, size_type len)
{
	size_type s = size();

	if ( pos > s )
		throw std::out_of_range("my::string::erase");

	s -= pos;
	if ( len > s )
		len = s;
	++s;

	// erase by overwriting
	memmove(p + pos, p + pos + len, s);

	// remove unused space
	p = static_cast<char*>(realloc(p, s+pos));

	return *this;
}

string  string::getline(std::istream& in, const char delim)
{
	int *ptr;
	int len;
	char next;
	int i = 0;
	in.get(next);
	while(next!=delim && !in.eof()) {
		ptr[i]=next;
		in.get(next);
		++i;
	}
	len=i;
	ptr[len]='\0'; 

	return *this;

}
std::istream& operator>>(std::istream& in, string& delim) {
	delim.getline(in, ' ');
	return in;
}

void getline(std::istream& in, string& result)
{
	result.getline(in, '\n');
}

std::ostream& operator<<(std::ostream& outs, const string& rhs)
{
	int i=0;                                                
	while(rhs.p[i]!=0)
	{
		outs<<rhs.p[i];
		++i;
	}
	
	
	
	return outs;
	}
}