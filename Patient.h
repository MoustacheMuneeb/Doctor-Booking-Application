#include"DoctorDetails.h"
class Patient :public DoctorDetails
{
protected:
	char* Pname;  //Patient Name
	int Page;   // Patient Age
	char* checkup;  //this will define if it is a regular checkup or a new one
public:
	void setPname(char*);
	void setPage(int);
	void setcheckup(char*);

	char* getPname();
	char* getcheckup();
	int getPage();

	Patient();
	Patient(char*, char*,int);
	Patient(Patient& obj);
};