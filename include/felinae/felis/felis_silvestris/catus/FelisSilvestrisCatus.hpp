#ifndef FELIS_SILVESTRIS_CATUS
#define FELIS_SILVESTRIS_CATUS

#include "../FelisSilvestris.hpp"

class FelisSilvestrisCatus : public FelisSilvestris {
private:
	std::string characterType;
	std::string favoriteHobby;
public:
	FelisSilvestrisCatus() = default;
	FelisSilvestrisCatus(std::string characterType,
		                 std::string favoriteHobby);
	~FelisSilvestrisCatus() = default;
	virtual std::string getLatinName() const override;
	virtual std::string getRussianName() const override;
	virtual std::string getArea() const override;
	virtual int getAverageWeight() const;
	virtual std::string getPopulation() const;
	virtual std::string getClassification() const override;
	void setCharacterType(std::string characterType);
	std::string getCharacterType() const;
	void setFavoriteHobby(std::string favoriteHobby);
	std::string getFavoriteHobby() const;
	virtual std::string getFullInfo() const override;
};

#endif // !FELIS_SILVESTRIS_CATUS
