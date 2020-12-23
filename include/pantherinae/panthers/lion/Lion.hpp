#ifndef LION
#define LION

#include "../Panthers.hpp"

class Lion : public Panthers {
public:
	Lion() = default;
	~Lion() = default;
	virtual std::string getLatinName() const override;
	virtual std::string getRussianName() const override;
	virtual std::string getArea() const override;
	virtual int getAverageWeight() const;
	virtual std::string getClassification() const override;
	virtual std::string getPopulation() const;
	virtual std::string getFullInfo() const override;
};

#endif // !LION