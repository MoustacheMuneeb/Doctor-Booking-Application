#include "Appointment.h"
void Appointment::setaname(char* an)
{
	int len = 0;
	for (int i = 0; an[i] != '\0'; i++)
	{
		len++;
	}
	aname = new char[len + 1];
	for (int j = 0; j < len; j++)
	{
		aname[j] = an[j];
	}
	aname[len] = '\0';
}
void Appointment::settime(int h, int m, int s)
{
	hour = h;
	minute = m;
	second = s;
}

char*Appointment::getaname()
{
	return aname;
}
int Appointment::gettime()
{
	return hour, minute, second;
}

Appointment::Appointment()
{
	aname = 0;
	hour = 0;
	minute = 0;
	second = 0;
}
Appointment::Appointment(char* an, int h, int m, int s)
{
	int len = 0;
	for (int i = 0; an[i] != '\0'; i++)
	{
		len++;
	}
	aname = new char[len + 1];
	for (int j = 0; j < len; j++)
	{
		aname[j] = an[j];
	}
	aname[len] = '\0';

	hour = h;
	minute = m;
	second = s;
}
Appointment::Appointment(Appointment& obj)
{
	int len = 0;
	for (int i = 0; obj.aname[i] != '\0'; i++)
	{
		len++;
	}
	aname = new char[len + 1];
	for (int j = 0; j < len; j++)
	{
		aname[j] = obj.aname[j];
	}
	aname[len] = '\0';


	hour = obj.hour;
	minute = obj.minute;
	second = obj.second;
}