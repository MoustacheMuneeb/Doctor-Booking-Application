#include"DoctorDetails.h"
void DoctorDetails:: setname(char* n)
{
	int len = 0;
	for (int i = 0; n[i] != '\0'; i++)
	{
		len++;
	}
	name = new char[len + 1];
	for (int j = 0; j < len; j++)
	{
		name[j] = n[j];
	}
	name[len] = '\0';
}
void DoctorDetails:: setdegree(char* d)
{
	int len = 0;
	for (int i = 0; d[i] != '\0'; i++)
	{
		len++;
	}
	degree = new char[len + 1];
	for (int j = 0; j < len; j++)
	{
		degree[j] = d[j];
	}
	degree[len] = '\0';
}
void DoctorDetails::setage(int a)
{
	age = a;
}
void DoctorDetails::setspecialist(char* s)
{
	int len = 0;
	for (int i = 0; s[i] != '\0'; i++)
	{
		len++;
	}
	specialist = new char[len + 1];
	for (int j = 0; j < len; j++)
	{
		specialist[j] = s[j];
	}
	specialist[len] = '\0';
}
void DoctorDetails::setfee(float f)
{
	fee = f;
}
char*DoctorDetails::getname()
{
	return name;
}
char*DoctorDetails::getdegree()
{
	return degree;
}
char*DoctorDetails::getspecialist()
{
	return specialist;
}
int DoctorDetails::getage()
{
	return age;
}
float DoctorDetails::getfee()
{
	return fee;
}
DoctorDetails::DoctorDetails()
{
	name = 0;
	age = 0;
	degree = 0;
	specialist = 0;
}
DoctorDetails::DoctorDetails(char* n, char* d, char* s, int a, float f)
{
	int len = 0;
	for (int i = 0; n[i] != '\0'; i++)
	{
		len++;
	}
	name = new char[len + 1];
	for (int j = 0; j < len; j++)
	{
		name[j] = n[j];
	}
	name[len] = '\0';

	for (int i = 0; d[i] != '\0'; i++)
	{
		len++;
	}
	degree = new char[len + 1];
	for (int j = 0; j < len; j++)
	{
		degree[j] = d[j];
	}
	degree[len] = '\0';

	for (int i = 0; s[i] != '\0'; i++)
	{
		len++;
	}
	specialist = new char[len + 1];
	for (int j = 0; j < len; j++)
	{
		specialist[j] = s[j];
	}
	specialist[len] = '\0';


	age = a;

	fee = f;
}
DoctorDetails::DoctorDetails(DoctorDetails& obj)
{
	int len = 0;
	for (int i = 0; obj.name[i] != '\0'; i++)
	{
		len++;
	}
	name = new char[len + 1];
	for (int j = 0; j < len; j++)
	{
		name[j] = obj.name[j];
	}
	name[len] = '\0';

	for (int i = 0; obj.degree[i] != '\0'; i++)
	{
		len++;
	}
	degree = new char[len + 1];
	for (int j = 0; j < len; j++)
	{
		degree[j] = obj.degree[j];
	}
	degree[len] = '\0';

	for (int i = 0; obj.specialist[i] != '\0'; i++)
	{
		len++;
	}
	specialist = new char[len + 1];
	for (int j = 0; j < len; j++)
	{
		specialist[j] = obj.specialist[j];
	}
	specialist[len] = '\0';


	age = obj.age;

	fee = obj.fee;
}