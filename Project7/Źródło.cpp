#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <Windows.h>
using namespace std;
void kropka(int time, int kropki) {

	for (int i = 0; i < kropki; i++) {
		cout << ".";
		Sleep(time);
	}
	cout << endl;
}
void ping(string arg) {
	cout << "Pinging " << arg << " [21.37.14.88] with 32 bytes of data:" << endl;
	for (int i = 0; i < 4; i++) {
		cout << "Reply from 21.37.14.88: bytes=32 time=7ms TTL=55" << endl;
		Sleep(500);
	}
	cout << "Ping statistics for 21.37.14.88:" << endl;
	cout << "    Packets: Sent = 4, Received = 4, Lost = 0 (0% loss)," << endl;
	cout << "Approximate round trip times in milli-seconds:" << endl;
	cout << "    Minimum = 7ms, Maximum = 7ms, Average = 7ms" << endl;
}
int main(int argc, char* argv[]) {
	cout << " _   _            _               _____  _____  _____  _____ " << endl;
	cout << "| | | |          | |             |  _  ||  _  ||  _  ||  _  |" << endl;
	cout << "| |_| | __ _  ___| | _____ _ __  | |_| || |/' || |/' || |/' |" << endl;
	cout << "|  _  |/ _` |/ __| |/ / _ \\ '__| \\____ ||  /| ||  /| ||  /| |" << endl;
	cout << "| | | | (_| | (__|   <  __/ |    .___/ /\\ |_/ /\\ |_/ /\\ |_/ /" << endl;
	cout << "\\_| |_/\\__,_|\\___|_|\\_\\___|_|    \\____/  \\___/  \\___/  \\___/ " << endl;
	cout << endl;
	cout << "loading reverse backdoor proxies";
	kropka(300, 3);
	cout << ">DONE" << endl;
	cout << "going behind 7 proxies";
	kropka(400, 4);
	cout << ">DONE" << endl;
	cout << "exploiting day 9/11 exploit in SSH";
	kropka(200, 6);
	cout << ">DONE" << endl;
	cout << "detecting JIDF instructions";
	kropka(100, 10);
	cout << ">NONE DETECTED" << endl;
	cout << "Breaking into " << argv[1];
	kropka(200, 15);
	cout << ">DONE" << endl << endl << endl << "YOU'RE IN!" << endl << endl;
	while (true) {
		cout << argv[1] << "> ";
		string command, param;
		cin >> command >> param;
		if (command == "ping") {
			ping(param);
		}
		else if (command == "exit") break;
		else {
			cout << "'" << command << "' is not recognized as an internal or external command," << endl;
			cout << "operable program or batch file." << endl;
		}
	}
	return 0;
}