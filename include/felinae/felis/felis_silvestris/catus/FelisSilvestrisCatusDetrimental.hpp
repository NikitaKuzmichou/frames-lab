#ifndef FELIS_SILVESTRIS_CATUS_DETRIMENTAL
#define FELIS_SILVESTRIS_CATUS_DETRIMENTAL

#include "FelisSilvestrisCatus.hpp"

class FelisSilvestrisCatusDetrimental : public FelisSilvestrisCatus {
private:
	std::string name;
public:
	FelisSilvestrisCatusDetrimental();
	FelisSilvestrisCatusDetrimental(std::string name);
	~FelisSilvestrisCatusDetrimental() = default;
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
