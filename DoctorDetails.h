#include<iostream>
#include<fstream>
#ifndef DoctorDetails_class
#define DoctorDetails_class
using namespace std;
class DoctorDetails
{
protected:
	char* name;
	char* degree;
	int age;
	char* specialist;
	float fee;
public:
	void setname(char*);
	void setage(int);
	void setdegree(char*);
	void setfee(float);
	void setspecialist(char*);

	char* getname();
	char* getdegree();
	char* getspecialist();
	float getfee();
	int getage();

	DoctorDetails();
	DoctorDetails(char*, char*, char* ,int, float);
	DoctorDetails(DoctorDetails& obj);
};
#endif