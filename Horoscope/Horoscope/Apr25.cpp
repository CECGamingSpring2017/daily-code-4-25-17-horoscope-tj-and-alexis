//made by TJ and Marcio
#include <iostream>
using namespace std;
bool Horoscope(int sign);
int main() {
	int sign;
	cout << "Give me the number of your zodiac sign." << endl;
	cout << "This assumes Capricorn is the first sign." << endl;
	cin >> sign;
	Horoscope(sign);
	if (Horoscope(sign) == true)
		cout << "Your birthday might be in this month, so happy early/late birthday!" << endl;

}
bool Horoscope(int sign){
	switch (sign) {
	case 1: 
		cout << "So, you're a Capricorn?" << endl;
		cout << "This week, you'll have terrible luck." << endl;
		return false;
		break;
	case 2:
		cout << "So, you're an Aquarius?" << endl;
		cout << "This week, you'll meet an old friend again." << endl;
		return false;
		break;
	case 3:
		cout << "So, you're a Pisces?" << endl;
		cout << "you will meet your opposite this week." << endl;
		return false;
		break;
	case 4:
		cout << "So, you're an Aries?" << endl;
		cout << "You should avoid conflict this week." << endl;
		return false;
		break;
	case 5:
		cout << "So, you're a Taurus?" << endl;
		cout << "Prepare to have a terrible experience this week." << endl;
		return true;
		break;
	case 6: 
		cout << "so your a Gemini?" << endl;
		cout << "you will meet your half sibling" << endl;
		return false;
		break;
	case 7:
		cout << "you're a cancer" << endl;
		cout << "avoid your allerigies." << endl;
			return false;
			break;
	case 8:
		cout << "you're a leo "<<endl;
		cout << "be near cats" << endl;
		return false;
		break;
	case 9:
		cout << "you're a virgo" << endl;
		cout << "trust other people i don't know" << endl;
		return false;
		break;
	case 10:
		cout << "You're a Libra?" << endl;
		cout << "Trust your judgement." << endl;
		return false;
		break;
	case 11:
		cout << "You're a Scorpio" << endl;
		cout << "Try not to upset people." << endl;
		return false;
		break;
	case 12:
		cout << "You're a Sagittarius?" << endl;
		cout << "Use your skills to help other people." << endl;
		return false;
		break;
	default:
		cout << "There are only 12 Zodiac signs.  Give me something between one and twelve next time." << endl;
		
	}

}