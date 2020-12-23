#ifndef FELIDAE
#define FELIDAE

#include <string>

class Felidae {
public :
	Felidae() = default;
	~Felidae() = default;
	virtual std::string getLatinName() const;
	virtual std::string getRussianName() const;
	virtual std::string getClassification() const;
	virtual std::string getFullInfo() const;
};

#endif // !FELINE
