/**
 *
 *  drowave_v1_UserController.h
 *  This file is generated by drogon_ctl
 *
 */

#pragma once

#include "../../models/Users.h"
// #include "./models/Users.h"
#include <drogon/HttpController.h>

using namespace drogon;
using namespace drogon_model::dro;

namespace drowave
{
namespace v1
{
/**
 * @brief this class is created by the drogon_ctl command (drogon_ctl create controller -r drowave::v1::UserController).
 * this class is a restful API controller.
 */
class UserController : public drogon::HttpController<UserController>
{
  public:
    METHOD_LIST_BEGIN
    // use METHOD_ADD to add your custom processing function here;
    // METHOD_ADD(UserController::getOne, "/{1}", Get, Options);
    ADD_METHOD_TO(UserController::get, "/v1/users", Get, Options);
    // METHOD_ADD(UserController::create, "", Post, Options);
    // METHOD_ADD(UserController::updateOne, "/{1}", Put, Options);
    // METHOD_ADD(UserController::update,"",Put,Options);
    // METHOD_ADD(UserController::deleteOne, "/{1}", Delete, Options);
    METHOD_LIST_END

    void getOne(const HttpRequestPtr &req, std::function<void(const HttpResponsePtr &)> &&callback, std::string &&id);
    void updateOne(const HttpRequestPtr &req, std::function<void(const HttpResponsePtr &)> &&callback,
                   std::string &&id);
    void deleteOne(const HttpRequestPtr &req, std::function<void(const HttpResponsePtr &)> &&callback,
                   std::string &&id);
    void get(const HttpRequestPtr &req, std::function<void(const HttpResponsePtr &)> &&callback, Users &&pNewUser);
    void create(const HttpRequestPtr &req, std::function<void(const HttpResponsePtr &)> &&callback);

    //    void update(const HttpRequestPtr &req,
    //                std::function<void(const HttpResponsePtr &)> &&callback);
};
} // namespace v1
} // namespace drowave
