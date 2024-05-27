/**
 *
 *  UserVerification.cc
 *  DO NOT EDIT. This file is generated by drogon_ctl
 *
 */

#include "UserVerification.h"
#include <drogon/utils/Utilities.h>
#include <string>

using namespace drogon;
using namespace drogon::orm;
using namespace drogon_model::dro;

const std::string UserVerification::Cols::_users_id = "users_id";
const std::string UserVerification::Cols::_verification_code = "verification_code";
const std::string UserVerification::Cols::_created_at = "created_at";
const std::string UserVerification::primaryKeyName = "";
const bool UserVerification::hasPrimaryKey = false;
const std::string UserVerification::tableName = "user_verification";

const std::vector<typename UserVerification::MetaData> UserVerification::metaData_={
{"users_id","int32_t","int",4,0,0,1},
{"verification_code","std::string","varchar(45)",45,0,0,1},
{"created_at","std::string","varchar(45)",45,0,0,1}
};
const std::string &UserVerification::getColumnName(size_t index) noexcept(false)
{
    assert(index < metaData_.size());
    return metaData_[index].colName_;
}
UserVerification::UserVerification(const Row &r, const ssize_t indexOffset) noexcept
{
    if(indexOffset < 0)
    {
        if(!r["users_id"].isNull())
        {
            usersId_=std::make_shared<int32_t>(r["users_id"].as<int32_t>());
        }
        if(!r["verification_code"].isNull())
        {
            verificationCode_=std::make_shared<std::string>(r["verification_code"].as<std::string>());
        }
        if(!r["created_at"].isNull())
        {
            createdAt_=std::make_shared<std::string>(r["created_at"].as<std::string>());
        }
    }
    else
    {
        size_t offset = (size_t)indexOffset;
        if(offset + 3 > r.size())
        {
            LOG_FATAL << "Invalid SQL result for this model";
            return;
        }
        size_t index;
        index = offset + 0;
        if(!r[index].isNull())
        {
            usersId_=std::make_shared<int32_t>(r[index].as<int32_t>());
        }
        index = offset + 1;
        if(!r[index].isNull())
        {
            verificationCode_=std::make_shared<std::string>(r[index].as<std::string>());
        }
        index = offset + 2;
        if(!r[index].isNull())
        {
            createdAt_=std::make_shared<std::string>(r[index].as<std::string>());
        }
    }

}

UserVerification::UserVerification(const Json::Value &pJson, const std::vector<std::string> &pMasqueradingVector) noexcept(false)
{
    if(pMasqueradingVector.size() != 3)
    {
        LOG_ERROR << "Bad masquerading vector";
        return;
    }
    if(!pMasqueradingVector[0].empty() && pJson.isMember(pMasqueradingVector[0]))
    {
        dirtyFlag_[0] = true;
        if(!pJson[pMasqueradingVector[0]].isNull())
        {
            usersId_=std::make_shared<int32_t>((int32_t)pJson[pMasqueradingVector[0]].asInt64());
        }
    }
    if(!pMasqueradingVector[1].empty() && pJson.isMember(pMasqueradingVector[1]))
    {
        dirtyFlag_[1] = true;
        if(!pJson[pMasqueradingVector[1]].isNull())
        {
            verificationCode_=std::make_shared<std::string>(pJson[pMasqueradingVector[1]].asString());
        }
    }
    if(!pMasqueradingVector[2].empty() && pJson.isMember(pMasqueradingVector[2]))
    {
        dirtyFlag_[2] = true;
        if(!pJson[pMasqueradingVector[2]].isNull())
        {
            createdAt_=std::make_shared<std::string>(pJson[pMasqueradingVector[2]].asString());
        }
    }
}

UserVerification::UserVerification(const Json::Value &pJson) noexcept(false)
{
    if(pJson.isMember("users_id"))
    {
        dirtyFlag_[0]=true;
        if(!pJson["users_id"].isNull())
        {
            usersId_=std::make_shared<int32_t>((int32_t)pJson["users_id"].asInt64());
        }
    }
    if(pJson.isMember("verification_code"))
    {
        dirtyFlag_[1]=true;
        if(!pJson["verification_code"].isNull())
        {
            verificationCode_=std::make_shared<std::string>(pJson["verification_code"].asString());
        }
    }
    if(pJson.isMember("created_at"))
    {
        dirtyFlag_[2]=true;
        if(!pJson["created_at"].isNull())
        {
            createdAt_=std::make_shared<std::string>(pJson["created_at"].asString());
        }
    }
}

