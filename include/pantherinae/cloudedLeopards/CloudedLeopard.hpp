#ifndef CLOUDED_LEOPARD
#define CLOUDED_LEOPARD

#include "CloudedLeopards.hpp"

class CloudedLeopard : public CloudedLeopards {
public:
	CloudedLeopard() = default;
	~CloudedLeopard() = default;
	virtual std::string getLatinName() const override;
	virtual std::string getRussianName() const override;
	virtual std::string getArea() const override;
	virtual std::string getClassification() const override;
	virtual int getAverageWeight() const;
	virtual std::string getPopulation() const;
	virtual std::string getFullInfo() const override;
};

#endif // !CLOUDED_LEOPARD
