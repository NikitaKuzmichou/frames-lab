#ifndef PERFECT_FELIS_SILVESTRIS_CATUS
#define PERFECT_FELIS_SILVESTRIS_CATUS

#include "FelisSilvestrisCatus.hpp"

class PerfectFelisSilvestrisCatus : public FelisSilvestrisCatus {
private:
	std::string name;
public:
	PerfectFelisSilvestrisCatus();
	PerfectFelisSilvestrisCatus(std::string name);
	~PerfectFelisSilvestrisCatus() = default;
	virtual std::string getLatinName() const override;
	virtual std::string getRussianName() const override;
	virtual std::string getArea() const override;
	virtual int getAverageWeight() const;
	virtual std::string getPopulation() const;
	virtual std::string getClassification() const override;
	void setName(std::string &name);
	std::string getName() const;
	virtual std::string getFullInfo() const override;
};

#endif // !FELIS_SILVESTRIS_CATUS_DETRIMENTAL
