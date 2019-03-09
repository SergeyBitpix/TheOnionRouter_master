///////////////////////////////////////////
//       TheOnionRouter(TOR)_master     //
//                 V1.1                 //
//             By Bitpix(BTX)           //
//      Email:sergey0802058@gmail.com   //
//      VK:https://vk.com/id464962137   //
//             Country:Russia           //
//////////////////////////////////////////

//here everything is clear and without comment

#include <iostream>
#include <fstream>
using namespace std;

int Tor()
{
	cout << "W########################################W" << endl
		<< "W#       TheOnionRouter(TOR)_master     #W" << endl
		<< "W#                 V1.1                 #W" << endl
		<< "W#             By Bitpix(BTX)           #W" << endl
		<< "W#      Email:sergey0802058@gmail.com   #W" << endl
		<< "W#      VK:https://vk.com/id464962137   #W" << endl
		<< "W#             Country:Russia           #W" << endl
		<< "W########################################W" << endl << endl << endl;

	int number;

	cout << "1) Install service TOR without torrc\n"
		<< "2) Install service TOR with torcc\n"
		<< "3) Stop service TOR\n"
		<< "4) Start service TOR\n"
		<< "5) Remove service TOR\n"
		<< "6) Restart service TOR\n"
		<< "7) WinHTTP show TOR proxy\n"
		<< "8) WinHTTP reset TOR proxy\n"
		<< "9) WinHTTP import TOR proxy InternetExplorer\n"
		<< "10) Listen TOR port\n"
		<< "11) Install torcc\n"
		<< "12) Remove torcc\n"
		<< "0) Exit\n";
	cout << "Enter" << ": ";
	cin >> number;
	system("cls");
	if (number < 0 || number > 12)
	{
		cout << "Error" << endl;
		system("pause");
		system("cls");
		return Tor();
	}
	switch (number)
	{
	case 1:
	{
		system("cmd /c \"C:\\Tor\\tor.exe --service install");
		cout << "Completed" << endl;
		system("pause");
		system("cls");
		return Tor();
		break;
	}
	case 2:
	{
		system("cmd /c \"C:\\Tor\\tor.exe --service install -options -f \"C:\\Tor\\torrc");
		cout << "Completed" << endl;
		system("pause");
		system("cls");
		return Tor();
		break;
	}
	case 3:
	{
		system("cmd /c \"C:\\Tor\\tor.exe --service stop");
		cout << "Completed" << endl;
		system("pause");
		system("cls");
		return Tor();
		break;
	}
	case 4:
	{
		system("cmd /c \"C:\\Tor\\tor.exe --service start");
		cout << "Completed" << endl;
		system("pause");
		system("cls");
		return Tor();
		break;
	}
	case 5:
	{
		system("cmd /c \"C:\\Tor\\tor.exe --service remove");
		cout << "Completed" << endl;
		system("pause");
		system("cls");
		return Tor();
		break;
	}
	case 6:
	{
		system("cmd /c \"C:\\Tor\\tor.exe --service stop");
		system("cmd /c \"C:\\Tor\\tor.exe --service start");
		cout << "Completed" << endl;
		system("pause");
		system("cls");
		return Tor();
		break;
	}
	case 7:
	{
		system("netsh winhttp show proxy");
		cout << "Completed" << endl;
		system("pause");
		system("cls");
		return Tor();
		break;
	}
	case 8:
	{
		system("netsh winhttp reset proxy");
		cout << "Completed" << endl;
		system("pause");
		system("cls");
		return Tor();
		break;
	}
	case 9:
	{
		system("netsh winhttp import proxy source=ie");
		cout << "Completed" << endl;
		system("pause");
		system("cls");
		return Tor();
		break;
	}
	case 10:
	{
		system("netstat -aon | findstr :9050");
		cout << "Completed" << endl;
		system("pause");
		system("cls");
		return Tor();
		break;
	}
	case 11:
	{
		ofstream ofs("C:\\Tor\\torcc");
		ofs.close();
		cout << "Completed" << endl;
		system("pause");
		system("cls");
		return Tor();
		break;
	}
	case 12:
	{
		system("DEL / F / S / Q / A \"C:\\Tor\\torcc");
		cout << "Completed" << endl;
		system("pause");
		system("cls");
		return Tor();
		break;
	}
	case 00:
	{
		cout << "Good Bye\n";
		system("pause");
		system("cls");
		return 0;
		break;
	}
	}
}

int data()
{
	ifstream file("C:\\Data\\Tor\\geoip");

	if (file.is_open())
		return Tor();
	else
	{
		cout << "No Data" << endl;
		system("pause");
		system("cls");
		system("\"xcopy Data C:\\Data /S /E \"");
		system("pause");
		system("cls");
		return Tor();
	}
}

int main()
{
	ifstream file("C:\\Tor\\tor.exe");

	if (file.is_open())
		return data();
	else
	{
		cout << "No Tor" << endl;
		system("pause");
		system("cls");
		system("\"xcopy Tor C:\\Tor /S /E \"");
		system("pause");
		system("cls");
		return data();
	}
}