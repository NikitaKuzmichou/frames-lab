#ifndef TIGER
#define TIGER

#include "../Panthers.hpp"

class Tiger : public Panthers {
public:
	Tiger() = default;
	~Tiger() = default;
	virtual std::string getLatinName() const override;
	virtual std::string getRussianName() const override;
	virtual std::string getArea() const override;
	virtual std::string getClassification() const override;
	virtual int getAverageWeight() const;
	virtual std::string getPopulation() const;
	virtual std::string getFullInfo() const override;
};

#endif // !TIGER