void UserVerification::updateByMasqueradedJson(const Json::Value &pJson,
                                            const std::vector<std::string> &pMasqueradingVector) noexcept(false)
{
    if(pMasqueradingVector.size() != 3)
    {
        LOG_ERROR << "Bad masquerading vector";
        return;
    }
    if(!pMasqueradingVector[0].empty() && pJson.isMember(pMasqueradingVector[0]))
    {
        dirtyFlag_[0] = true;
        if(!pJson[pMasqueradingVector[0]].isNull())
        {
            usersId_=std::make_shared<int32_t>((int32_t)pJson[pMasqueradingVector[0]].asInt64());
        }
    }
    if(!pMasqueradingVector[1].empty() && pJson.isMember(pMasqueradingVector[1]))
    {
        dirtyFlag_[1] = true;
        if(!pJson[pMasqueradingVector[1]].isNull())
        {
            verificationCode_=std::make_shared<std::string>(pJson[pMasqueradingVector[1]].asString());
        }
    }
    if(!pMasqueradingVector[2].empty() && pJson.isMember(pMasqueradingVector[2]))
    {
        dirtyFlag_[2] = true;
        if(!pJson[pMasqueradingVector[2]].isNull())
        {
            createdAt_=std::make_shared<std::string>(pJson[pMasqueradingVector[2]].asString());
        }
    }
}

void UserVerification::updateByJson(const Json::Value &pJson) noexcept(false)
{
    if(pJson.isMember("users_id"))
    {
        dirtyFlag_[0] = true;
        if(!pJson["users_id"].isNull())
        {
            usersId_=std::make_shared<int32_t>((int32_t)pJson["users_id"].asInt64());
        }
    }
    if(pJson.isMember("verification_code"))
    {
        dirtyFlag_[1] = true;
        if(!pJson["verification_code"].isNull())
        {
            verificationCode_=std::make_shared<std::string>(pJson["verification_code"].asString());
        }
    }
    if(pJson.isMember("created_at"))
    {
        dirtyFlag_[2] = true;
        if(!pJson["created_at"].isNull())
        {
            createdAt_=std::make_shared<std::string>(pJson["created_at"].asString());
        }
    }
}

const int32_t &UserVerification::getValueOfUsersId() const noexcept
{
    static const int32_t defaultValue = int32_t();
    if(usersId_)
        return *usersId_;
    return defaultValue;
}
const std::shared_ptr<int32_t> &UserVerification::getUsersId() const noexcept
{
    return usersId_;
}
void UserVerification::setUsersId(const int32_t &pUsersId) noexcept
{
    usersId_ = std::make_shared<int32_t>(pUsersId);
    dirtyFlag_[0] = true;
}

const std::string &UserVerification::getValueOfVerificationCode() const noexcept
{
    static const std::string defaultValue = std::string();
    if(verificationCode_)
        return *verificationCode_;
    return defaultValue;
}
const std::shared_ptr<std::string> &UserVerification::getVerificationCode() const noexcept
{
    return verificationCode_;
}
void UserVerification::setVerificationCode(const std::string &pVerificationCode) noexcept
{
    verificationCode_ = std::make_shared<std::string>(pVerificationCode);
    dirtyFlag_[1] = true;
}
void UserVerification::setVerificationCode(std::string &&pVerificationCode) noexcept
{
    verificationCode_ = std::make_shared<std::string>(std::move(pVerificationCode));
    dirtyFlag_[1] = true;
}

const std::string &UserVerification::getValueOfCreatedAt() const noexcept
{
    static const std::string defaultValue = std::string();
    if(createdAt_)
        return *createdAt_;
    return defaultValue;
}
const std::shared_ptr<std::string> &UserVerification::getCreatedAt() const noexcept
{
    return createdAt_;
}
void UserVerification::setCreatedAt(const std::string &pCreatedAt) noexcept
{
    createdAt_ = std::make_shared<std::string>(pCreatedAt);
    dirtyFlag_[2] = true;
}
void UserVerification::setCreatedAt(std::string &&pCreatedAt) noexcept
{
    createdAt_ = std::make_shared<std::string>(std::move(pCreatedAt));
    dirtyFlag_[2] = true;
}

void UserVerification::updateId(const uint64_t id)
{
}

const std::vector<std::string> &UserVerification::insertColumns() noexcept
{
    static const std::vector<std::string> inCols={
        "users_id",
        "verification_code",
        "created_at"
    };
    return inCols;
}

