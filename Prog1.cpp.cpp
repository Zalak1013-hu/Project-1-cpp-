#include<iostream>

using namespace std;

class TimeConverter
{
	 int HH;
	 int MM;
	 int SS;
	 
	public:
	 
	void setSeconds(int totalSeconds)
	{
		HH = totalSeconds / 3600;
		MM = (totalSeconds % 3600) / 60;
		SS = totalSeconds % 60;
	}	
	
	void getTime()
	{
		cout<<"HH:MM:SS->" <<HH<<":"<<MM<<":" <<SS <<endl;
	}
	
};

int main()
{
    int totalSeconds;

    cout << "Enter total seconds: ";
    cin >> totalSeconds;

    TimeConverter t;
    t.setSeconds(totalSeconds);

    t.getTime();

    return 0;
}
