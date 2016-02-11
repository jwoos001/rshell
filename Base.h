#include <iostream>

using namespace std;

class Base{
    public:
		Base() {};
		virtual void execute() = 0;
	private;
		string s;
};

class Connector: public Base{
	private:
		Base* before;
		Base* after;
};
