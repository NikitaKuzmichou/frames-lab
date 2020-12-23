#ifndef FELINAE
#define FELINAE

#include "../Felidae.hpp"

class Felinae : public Felidae {
public:
	Felinae() = default;
	~Felinae() = default;
	virtual std::string getLatinName() const override;
	virtual std::string getRussianName() const override;
	virtual std::string getClassification() const override;
	virtual std::string getArea() const;
	virtual std::string getFullInfo() const override;
};

#endif // !FELINAE
