#include"DoctorDetails.h"
class Appointment :public DoctorDetails
{
protected:
	int hour, minute, second;
	char* aname;  //Appointment Name
public:
	void setaname(char*);
	void settime(int, int, int);
	char* getaname();
	int gettime();

	Appointment();
	Appointment(char*, int, int, int);
	Appointment(Appointment& obj);
};