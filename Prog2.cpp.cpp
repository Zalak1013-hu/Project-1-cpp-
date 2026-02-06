#include<iostream>

using namespace std;

class TimeConverter
{
	int h,m,s,total;
	
	public:
	
	void setTime(int hours,int minutes,int seconds)
	{
		h = hours;
		m = minutes;
		s = seconds;
    }	
    
	void getTotalSeconds()
	{
		total = h * 3600 + m * 60 + s;
		cout << "Total Seconds: " << total << endl;
	}

};
int main()
{
	int hours,minutes,seconds;
	
	cout << "Enter hours: ";
    cin >> hours;

    cout << "Enter minutes: ";
    cin >> minutes;

    cout << "Enter seconds: ";
    cin >> seconds;
    
	TimeConverter t;
	t.setTime(hours,minutes,seconds);
	
	t.getTotalSeconds();
	
    return 0;
} 
