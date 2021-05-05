#include "Game.h"
#include "checkML.h"
#include "Tracker.h"
#include "json.hpp"
using json = nlohmann::json;
int main(int argc, char* argv[])
{
	try
	{
		
		Tracker* tracker = Tracker::getInstance();
		tracker->init("Anyaroth","UserTest");
		//std::map<string, string> prop;
		tracker->trackInstantaneousEvent("Login", {});
		
		Game game;
		game.run();
		
		tracker->trackInstantaneousEvent("Logout", {});
		
		tracker->end();
	}
	catch (string& exception)
	{
		cout << exception << endl;
	}

	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

	return 0;
}