void UserVerification::outputArgs(drogon::orm::internal::SqlBinder &binder) const
{
    if(dirtyFlag_[0])
    {
        if(getUsersId())
        {
            binder << getValueOfUsersId();
        }
        else
        {
            binder << nullptr;
        }
    }
    if(dirtyFlag_[1])
    {
        if(getVerificationCode())
        {
            binder << getValueOfVerificationCode();
        }
        else
        {
            binder << nullptr;
        }
    }
    if(dirtyFlag_[2])
    {
        if(getCreatedAt())
        {
            binder << getValueOfCreatedAt();
        }
        else
        {
            binder << nullptr;
        }
    }
}

const std::vector<std::string> UserVerification::updateColumns() const
{
    std::vector<std::string> ret;
    if(dirtyFlag_[0])
    {
        ret.push_back(getColumnName(0));
    }
    if(dirtyFlag_[1])
    {
        ret.push_back(getColumnName(1));
    }
    if(dirtyFlag_[2])
    {
        ret.push_back(getColumnName(2));
    }
    return ret;
}

void UserVerification::updateArgs(drogon::orm::internal::SqlBinder &binder) const
{
    if(dirtyFlag_[0])
    {
        if(getUsersId())
        {
            binder << getValueOfUsersId();
        }
        else
        {
            binder << nullptr;
        }
    }
    if(dirtyFlag_[1])
    {
        if(getVerificationCode())
        {
            binder << getValueOfVerificationCode();
        }
        else
        {
            binder << nullptr;
        }
    }
    if(dirtyFlag_[2])
    {
        if(getCreatedAt())
        {
            binder << getValueOfCreatedAt();
        }
        else
        {
            binder << nullptr;
        }
    }
}
Json::Value UserVerification::toJson() const
{
    Json::Value ret;
    if(getUsersId())
    {
        ret["users_id"]=getValueOfUsersId();
    }
    else
    {
        ret["users_id"]=Json::Value();
    }
    if(getVerificationCode())
    {
        ret["verification_code"]=getValueOfVerificationCode();
    }
    else
    {
        ret["verification_code"]=Json::Value();
    }
    if(getCreatedAt())
    {
        ret["created_at"]=getValueOfCreatedAt();
    }
    else
    {
        ret["created_at"]=Json::Value();
    }
    return ret;
}

Json::Value UserVerification::toMasqueradedJson(
    const std::vector<std::string> &pMasqueradingVector) const
{
    Json::Value ret;
    if(pMasqueradingVector.size() == 3)
    {
        if(!pMasqueradingVector[0].empty())
        {
            if(getUsersId())
            {
                ret[pMasqueradingVector[0]]=getValueOfUsersId();
            }
            else
            {
                ret[pMasqueradingVector[0]]=Json::Value();
            }
        }
        if(!pMasqueradingVector[1].empty())
        {
            if(getVerificationCode())
            {
                ret[pMasqueradingVector[1]]=getValueOfVerificationCode();
            }
            else
            {
                ret[pMasqueradingVector[1]]=Json::Value();
            }
        }
        if(!pMasqueradingVector[2].empty())
        {
            if(getCreatedAt())
            {
                ret[pMasqueradingVector[2]]=getValueOfCreatedAt();
            }
            else
            {
                ret[pMasqueradingVector[2]]=Json::Value();
            }
        }
        return ret;
    }
    LOG_ERROR << "Masquerade failed";
    if(getUsersId())
    {
        ret["users_id"]=getValueOfUsersId();
    }
    else
    {
        ret["users_id"]=Json::Value();
    }
    if(getVerificationCode())
    {
        ret["verification_code"]=getValueOfVerificationCode();
    }
    else
    {
        ret["verification_code"]=Json::Value();
    }
    if(getCreatedAt())
    {
        ret["created_at"]=getValueOfCreatedAt();
    }
    else
    {
        ret["created_at"]=Json::Value();
    }
    return ret;
}

