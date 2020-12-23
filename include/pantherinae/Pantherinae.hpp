#ifndef PANTHERINAE
#define PANTHERINAE

#include "../Felidae.hpp"

class Pantherinae : public Felidae {
public:
	Pantherinae() = default;
	~Pantherinae() = default;
	virtual std::string getLatinName() const override;
	virtual std::string getRussianName() const override;
	virtual std::string getClassification() const override;
	virtual std::string getArea() const;
	virtual std::string getFullInfo() const override;
};

#endif // !PANTHERIA
