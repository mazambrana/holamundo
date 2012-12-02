#ifndef CLASE_NUEVA_CPP
#define CLASE_NUEVA_CPP
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

class claseNueva 
{
	private:
		
		int x, y;
		string build_output;
		stringstream sx, sy;
	
	public:
		void read()
		{
			cout << "x = "; cin >> x;
			cout << "y = "; cin >> y;
		}
		
		string view()
		{
			sx << x;
			sy << y;
			build_output =(string)"("+sx.str()+(string)","+sy.str()+(string)")";
			return (build_output); 
		}
		
		void set(int a, int b)
		{
			x=a;
			y=b;
		}
};
#endif  
