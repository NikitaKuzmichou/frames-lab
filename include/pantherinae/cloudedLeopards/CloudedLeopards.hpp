#ifndef CLOUDED_LEOPARDS
#define CLOUDED_LEOPARDS

#include "../Pantherinae.hpp"

class CloudedLeopards : public Pantherinae {
public:
	virtual std::string getLatinName() const override;
	virtual std::string getRussianName() const override;
	virtual std::string getArea() const override;
	virtual std::string getClassification() const override;
	virtual std::string getFullInfo() const override;
};

#endif // !CLOUDED_LEOPARDS
