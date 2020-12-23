#ifndef FELIS
#define FELIS

#include "../Felinae.hpp"

class Felis : public Felinae {
public:
	Felis() = default;
	~Felis() = default;
	virtual std::string getLatinName() const override;
	virtual std::string getRussianName() const override;
	virtual std::string getArea() const override;
	virtual std::string getClassification() const override;
	virtual std::string getFullInfo() const override;
};

#endif // !FELIS
