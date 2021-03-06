#include <sys/types.h> // size_t
#include <stdexcept>
#include <cstdlib>
#include <cstring>
#ifndef string_h__
#define string_h__

namespace cs33001 {

	class string {
		char* p;
	public:
		typedef size_t size_type;
		static const size_type npos;

		string();
		virtual ~string();
		string(const string&);
		string(const char*);
		string(int, char);
		string(const char&);
		string& operator=(const char*);
		string& operator=(const string&);
		string& operator+=(const string&);
		friend string operator+(const string& lhs, const string& rhs);
		bool operator==(const char*) const;
		bool operator==(const string&) const;
		void clear();
		size_type size() const;
		bool empty() const;
		const char* c_str() const;
		string substr(const size_type start, const size_type length) const;
		char& operator[](const size_type n) const;
		char at(const size_type n) const;
		string& erase(size_type pos, size_type len);
		string getline(std::istream&, const char);
		friend std::ostream& operator<<(std::ostream&, const string&);
		friend std::istream& operator>>(std::istream&, string&);
		string getline(std::istream&,const char);
		};
	}
		
// namespace
#endif // string_h__