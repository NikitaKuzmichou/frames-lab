#ifndef FELIS_SILVESTRIS
#define FELIS_SILVESTRIS

#include "../Felis.hpp"

class FelisSilvestris : public Felis {
public:
	FelisSilvestris() = default;
	~FelisSilvestris() = default;
	virtual std::string getLatinName() const override;
	virtual std::string getRussianName() const override;
	virtual std::string getArea() const override;
	virtual int getAverageWeight() const;
	virtual std::string getPopulation() const;
	virtual std::string getClassification() const override;
	virtual std::string getFullInfo() const override;
};

#endif // !FELIS_SILVESTRIS
