#ifndef PANTHERS
#define PANTHERS

#include "../Pantherinae.hpp"

class Panthers : public Pantherinae {
public:
	Panthers() = default;
	~Panthers() = default;
	virtual std::string getLatinName() const override;
	virtual std::string getRussianName() const override;
	virtual std::string getArea() const override;
	virtual std::string getClassification() const override;
	virtual std::string getFullInfo() const override;
};

#endif // !PANTHERS
