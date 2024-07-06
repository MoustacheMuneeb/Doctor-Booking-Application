#include"Appointment.h"
#include"DoctorDetails.h"
#include"Patient.h"
int main()
{
	DoctorDetails obj;
	Patient obj1;
	Appointment obj2;
	ofstream file("Doctor Ali.txt", ios::app);
	ofstream file1("Doctor Ahmad.txt", ios::app);
	ofstream file2("Doctor Ayesha.txt", ios::app);
	ofstream file3("Doctor Faraz.txt", ios::app);
	char* name = new char[100];    //Patient name
	int age = 0, hour = 0, minute = 0, second = 0;  //Appointment Time
	char* disease = new char[100];  //Patient Disease
	int n = 0,a=0;  //choice variable
	int fee = 0;
	char b,c;
	cout << "\t\t\t\t****Welcome To Doctor Booking Application****\t\t\t\t" << endl;
	cout << "\n\n\n\n" << endl;
	cout << "Press 1 to see the Doctors Menu" << endl;
	cout << "Press 2 to exit the program" << endl;
	cout << "Enter Your choice ->";
	cin >> n;
	switch (n)
	{
	case 1:
		cout << "To see Doctor Ali (Physician), Press 1" << endl;
		cout << "To see Doctor Ahmad (Child Specialist), Press 2" << endl;
		cout << "To see Doctor Ayesha (Nutrionist), Press 3" << endl;
		cout << "To see Doctor Faraz (Surgeon), Press 4" << endl;
		cout << "Press 5 to exit the program" << endl;
		cout << "Enter Your Choice -> ";
		cin >> a;
		switch (a)
		{
		case 1:
			cout << "\t\t\t\tWelcome To Doctor Ali (Physician) Appointment Booking Side\t\t\t\t" << endl;
			file<< "\t\t\t\tWelcome To Doctor Ali (Physician) Appointment Booking Side\t\t\t\t" << endl;
			cout << "Please Enter Your Name for Appointment :" << endl;
			cin.ignore();
			cin.getline(name, 90);
			file << "Please Enter Your Name for Appointment :" << name << endl;
			obj1.setPname(name);
			cout << "Please Enter Your Age :" << endl;
			cin >> age;
			file << "Enter Your Age :" << age << endl;
			obj1.setPage(age);
			cout << "Please Enter Your Disease :" << endl;
			cin.ignore();
			cin.getline(disease, 90);
			file << "Please Enter your disease :" << disease << endl;
			obj1.setcheckup(disease);
			cout << "Please Enter the Time :" << endl;
			cin >> hour >> minute >> second;
			obj2.settime(hour, minute, second);
			cout << "Would you like to confirm your Appointment?" << endl;
			cout << "Y for Yes, N for No, C for Cancelled" << endl;
			cin >> b;
			if (b == 'Y' || b == 'y')
			{
				fee = 11000;
				obj.setfee(fee);
				cout << "Your Booking is Confirmed" << endl;
				cout << "Time :" << hour << ":" << minute << ":" << second << endl;
				cout << "Doctor Fees is " << fee << endl;
				file<< "Your Booking is Confirmed" << endl;
				file << "Time :" << hour << ":" << minute << ":" << second << endl;
				file << "Doctor Fees is " << fee << endl;
				cout << "Would you like to still continue using the program?" << endl;
				cin >> c;
				if (c == 'Y' || c == 'y')
				{
					cout << "Enter Your Choice ->";
					cin >> a;
				}
				else
				{
					break;
				}
			}
			else if (b == 'N' || b =='n')
			{
				cout << "Your Booking has not been placed" << endl;
				file<< "Your Booking has not been placed" << endl;
				cout << "Would you like to still continue using the program?" << endl;
				cin >> c;
				if (c == 'Y' || c == 'y')
				{
					cout << "Enter Your Choice ->";
					cin >> a;
				}
				else
				{
					break;
				}
			}
			else if (b == 'C' || b == 'c')
			{
				cout << "Your Booking has been cancelled" << endl;
				file<< "Your Booking has been cancelled" << endl;
				cout << "Would you like to still continue using the program?" << endl;
				cin >> c;
				if (c == 'Y' || c == 'y')
				{
					cout << "Enter Your Choice ->";
					cin >> a;
				}
				else
				{
					break;
				}
			}
			else
			{
				cout << "Invalid Input" << endl;
				break;
			}
		case 2:
			cout << "\t\t\t\tWelcome To Doctor Ahmad (Child Specialist) Appointment Booking Side\t\t\t\t" << endl;
			file1<< "\t\t\t\tWelcome To Doctor Ahmad (Child Specialist) Appointment Booking Side\t\t\t\t" << endl;
			cout << "Please Enter Your Name for Appointment :" << endl;
			cin.ignore();
			cin.getline(name, 90);
			file1 << "Please Enter Your Name for Appointment :" << name << endl;
			obj1.setPname(name);
			cout << "Please Enter Your Age :" << endl;
			cin >> age;
			file1 << "Please Enter Your Age :" << age << endl;
			obj1.setPage(age);
			cout << "Please Enter Your Disease :" << endl;
			cin.ignore();
			cin.getline(disease, 90);
			file1 << "Please Enter Your Disease :" << disease << endl;
			obj1.setcheckup(disease);
			cout << "Please Enter the Time :" << endl;
			cin >> hour >> minute >> second;
			obj2.settime(hour, minute, second);
			cout << "Would you like to confirm your Appointment?" << endl;
			cout << "Y for Yes, N for No, C for Cancelled" << endl;
			cin >> b;
			if (b == 'Y' || b == 'y')
			{
				fee = 11000;
				obj.setfee(fee);
				cout << "Your Booking is Confirmed" << endl;
				cout << "Time :" << hour << ":" << minute << ":" << second << endl;
				cout << "Doctor Fees is " << fee << endl;
				file1<< "Your Booking is Confirmed" << endl;
				file1 << "Time :" << hour << ":" << minute << ":" << second << endl;
				file1 << "Doctor Fees is " << fee << endl;
				cout << "Would you like to still continue using the program?" << endl;
				cin >> c;
				if (c == 'Y' || c == 'y')
				{
					cout << "Enter Your Choice ->";
					cin >> a;
				}
				else
				{
					break;
				}
			}
			else if (b == 'N' || b == 'n')
			{
				cout << "Your Booking has not been placed" << endl;
				file1 << "Your Booking has not been placed" << endl;
				cout << "Would you like to still continue using the program?" << endl;
				cin >> c;
				if (c == 'Y' || c == 'y')
				{
					cout << "Enter Your Choice ->";
					cin >> a;
				}
				else
				{
					break;
				}
			}
			else if (b == 'C' || b == 'c')
			{
				cout << "Your Booking has been cancelled" << endl;
				file1 << "Your Booking has been cancelled" << endl;
				cout << "Would you like to still continue using the program?" << endl;
				cin >> c;
				if (c == 'Y' || c == 'y')
				{
					cout << "Enter Your Choice ->";
					cin >> a;
				}
				else
				{
					break;
				}
			}
			else
			{
				cout << "Invalid Input" << endl;
				break;
			}
		case 3:
			cout << "\t\t\t\tWelcome To Doctor Ayesha (Nutrionist) Appointment Booking Side\t\t\t\t" << endl;
			file2<< "\t\t\t\tWelcome To Doctor Ayesha (Nutrionist) Appointment Booking Side\t\t\t\t" << endl;
			cout << "Please Enter Your Name for Appointment :" << endl;
			cin.ignore();
			cin.getline(name, 90);
			file2 << "Please Enter Your name for Appointment :" << name << endl;
			obj1.setPname(name);
			cout << "Please Enter Your Age :" << endl;
			cin >> age;
			file2 << "Please Enter Your Age :" << age << endl;
			obj1.setPage(age);
			cout << "Please Enter Your Disease :" << endl;
			cin.ignore();
			cin.getline(disease, 90);
			file2 << "Please Enter Your Disease :" << disease << endl;
			obj1.setcheckup(disease);
			cout << "Please Enter the Time :" << endl;
			cin >> hour >> minute >> second;
			obj2.settime(hour, minute, second);
			cout << "Would you like to confirm your Appointment?" << endl;
			cout << "Y for Yes, N for No, C for Cancelled" << endl;
			cin >> b;
			if (b == 'Y' || b == 'y')
			{
				fee = 11000;
				obj.setfee(fee);
				cout << "Your Booking is Confirmed" << endl;
				cout << "Time :" << hour << ":" << minute << ":" << second << endl;
				cout << "Doctor Fees is " << fee << endl;
				file2<< "Your Booking is Confirmed" << endl;
				file2 << "Time :" << hour << ":" << minute << ":" << second << endl;
				file2 << "Doctor Fees is " << fee << endl;
				cout << "Would you like to still continue using the program?" << endl;
				cin >> c;
				if (c == 'Y' || c == 'y')
				{
					cout << "Enter Your Choice ->";
					cin >> a;
				}
				else
				{
					break;
				}
			}
			else if (b == 'N' || b == 'n')
			{
				cout << "Your Booking has not been placed" << endl;
				file2 << "Your Booking has not been placed" << endl;
				cout << "Would you like to still continue using the program?" << endl;
				cin >> c;
				if (c == 'Y' || c == 'y')
				{
					cout << "Enter Your Choice ->";
					cin >> a;
				}
				else
				{
					break;
				}
			}
			else if (b == 'C' || b == 'c')
			{
				cout << "Your Booking has been cancelled" << endl;
				file2 << "Your Booking has been cancelled" << endl;
				cout << "Would you like to still continue using the program?" << endl;
				cin >> c;
				if (c == 'Y' || c == 'y')
				{
					cout << "Enter Your Choice ->";
					cin >> a;
				}
				else
				{
					break;
				}
			}
			else
			{
				cout << "Invalid Input" << endl;
				break;
			}
		case 4:
			cout << "\t\t\t\tWelcome To Doctor Faraz (Surgeon) Appointment Booking Side\t\t\t\t" << endl;
			file3<< "\t\t\t\tWelcome To Doctor Faraz (Surgeon) Appointment Booking Side\t\t\t\t" << endl;
			cout << "Please Enter Your Name for Appointment :" << endl;
			cin.ignore();
			cin.getline(name, 90);
			file3 << "Please Enter Your Name :" << name << endl;
			obj1.setPname(name);
			cout << "Please Enter Your Age :" << endl;
			cin >> age;
			file3 << "Please Enter Your Age :" << age << endl;
			obj1.setPage(age);
			cout << "Please Enter Your Disease :" << endl;
			cin.ignore();
			cin.getline(disease, 90);
			file3 << "Please Enter Your Disease :" << disease << endl;
			obj1.setcheckup(disease);
			cout << "Please Enter the Time :" << endl;
			cin >> hour >> minute >> second;
			obj2.settime(hour, minute, second);
			cout << "Would you like to confirm your Appointment?" << endl;
			cout << "Y for Yes, N for No, C for Cancelled" << endl;
			cin >> b;
			if (b == 'Y' || b == 'y')
			{
				fee = 11000;
				obj.setfee(fee);
				cout << "Your Booking is Confirmed" << endl;
				cout << "Time :" << hour << ":" << minute << ":" << second << endl;
				cout << "Doctor Fees is " << fee << endl;
				file3 << "Your Booking is Confirmed" << endl;
				file3 << "Time :" << hour << ":" << minute << ":" << second << endl;
				file3 << "Doctor Fees is " << fee << endl;
				cout << "Would you like to still continue using the program?" << endl;
				cin >> c;
				if (c == 'Y' || c == 'y')
				{
					cout << "Enter Your Choice ->";
					cin >> a;
				}
				else
				{
					break;
				}
			}
			else if (b == 'N' || b == 'n')
			{
				cout << "Your Booking has not been placed" << endl;
				file3 << "Your Booking has not been placed" << endl;
				cout << "Would you like to still continue using the program?" << endl;
				cin >> c;
				if (c == 'Y' || c == 'y')
				{
					cout << "Enter Your Choice ->";
					cin >> a;
				}
				else
				{
					break;
				}
			}
			else if (b == 'C' || b == 'c')
			{
				cout << "Your Booking has been cancelled" << endl;
				file3 << "Your Booking has been cancelled" << endl;
				cout << "Would you like to still continue using the program?" << endl;
				cin >> c;
				if (c == 'Y' || c == 'y')
				{
					cout << "Enter Your Choice ->";
					cin >> a;
				}
				else
				{
					break;
				}
			}
			else
			{
				cout << "Invalid Input" << endl;
				break;
			}
		case 5:
			cout << "\t\t\t\tThank you for using our program\t\t\t\t" << endl;
			break;
		}
	case 2:
		cout << "Thank you for using the program" << endl;
		break;
	}
	return 0;
}