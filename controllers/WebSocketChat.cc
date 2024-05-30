#include "WebSocketChat.h"

struct Subscriber
{
    std::string conversationId;
    drogon::SubscriberID id_;
};

void WebSocketChat::handleNewMessage(const WebSocketConnectionPtr &wsConnPtr, std::string &&message,
                                     const WebSocketMessageType &type)
{
    // write your application logic here
    LOG_DEBUG << "new websocket message:" << message;

    if (type == WebSocketMessageType::Ping)
    {
        LOG_DEBUG << "recv a ping";
    }
    else if (type == WebSocketMessageType::Text)
    {
        // create message
        auto &s = wsConnPtr->getContextRef<Subscriber>();
        chatRooms_.publish(s.conversationId, ("Server: " + message));
    }
}

void WebSocketChat::handleConnectionClosed(const WebSocketConnectionPtr &conn)
{
    this->test();
    auto &s = conn->getContextRef<Subscriber>();
    chatRooms_.unsubscribe(s.conversationId, s.id_);
}

void WebSocketChat::test()
{
    LOG_DEBUG << "websocket closed!aaaaaaaaaaaaaaaaaaa";
}

void WebSocketChat::handleNewConnection(const HttpRequestPtr &req, const WebSocketConnectionPtr &conn)
{
    LOG_DEBUG << "new websocket connection!";
    conn->send("haha!!!");
    Subscriber s;
    s.conversationId = req->getParameter("conversation_id");
    LOG_DEBUG << "new websocket connection!" << s.conversationId;

    s.id_ = chatRooms_.subscribe(s.conversationId, [conn](const std::string &topic, const std::string &message) {
        // Supress unused variable warning
        (void)topic;
        conn->send(message);
    });
    conn->setContext(std::make_shared<Subscriber>(std::move(s)));
}
