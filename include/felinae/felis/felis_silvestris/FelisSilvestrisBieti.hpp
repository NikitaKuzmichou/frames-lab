#ifndef FELIS_SILVESTRIS_BIETI
#define FELIS_SILVESTRIS_BIETI

#include "../Felis.hpp"

class FelisSilvestrisBieti : public Felis {
public:
	FelisSilvestrisBieti() = default;
	~FelisSilvestrisBieti() = default;
	virtual std::string getLatinName() const override;
	virtual std::string getRussianName() const override;
	virtual std::string getArea() const override;
	virtual int getAverageWeight() const;
	virtual std::string getPopulation() const;
	virtual std::string getClassification() const override;
	virtual std::string getFullInfo() const override;
};

#endif // !FELIS_SILVESTRIS_BIETI
