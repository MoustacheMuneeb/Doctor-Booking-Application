#include "Patient.h"
void Patient::setPname(char* Pn)
{
	int len = 0;
	for (int i = 0; Pn[i] != '\0'; i++)
	{
		len++;
	}
	Pname = new char[len + 1];
	for (int j = 0; j < len; j++)
	{
		Pname[j] = Pn[j];
	}
	Pname[len] = '\0';
}
void Patient::setPage(int Pa)
{
	Page = Pa;
}
void Patient::setcheckup(char* c)
{
	int len = 0;
	for (int i = 0; c[i] != '\0'; i++)
	{
		len++;
	}
	checkup = new char[len + 1];
	for (int j = 0; j < len; j++)
	{
		checkup[j] = c[j];
	}
	checkup[len] = '\0';
}

char*Patient:: getPname()
{
	return Pname;
}
char*Patient::getcheckup()
{
	return checkup;
}
int Patient::getPage()
{
	return Page;
}

Patient::Patient()
{
	Pname = 0;
	Page = 0;
	checkup = 0;
}
Patient::Patient(char* Pn, char* c, int Pa)
{
	int len = 0;
	for (int i = 0; Pn[i] != '\0'; i++)
	{
		len++;
	}
	Pname = new char[len + 1];
	for (int j = 0; j < len; j++)
	{
		Pname[j] = Pn[j];
	}
	Pname[len] = '\0';


	for (int i = 0; c[i] != '\0'; i++)
	{
		len++;
	}
	checkup = new char[len + 1];
	for (int j = 0; j < len; j++)
	{
		checkup[j] = c[j];
	}
	checkup[len] = '\0';


	Page = Pa;
}
Patient::Patient(Patient& obj)
{
	int len = 0;
	for (int i = 0; obj.Pname[i] != '\0'; i++)
	{
		len++;
	}
	Pname = new char[len + 1];
	for (int j = 0; j < len; j++)
	{
		Pname[j] = obj.Pname[j];
	}
	Pname[len] = '\0';


	for (int i = 0; obj.checkup[i] != '\0'; i++)
	{
		len++;
	}
	checkup = new char[len + 1];
	for (int j = 0; j < len; j++)
	{
		checkup[j] = obj.checkup[j];
	}
	checkup[len] = '\0';


	Page = obj.Page;
}