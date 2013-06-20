#ifndef NIXIETUBE_H_
#define NIXIETUBE_H_

/**
 * Represents the capabilities of a nixie tube
 *
 * @Author Michael W. Losinski
 * @Created Mar 27, 2013
 */
class NixieTube
{
public:

	/**
	 * @param number: the initial number to be shown on the nixie tube
	 * @param brightness: the percent of brightness for the nixie tube
	 */
	NixieTube(int number, float value);

	/**
	 * Sets the nixie tubes digit.
	 * @param 0 <= value <= 9
	 */
	virtual void setNumber(int value);

	/**
	 * Sets the brightness of the tube
	 * @param 0 <= value <= 1
	 */
	virtual void setBrightness(float value);

private:

	int m_number;
	float m_brightness;
};

#endif
