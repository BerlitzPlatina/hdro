#pragma once

#include <drogon/PubSubService.h>
#include <drogon/WebSocketController.h>

using namespace drogon;

class WebSocketChat : public drogon::WebSocketController<WebSocketChat>
{
  public:
    void handleNewMessage(const WebSocketConnectionPtr &, std::string &&, const WebSocketMessageType &) override;
    void handleNewConnection(const HttpRequestPtr &, const WebSocketConnectionPtr &) override;
    void handleConnectionClosed(const WebSocketConnectionPtr &) override;
    WS_PATH_LIST_BEGIN
    WS_PATH_ADD("/chat", Get);
    WS_PATH_LIST_END
  private:
    PubSubService<std::string> chatRooms_;
};