bool UserVerification::validateJsonForCreation(const Json::Value &pJson, std::string &err)
{
    if(pJson.isMember("users_id"))
    {
        if(!validJsonOfField(0, "users_id", pJson["users_id"], err, true))
            return false;
    }
    else
    {
        err="The users_id column cannot be null";
        return false;
    }
    if(pJson.isMember("verification_code"))
    {
        if(!validJsonOfField(1, "verification_code", pJson["verification_code"], err, true))
            return false;
    }
    else
    {
        err="The verification_code column cannot be null";
        return false;
    }
    if(pJson.isMember("created_at"))
    {
        if(!validJsonOfField(2, "created_at", pJson["created_at"], err, true))
            return false;
    }
    else
    {
        err="The created_at column cannot be null";
        return false;
    }
    return true;
}
bool UserVerification::validateMasqueradedJsonForCreation(const Json::Value &pJson,
                                                          const std::vector<std::string> &pMasqueradingVector,
                                                          std::string &err)
{
    if(pMasqueradingVector.size() != 3)
    {
        err = "Bad masquerading vector";
        return false;
    }
    try {
      if(!pMasqueradingVector[0].empty())
      {
          if(pJson.isMember(pMasqueradingVector[0]))
          {
              if(!validJsonOfField(0, pMasqueradingVector[0], pJson[pMasqueradingVector[0]], err, true))
                  return false;
          }
        else
        {
            err="The " + pMasqueradingVector[0] + " column cannot be null";
            return false;
        }
      }
      if(!pMasqueradingVector[1].empty())
      {
          if(pJson.isMember(pMasqueradingVector[1]))
          {
              if(!validJsonOfField(1, pMasqueradingVector[1], pJson[pMasqueradingVector[1]], err, true))
                  return false;
          }
        else
        {
            err="The " + pMasqueradingVector[1] + " column cannot be null";
            return false;
        }
      }
      if(!pMasqueradingVector[2].empty())
      {
          if(pJson.isMember(pMasqueradingVector[2]))
          {
              if(!validJsonOfField(2, pMasqueradingVector[2], pJson[pMasqueradingVector[2]], err, true))
                  return false;
          }
        else
        {
            err="The " + pMasqueradingVector[2] + " column cannot be null";
            return false;
        }
      }
    }
    catch(const Json::LogicError &e)
    {
      err = e.what();
      return false;
    }
    return true;
}
bool UserVerification::validateJsonForUpdate(const Json::Value &pJson, std::string &err)
{
    if(pJson.isMember("users_id"))
    {
        if(!validJsonOfField(0, "users_id", pJson["users_id"], err, false))
            return false;
    }
    if(pJson.isMember("verification_code"))
    {
        if(!validJsonOfField(1, "verification_code", pJson["verification_code"], err, false))
            return false;
    }
    if(pJson.isMember("created_at"))
    {
        if(!validJsonOfField(2, "created_at", pJson["created_at"], err, false))
            return false;
    }
    return true;
}
bool UserVerification::validateMasqueradedJsonForUpdate(const Json::Value &pJson,
                                                        const std::vector<std::string> &pMasqueradingVector,
                                                        std::string &err)
{
    if(pMasqueradingVector.size() != 3)
    {
        err = "Bad masquerading vector";
        return false;
    }
    try {
      if(!pMasqueradingVector[0].empty() && pJson.isMember(pMasqueradingVector[0]))
      {
          if(!validJsonOfField(0, pMasqueradingVector[0], pJson[pMasqueradingVector[0]], err, false))
              return false;
      }
      if(!pMasqueradingVector[1].empty() && pJson.isMember(pMasqueradingVector[1]))
      {
          if(!validJsonOfField(1, pMasqueradingVector[1], pJson[pMasqueradingVector[1]], err, false))
              return false;
      }
      if(!pMasqueradingVector[2].empty() && pJson.isMember(pMasqueradingVector[2]))
      {
          if(!validJsonOfField(2, pMasqueradingVector[2], pJson[pMasqueradingVector[2]], err, false))
              return false;
      }
    }
    catch(const Json::LogicError &e)
    {
      err = e.what();
      return false;
    }
    return true;
}
bool UserVerification::validJsonOfField(size_t index,
                                        const std::string &fieldName,
                                        const Json::Value &pJson,
                                        std::string &err,
                                        bool isForCreation)
{
    switch(index)
    {
        case 0:
            if(pJson.isNull())
            {
                err="The " + fieldName + " column cannot be null";
                return false;
            }
            if(!pJson.isInt())
            {
                err="Type error in the "+fieldName+" field";
                return false;
            }
            break;
        case 1:
            if(pJson.isNull())
            {
                err="The " + fieldName + " column cannot be null";
                return false;
            }
            if(!pJson.isString())
            {
                err="Type error in the "+fieldName+" field";
                return false;
            }
            // asString().length() creates a string object, is there any better way to validate the length?
            if(pJson.isString() && pJson.asString().length() > 45)
            {
                err="String length exceeds limit for the " +
                    fieldName +
                    " field (the maximum value is 45)";
                return false;
            }

            break;
        case 2:
            if(pJson.isNull())
            {
                err="The " + fieldName + " column cannot be null";
                return false;
            }
            if(!pJson.isString())
            {
                err="Type error in the "+fieldName+" field";
                return false;
            }
            // asString().length() creates a string object, is there any better way to validate the length?
            if(pJson.isString() && pJson.asString().length() > 45)
            {
                err="String length exceeds limit for the " +
                    fieldName +
                    " field (the maximum value is 45)";
                return false;
            }

            break;
        default:
            err="Internal error in the server";
            return false;
    }
    return true;
}
