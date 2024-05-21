#include "pch.h"
#include <iostream>
#include "CorePch.h"

#include <thread>

void HelloThread()
{
	cout << "Hello Thread" << endl;
}

int main()
{
	std::thread t(HelloThread);
	
	cout << "Hello Main" << endl;

	t.join();

}