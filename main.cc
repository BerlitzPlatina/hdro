// #include <TestCtrl.cc>
// #include <controllers/WebSocketChat.cc>
#include <drogon/HttpAppFramework.h>
#include <drogon/PubSubService.h>
// #include <drogon/WebSocketController.h>

using namespace drogon;

int main()
{
    // Load config file
    drogon::app().loadConfigFile("config.json");
    app().run();
}