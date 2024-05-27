/**
 *
 *  Reports.cc
 *  DO NOT EDIT. This file is generated by drogon_ctl
 *
 */

#include "Reports.h"
#include <drogon/utils/Utilities.h>
#include <string>

using namespace drogon;
using namespace drogon::orm;
using namespace drogon_model::dro;

const std::string Reports::Cols::_id = "id";
const std::string Reports::Cols::_users_id = "users_id";
const std::string Reports::Cols::_participants_id = "participants_id";
const std::string Reports::Cols::_report_type = "report_type";
const std::string Reports::Cols::_notes = "notes";
const std::string Reports::Cols::_status = "status";
const std::string Reports::Cols::_created_at = "created_at";
const std::string Reports::primaryKeyName = "id";
const bool Reports::hasPrimaryKey = true;
const std::string Reports::tableName = "reports";

const std::vector<typename Reports::MetaData> Reports::metaData_={
{"id","int32_t","int",4,1,1,1},
{"users_id","int32_t","int",4,0,0,1},
{"participants_id","int32_t","int",4,0,0,1},
{"report_type","std::string","varchar(45)",45,0,0,1},
{"notes","std::string","text",0,0,0,1},
{"status","std::string","enum('pending','resolved')",0,0,0,1},
{"created_at","::trantor::Date","datetime",0,0,0,1}
};
const std::string &Reports::getColumnName(size_t index) noexcept(false)
{
    assert(index < metaData_.size());
    return metaData_[index].colName_;
}
Reports::Reports(const Row &r, const ssize_t indexOffset) noexcept
{
    if(indexOffset < 0)
    {
        if(!r["id"].isNull())
        {
            id_=std::make_shared<int32_t>(r["id"].as<int32_t>());
        }
        if(!r["users_id"].isNull())
        {
            usersId_=std::make_shared<int32_t>(r["users_id"].as<int32_t>());
        }
        if(!r["participants_id"].isNull())
        {
            participantsId_=std::make_shared<int32_t>(r["participants_id"].as<int32_t>());
        }
        if(!r["report_type"].isNull())
        {
            reportType_=std::make_shared<std::string>(r["report_type"].as<std::string>());
        }
        if(!r["notes"].isNull())
        {
            notes_=std::make_shared<std::string>(r["notes"].as<std::string>());
        }
        if(!r["status"].isNull())
        {
            status_=std::make_shared<std::string>(r["status"].as<std::string>());
        }
        if(!r["created_at"].isNull())
        {
            auto timeStr = r["created_at"].as<std::string>();
            struct tm stm;
            memset(&stm,0,sizeof(stm));
            auto p = strptime(timeStr.c_str(),"%Y-%m-%d %H:%M:%S",&stm);
            time_t t = mktime(&stm);
            size_t decimalNum = 0;
            if(p)
            {
                if(*p=='.')
                {
                    std::string decimals(p+1,&timeStr[timeStr.length()]);
                    while(decimals.length()<6)
                    {
                        decimals += "0";
                    }
                    decimalNum = (size_t)atol(decimals.c_str());
                }
                createdAt_=std::make_shared<::trantor::Date>(t*1000000+decimalNum);
            }
        }
    }
    else
    {
        size_t offset = (size_t)indexOffset;
        if(offset + 7 > r.size())
        {
            LOG_FATAL << "Invalid SQL result for this model";
            return;
        }
        size_t index;
        index = offset + 0;
        if(!r[index].isNull())
        {
            id_=std::make_shared<int32_t>(r[index].as<int32_t>());
        }
        index = offset + 1;
        if(!r[index].isNull())
        {
            usersId_=std::make_shared<int32_t>(r[index].as<int32_t>());
        }
        index = offset + 2;
        if(!r[index].isNull())
        {
            participantsId_=std::make_shared<int32_t>(r[index].as<int32_t>());
        }
        index = offset + 3;
        if(!r[index].isNull())
        {
            reportType_=std::make_shared<std::string>(r[index].as<std::string>());
        }
        index = offset + 4;
        if(!r[index].isNull())
        {
            notes_=std::make_shared<std::string>(r[index].as<std::string>());
        }
        index = offset + 5;
        if(!r[index].isNull())
        {
            status_=std::make_shared<std::string>(r[index].as<std::string>());
        }
        index = offset + 6;
        if(!r[index].isNull())
        {
            auto timeStr = r[index].as<std::string>();
            struct tm stm;
            memset(&stm,0,sizeof(stm));
            auto p = strptime(timeStr.c_str(),"%Y-%m-%d %H:%M:%S",&stm);
            time_t t = mktime(&stm);
            size_t decimalNum = 0;
            if(p)
            {
                if(*p=='.')
                {
                    std::string decimals(p+1,&timeStr[timeStr.length()]);
                    while(decimals.length()<6)
                    {
                        decimals += "0";
                    }
                    decimalNum = (size_t)atol(decimals.c_str());
                }
                createdAt_=std::make_shared<::trantor::Date>(t*1000000+decimalNum);
            }
        }
    }

}

Reports::Reports(const Json::Value &pJson, const std::vector<std::string> &pMasqueradingVector) noexcept(false)
{
    if(pMasqueradingVector.size() != 7)
    {
        LOG_ERROR << "Bad masquerading vector";
        return;
    }
    if(!pMasqueradingVector[0].empty() && pJson.isMember(pMasqueradingVector[0]))
    {
        dirtyFlag_[0] = true;
        if(!pJson[pMasqueradingVector[0]].isNull())
        {
            id_=std::make_shared<int32_t>((int32_t)pJson[pMasqueradingVector[0]].asInt64());
        }
    }
    if(!pMasqueradingVector[1].empty() && pJson.isMember(pMasqueradingVector[1]))
    {
        dirtyFlag_[1] = true;
        if(!pJson[pMasqueradingVector[1]].isNull())
        {
            usersId_=std::make_shared<int32_t>((int32_t)pJson[pMasqueradingVector[1]].asInt64());
        }
    }
    if(!pMasqueradingVector[2].empty() && pJson.isMember(pMasqueradingVector[2]))
    {
        dirtyFlag_[2] = true;
        if(!pJson[pMasqueradingVector[2]].isNull())
        {
            participantsId_=std::make_shared<int32_t>((int32_t)pJson[pMasqueradingVector[2]].asInt64());
        }
    }
    if(!pMasqueradingVector[3].empty() && pJson.isMember(pMasqueradingVector[3]))
    {
        dirtyFlag_[3] = true;
        if(!pJson[pMasqueradingVector[3]].isNull())
        {
            reportType_=std::make_shared<std::string>(pJson[pMasqueradingVector[3]].asString());
        }
    }
    if(!pMasqueradingVector[4].empty() && pJson.isMember(pMasqueradingVector[4]))
    {
        dirtyFlag_[4] = true;
        if(!pJson[pMasqueradingVector[4]].isNull())
        {
            notes_=std::make_shared<std::string>(pJson[pMasqueradingVector[4]].asString());
        }
    }
    if(!pMasqueradingVector[5].empty() && pJson.isMember(pMasqueradingVector[5]))
    {
        dirtyFlag_[5] = true;
        if(!pJson[pMasqueradingVector[5]].isNull())
        {
            status_=std::make_shared<std::string>(pJson[pMasqueradingVector[5]].asString());
        }
    }
    if(!pMasqueradingVector[6].empty() && pJson.isMember(pMasqueradingVector[6]))
    {
        dirtyFlag_[6] = true;
        if(!pJson[pMasqueradingVector[6]].isNull())
        {
            auto timeStr = pJson[pMasqueradingVector[6]].asString();
            struct tm stm;
            memset(&stm,0,sizeof(stm));
            auto p = strptime(timeStr.c_str(),"%Y-%m-%d %H:%M:%S",&stm);
            time_t t = mktime(&stm);
            size_t decimalNum = 0;
            if(p)
            {
                if(*p=='.')
                {
                    std::string decimals(p+1,&timeStr[timeStr.length()]);
                    while(decimals.length()<6)
                    {
                        decimals += "0";
                    }
                    decimalNum = (size_t)atol(decimals.c_str());
                }
                createdAt_=std::make_shared<::trantor::Date>(t*1000000+decimalNum);
            }
        }
    }
}

Reports::Reports(const Json::Value &pJson) noexcept(false)
{
    if(pJson.isMember("id"))
    {
        dirtyFlag_[0]=true;
        if(!pJson["id"].isNull())
        {
            id_=std::make_shared<int32_t>((int32_t)pJson["id"].asInt64());
        }
    }
    if(pJson.isMember("users_id"))
    {
        dirtyFlag_[1]=true;
        if(!pJson["users_id"].isNull())
        {
            usersId_=std::make_shared<int32_t>((int32_t)pJson["users_id"].asInt64());
        }
    }
    if(pJson.isMember("participants_id"))
    {
        dirtyFlag_[2]=true;
        if(!pJson["participants_id"].isNull())
        {
            participantsId_=std::make_shared<int32_t>((int32_t)pJson["participants_id"].asInt64());
        }
    }
    if(pJson.isMember("report_type"))
    {
        dirtyFlag_[3]=true;
        if(!pJson["report_type"].isNull())
        {
            reportType_=std::make_shared<std::string>(pJson["report_type"].asString());
        }
    }
    if(pJson.isMember("notes"))
    {
        dirtyFlag_[4]=true;
        if(!pJson["notes"].isNull())
        {
            notes_=std::make_shared<std::string>(pJson["notes"].asString());
        }
    }
    if(pJson.isMember("status"))
    {
        dirtyFlag_[5]=true;
        if(!pJson["status"].isNull())
        {
            status_=std::make_shared<std::string>(pJson["status"].asString());
        }
    }
    if(pJson.isMember("created_at"))
    {
        dirtyFlag_[6]=true;
        if(!pJson["created_at"].isNull())
        {
            auto timeStr = pJson["created_at"].asString();
            struct tm stm;
            memset(&stm,0,sizeof(stm));
            auto p = strptime(timeStr.c_str(),"%Y-%m-%d %H:%M:%S",&stm);
            time_t t = mktime(&stm);
            size_t decimalNum = 0;
            if(p)
            {
                if(*p=='.')
                {
                    std::string decimals(p+1,&timeStr[timeStr.length()]);
                    while(decimals.length()<6)
                    {
                        decimals += "0";
                    }
                    decimalNum = (size_t)atol(decimals.c_str());
                }
                createdAt_=std::make_shared<::trantor::Date>(t*1000000+decimalNum);
            }
        }
    }
}

void Reports::updateByMasqueradedJson(const Json::Value &pJson,
                                            const std::vector<std::string> &pMasqueradingVector) noexcept(false)
{
    if(pMasqueradingVector.size() != 7)
    {
        LOG_ERROR << "Bad masquerading vector";
        return;
    }
    if(!pMasqueradingVector[0].empty() && pJson.isMember(pMasqueradingVector[0]))
    {
        if(!pJson[pMasqueradingVector[0]].isNull())
        {
            id_=std::make_shared<int32_t>((int32_t)pJson[pMasqueradingVector[0]].asInt64());
        }
    }
    if(!pMasqueradingVector[1].empty() && pJson.isMember(pMasqueradingVector[1]))
    {
        dirtyFlag_[1] = true;
        if(!pJson[pMasqueradingVector[1]].isNull())
        {
            usersId_=std::make_shared<int32_t>((int32_t)pJson[pMasqueradingVector[1]].asInt64());
        }
    }
    if(!pMasqueradingVector[2].empty() && pJson.isMember(pMasqueradingVector[2]))
    {
        dirtyFlag_[2] = true;
        if(!pJson[pMasqueradingVector[2]].isNull())
        {
            participantsId_=std::make_shared<int32_t>((int32_t)pJson[pMasqueradingVector[2]].asInt64());
        }
    }
    if(!pMasqueradingVector[3].empty() && pJson.isMember(pMasqueradingVector[3]))
    {
        dirtyFlag_[3] = true;
        if(!pJson[pMasqueradingVector[3]].isNull())
        {
            reportType_=std::make_shared<std::string>(pJson[pMasqueradingVector[3]].asString());
        }
    }
    if(!pMasqueradingVector[4].empty() && pJson.isMember(pMasqueradingVector[4]))
    {
        dirtyFlag_[4] = true;
        if(!pJson[pMasqueradingVector[4]].isNull())
        {
            notes_=std::make_shared<std::string>(pJson[pMasqueradingVector[4]].asString());
        }
    }
    if(!pMasqueradingVector[5].empty() && pJson.isMember(pMasqueradingVector[5]))
    {
        dirtyFlag_[5] = true;
        if(!pJson[pMasqueradingVector[5]].isNull())
        {
            status_=std::make_shared<std::string>(pJson[pMasqueradingVector[5]].asString());
        }
    }
    if(!pMasqueradingVector[6].empty() && pJson.isMember(pMasqueradingVector[6]))
    {
        dirtyFlag_[6] = true;
        if(!pJson[pMasqueradingVector[6]].isNull())
        {
            auto timeStr = pJson[pMasqueradingVector[6]].asString();
            struct tm stm;
            memset(&stm,0,sizeof(stm));
            auto p = strptime(timeStr.c_str(),"%Y-%m-%d %H:%M:%S",&stm);
            time_t t = mktime(&stm);
            size_t decimalNum = 0;
            if(p)
            {
                if(*p=='.')
                {
                    std::string decimals(p+1,&timeStr[timeStr.length()]);
                    while(decimals.length()<6)
                    {
                        decimals += "0";
                    }
                    decimalNum = (size_t)atol(decimals.c_str());
                }
                createdAt_=std::make_shared<::trantor::Date>(t*1000000+decimalNum);
            }
        }
    }
}

void Reports::updateByJson(const Json::Value &pJson) noexcept(false)
{
    if(pJson.isMember("id"))
    {
        if(!pJson["id"].isNull())
        {
            id_=std::make_shared<int32_t>((int32_t)pJson["id"].asInt64());
        }
    }
    if(pJson.isMember("users_id"))
    {
        dirtyFlag_[1] = true;
        if(!pJson["users_id"].isNull())
        {
            usersId_=std::make_shared<int32_t>((int32_t)pJson["users_id"].asInt64());
        }
    }
    if(pJson.isMember("participants_id"))
    {
        dirtyFlag_[2] = true;
        if(!pJson["participants_id"].isNull())
        {
            participantsId_=std::make_shared<int32_t>((int32_t)pJson["participants_id"].asInt64());
        }
    }
    if(pJson.isMember("report_type"))
    {
        dirtyFlag_[3] = true;
        if(!pJson["report_type"].isNull())
        {
            reportType_=std::make_shared<std::string>(pJson["report_type"].asString());
        }
    }
    if(pJson.isMember("notes"))
    {
        dirtyFlag_[4] = true;
        if(!pJson["notes"].isNull())
        {
            notes_=std::make_shared<std::string>(pJson["notes"].asString());
        }
    }
    if(pJson.isMember("status"))
    {
        dirtyFlag_[5] = true;
        if(!pJson["status"].isNull())
        {
            status_=std::make_shared<std::string>(pJson["status"].asString());
        }
    }
    if(pJson.isMember("created_at"))
    {
        dirtyFlag_[6] = true;
        if(!pJson["created_at"].isNull())
        {
            auto timeStr = pJson["created_at"].asString();
            struct tm stm;
            memset(&stm,0,sizeof(stm));
            auto p = strptime(timeStr.c_str(),"%Y-%m-%d %H:%M:%S",&stm);
            time_t t = mktime(&stm);
            size_t decimalNum = 0;
            if(p)
            {
                if(*p=='.')
                {
                    std::string decimals(p+1,&timeStr[timeStr.length()]);
                    while(decimals.length()<6)
                    {
                        decimals += "0";
                    }
                    decimalNum = (size_t)atol(decimals.c_str());
                }
                createdAt_=std::make_shared<::trantor::Date>(t*1000000+decimalNum);
            }
        }
    }
}

const int32_t &Reports::getValueOfId() const noexcept
{
    static const int32_t defaultValue = int32_t();
    if(id_)
        return *id_;
    return defaultValue;
}
const std::shared_ptr<int32_t> &Reports::getId() const noexcept
{
    return id_;
}
void Reports::setId(const int32_t &pId) noexcept
{
    id_ = std::make_shared<int32_t>(pId);
    dirtyFlag_[0] = true;
}
const typename Reports::PrimaryKeyType & Reports::getPrimaryKey() const
{
    assert(id_);
    return *id_;
}

const int32_t &Reports::getValueOfUsersId() const noexcept
{
    static const int32_t defaultValue = int32_t();
    if(usersId_)
        return *usersId_;
    return defaultValue;
}
const std::shared_ptr<int32_t> &Reports::getUsersId() const noexcept
{
    return usersId_;
}
void Reports::setUsersId(const int32_t &pUsersId) noexcept
{
    usersId_ = std::make_shared<int32_t>(pUsersId);
    dirtyFlag_[1] = true;
}

const int32_t &Reports::getValueOfParticipantsId() const noexcept
{
    static const int32_t defaultValue = int32_t();
    if(participantsId_)
        return *participantsId_;
    return defaultValue;
}
const std::shared_ptr<int32_t> &Reports::getParticipantsId() const noexcept
{
    return participantsId_;
}
void Reports::setParticipantsId(const int32_t &pParticipantsId) noexcept
{
    participantsId_ = std::make_shared<int32_t>(pParticipantsId);
    dirtyFlag_[2] = true;
}

const std::string &Reports::getValueOfReportType() const noexcept
{
    static const std::string defaultValue = std::string();
    if(reportType_)
        return *reportType_;
    return defaultValue;
}
const std::shared_ptr<std::string> &Reports::getReportType() const noexcept
{
    return reportType_;
}
void Reports::setReportType(const std::string &pReportType) noexcept
{
    reportType_ = std::make_shared<std::string>(pReportType);
    dirtyFlag_[3] = true;
}
void Reports::setReportType(std::string &&pReportType) noexcept
{
    reportType_ = std::make_shared<std::string>(std::move(pReportType));
    dirtyFlag_[3] = true;
}

const std::string &Reports::getValueOfNotes() const noexcept
{
    static const std::string defaultValue = std::string();
    if(notes_)
        return *notes_;
    return defaultValue;
}
const std::shared_ptr<std::string> &Reports::getNotes() const noexcept
{
    return notes_;
}
void Reports::setNotes(const std::string &pNotes) noexcept
{
    notes_ = std::make_shared<std::string>(pNotes);
    dirtyFlag_[4] = true;
}
void Reports::setNotes(std::string &&pNotes) noexcept
{
    notes_ = std::make_shared<std::string>(std::move(pNotes));
    dirtyFlag_[4] = true;
}

const std::string &Reports::getValueOfStatus() const noexcept
{
    static const std::string defaultValue = std::string();
    if(status_)
        return *status_;
    return defaultValue;
}
const std::shared_ptr<std::string> &Reports::getStatus() const noexcept
{
    return status_;
}
void Reports::setStatus(const std::string &pStatus) noexcept
{
    status_ = std::make_shared<std::string>(pStatus);
    dirtyFlag_[5] = true;
}
void Reports::setStatus(std::string &&pStatus) noexcept
{
    status_ = std::make_shared<std::string>(std::move(pStatus));
    dirtyFlag_[5] = true;
}

const ::trantor::Date &Reports::getValueOfCreatedAt() const noexcept
{
    static const ::trantor::Date defaultValue = ::trantor::Date();
    if(createdAt_)
        return *createdAt_;
    return defaultValue;
}
const std::shared_ptr<::trantor::Date> &Reports::getCreatedAt() const noexcept
{
    return createdAt_;
}
void Reports::setCreatedAt(const ::trantor::Date &pCreatedAt) noexcept
{
    createdAt_ = std::make_shared<::trantor::Date>(pCreatedAt);
    dirtyFlag_[6] = true;
}

void Reports::updateId(const uint64_t id)
{
    id_ = std::make_shared<int32_t>(static_cast<int32_t>(id));
}

const std::vector<std::string> &Reports::insertColumns() noexcept
{
    static const std::vector<std::string> inCols={
        "users_id",
        "participants_id",
        "report_type",
        "notes",
        "status",
        "created_at"
    };
    return inCols;
}

void Reports::outputArgs(drogon::orm::internal::SqlBinder &binder) const
{
    if(dirtyFlag_[1])
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
    if(dirtyFlag_[2])
    {
        if(getParticipantsId())
        {
            binder << getValueOfParticipantsId();
        }
        else
        {
            binder << nullptr;
        }
    }
    if(dirtyFlag_[3])
    {
        if(getReportType())
        {
            binder << getValueOfReportType();
        }
        else
        {
            binder << nullptr;
        }
    }
    if(dirtyFlag_[4])
    {
        if(getNotes())
        {
            binder << getValueOfNotes();
        }
        else
        {
            binder << nullptr;
        }
    }
    if(dirtyFlag_[5])
    {
        if(getStatus())
        {
            binder << getValueOfStatus();
        }
        else
        {
            binder << nullptr;
        }
    }
    if(dirtyFlag_[6])
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

const std::vector<std::string> Reports::updateColumns() const
{
    std::vector<std::string> ret;
    if(dirtyFlag_[1])
    {
        ret.push_back(getColumnName(1));
    }
    if(dirtyFlag_[2])
    {
        ret.push_back(getColumnName(2));
    }
    if(dirtyFlag_[3])
    {
        ret.push_back(getColumnName(3));
    }
    if(dirtyFlag_[4])
    {
        ret.push_back(getColumnName(4));
    }
    if(dirtyFlag_[5])
    {
        ret.push_back(getColumnName(5));
    }
    if(dirtyFlag_[6])
    {
        ret.push_back(getColumnName(6));
    }
    return ret;
}

void Reports::updateArgs(drogon::orm::internal::SqlBinder &binder) const
{
    if(dirtyFlag_[1])
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
    if(dirtyFlag_[2])
    {
        if(getParticipantsId())
        {
            binder << getValueOfParticipantsId();
        }
        else
        {
            binder << nullptr;
        }
    }
    if(dirtyFlag_[3])
    {
        if(getReportType())
        {
            binder << getValueOfReportType();
        }
        else
        {
            binder << nullptr;
        }
    }
    if(dirtyFlag_[4])
    {
        if(getNotes())
        {
            binder << getValueOfNotes();
        }
        else
        {
            binder << nullptr;
        }
    }
    if(dirtyFlag_[5])
    {
        if(getStatus())
        {
            binder << getValueOfStatus();
        }
        else
        {
            binder << nullptr;
        }
    }
    if(dirtyFlag_[6])
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
Json::Value Reports::toJson() const
{
    Json::Value ret;
    if(getId())
    {
        ret["id"]=getValueOfId();
    }
    else
    {
        ret["id"]=Json::Value();
    }
    if(getUsersId())
    {
        ret["users_id"]=getValueOfUsersId();
    }
    else
    {
        ret["users_id"]=Json::Value();
    }
    if(getParticipantsId())
    {
        ret["participants_id"]=getValueOfParticipantsId();
    }
    else
    {
        ret["participants_id"]=Json::Value();
    }
    if(getReportType())
    {
        ret["report_type"]=getValueOfReportType();
    }
    else
    {
        ret["report_type"]=Json::Value();
    }
    if(getNotes())
    {
        ret["notes"]=getValueOfNotes();
    }
    else
    {
        ret["notes"]=Json::Value();
    }
    if(getStatus())
    {
        ret["status"]=getValueOfStatus();
    }
    else
    {
        ret["status"]=Json::Value();
    }
    if(getCreatedAt())
    {
        ret["created_at"]=getCreatedAt()->toDbStringLocal();
    }
    else
    {
        ret["created_at"]=Json::Value();
    }
    return ret;
}

Json::Value Reports::toMasqueradedJson(
    const std::vector<std::string> &pMasqueradingVector) const
{
    Json::Value ret;
    if(pMasqueradingVector.size() == 7)
    {
        if(!pMasqueradingVector[0].empty())
        {
            if(getId())
            {
                ret[pMasqueradingVector[0]]=getValueOfId();
            }
            else
            {
                ret[pMasqueradingVector[0]]=Json::Value();
            }
        }
        if(!pMasqueradingVector[1].empty())
        {
            if(getUsersId())
            {
                ret[pMasqueradingVector[1]]=getValueOfUsersId();
            }
            else
            {
                ret[pMasqueradingVector[1]]=Json::Value();
            }
        }
        if(!pMasqueradingVector[2].empty())
        {
            if(getParticipantsId())
            {
                ret[pMasqueradingVector[2]]=getValueOfParticipantsId();
            }
            else
            {
                ret[pMasqueradingVector[2]]=Json::Value();
            }
        }
        if(!pMasqueradingVector[3].empty())
        {
            if(getReportType())
            {
                ret[pMasqueradingVector[3]]=getValueOfReportType();
            }
            else
            {
                ret[pMasqueradingVector[3]]=Json::Value();
            }
        }
        if(!pMasqueradingVector[4].empty())
        {
            if(getNotes())
            {
                ret[pMasqueradingVector[4]]=getValueOfNotes();
            }
            else
            {
                ret[pMasqueradingVector[4]]=Json::Value();
            }
        }
        if(!pMasqueradingVector[5].empty())
        {
            if(getStatus())
            {
                ret[pMasqueradingVector[5]]=getValueOfStatus();
            }
            else
            {
                ret[pMasqueradingVector[5]]=Json::Value();
            }
        }
        if(!pMasqueradingVector[6].empty())
        {
            if(getCreatedAt())
            {
                ret[pMasqueradingVector[6]]=getCreatedAt()->toDbStringLocal();
            }
            else
            {
                ret[pMasqueradingVector[6]]=Json::Value();
            }
        }
        return ret;
    }
    LOG_ERROR << "Masquerade failed";
    if(getId())
    {
        ret["id"]=getValueOfId();
    }
    else
    {
        ret["id"]=Json::Value();
    }
    if(getUsersId())
    {
        ret["users_id"]=getValueOfUsersId();
    }
    else
    {
        ret["users_id"]=Json::Value();
    }
    if(getParticipantsId())
    {
        ret["participants_id"]=getValueOfParticipantsId();
    }
    else
    {
        ret["participants_id"]=Json::Value();
    }
    if(getReportType())
    {
        ret["report_type"]=getValueOfReportType();
    }
    else
    {
        ret["report_type"]=Json::Value();
    }
    if(getNotes())
    {
        ret["notes"]=getValueOfNotes();
    }
    else
    {
        ret["notes"]=Json::Value();
    }
    if(getStatus())
    {
        ret["status"]=getValueOfStatus();
    }
    else
    {
        ret["status"]=Json::Value();
    }
    if(getCreatedAt())
    {
        ret["created_at"]=getCreatedAt()->toDbStringLocal();
    }
    else
    {
        ret["created_at"]=Json::Value();
    }
    return ret;
}

bool Reports::validateJsonForCreation(const Json::Value &pJson, std::string &err)
{
    if(pJson.isMember("id"))
    {
        if(!validJsonOfField(0, "id", pJson["id"], err, true))
            return false;
    }
    if(pJson.isMember("users_id"))
    {
        if(!validJsonOfField(1, "users_id", pJson["users_id"], err, true))
            return false;
    }
    else
    {
        err="The users_id column cannot be null";
        return false;
    }
    if(pJson.isMember("participants_id"))
    {
        if(!validJsonOfField(2, "participants_id", pJson["participants_id"], err, true))
            return false;
    }
    else
    {
        err="The participants_id column cannot be null";
        return false;
    }
    if(pJson.isMember("report_type"))
    {
        if(!validJsonOfField(3, "report_type", pJson["report_type"], err, true))
            return false;
    }
    else
    {
        err="The report_type column cannot be null";
        return false;
    }
    if(pJson.isMember("notes"))
    {
        if(!validJsonOfField(4, "notes", pJson["notes"], err, true))
            return false;
    }
    else
    {
        err="The notes column cannot be null";
        return false;
    }
    if(pJson.isMember("status"))
    {
        if(!validJsonOfField(5, "status", pJson["status"], err, true))
            return false;
    }
    if(pJson.isMember("created_at"))
    {
        if(!validJsonOfField(6, "created_at", pJson["created_at"], err, true))
            return false;
    }
    else
    {
        err="The created_at column cannot be null";
        return false;
    }
    return true;
}
bool Reports::validateMasqueradedJsonForCreation(const Json::Value &pJson,
                                                 const std::vector<std::string> &pMasqueradingVector,
                                                 std::string &err)
{
    if(pMasqueradingVector.size() != 7)
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
      if(!pMasqueradingVector[3].empty())
      {
          if(pJson.isMember(pMasqueradingVector[3]))
          {
              if(!validJsonOfField(3, pMasqueradingVector[3], pJson[pMasqueradingVector[3]], err, true))
                  return false;
          }
        else
        {
            err="The " + pMasqueradingVector[3] + " column cannot be null";
            return false;
        }
      }
      if(!pMasqueradingVector[4].empty())
      {
          if(pJson.isMember(pMasqueradingVector[4]))
          {
              if(!validJsonOfField(4, pMasqueradingVector[4], pJson[pMasqueradingVector[4]], err, true))
                  return false;
          }
        else
        {
            err="The " + pMasqueradingVector[4] + " column cannot be null";
            return false;
        }
      }
      if(!pMasqueradingVector[5].empty())
      {
          if(pJson.isMember(pMasqueradingVector[5]))
          {
              if(!validJsonOfField(5, pMasqueradingVector[5], pJson[pMasqueradingVector[5]], err, true))
                  return false;
          }
      }
      if(!pMasqueradingVector[6].empty())
      {
          if(pJson.isMember(pMasqueradingVector[6]))
          {
              if(!validJsonOfField(6, pMasqueradingVector[6], pJson[pMasqueradingVector[6]], err, true))
                  return false;
          }
        else
        {
            err="The " + pMasqueradingVector[6] + " column cannot be null";
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
bool Reports::validateJsonForUpdate(const Json::Value &pJson, std::string &err)
{
    if(pJson.isMember("id"))
    {
        if(!validJsonOfField(0, "id", pJson["id"], err, false))
            return false;
    }
    else
    {
        err = "The value of primary key must be set in the json object for update";
        return false;
    }
    if(pJson.isMember("users_id"))
    {
        if(!validJsonOfField(1, "users_id", pJson["users_id"], err, false))
            return false;
    }
    if(pJson.isMember("participants_id"))
    {
        if(!validJsonOfField(2, "participants_id", pJson["participants_id"], err, false))
            return false;
    }
    if(pJson.isMember("report_type"))
    {
        if(!validJsonOfField(3, "report_type", pJson["report_type"], err, false))
            return false;
    }
    if(pJson.isMember("notes"))
    {
        if(!validJsonOfField(4, "notes", pJson["notes"], err, false))
            return false;
    }
    if(pJson.isMember("status"))
    {
        if(!validJsonOfField(5, "status", pJson["status"], err, false))
            return false;
    }
    if(pJson.isMember("created_at"))
    {
        if(!validJsonOfField(6, "created_at", pJson["created_at"], err, false))
            return false;
    }
    return true;
}
bool Reports::validateMasqueradedJsonForUpdate(const Json::Value &pJson,
                                               const std::vector<std::string> &pMasqueradingVector,
                                               std::string &err)
{
    if(pMasqueradingVector.size() != 7)
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
    else
    {
        err = "The value of primary key must be set in the json object for update";
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
      if(!pMasqueradingVector[3].empty() && pJson.isMember(pMasqueradingVector[3]))
      {
          if(!validJsonOfField(3, pMasqueradingVector[3], pJson[pMasqueradingVector[3]], err, false))
              return false;
      }
      if(!pMasqueradingVector[4].empty() && pJson.isMember(pMasqueradingVector[4]))
      {
          if(!validJsonOfField(4, pMasqueradingVector[4], pJson[pMasqueradingVector[4]], err, false))
              return false;
      }
      if(!pMasqueradingVector[5].empty() && pJson.isMember(pMasqueradingVector[5]))
      {
          if(!validJsonOfField(5, pMasqueradingVector[5], pJson[pMasqueradingVector[5]], err, false))
              return false;
      }
      if(!pMasqueradingVector[6].empty() && pJson.isMember(pMasqueradingVector[6]))
      {
          if(!validJsonOfField(6, pMasqueradingVector[6], pJson[pMasqueradingVector[6]], err, false))
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
bool Reports::validJsonOfField(size_t index,
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
            if(isForCreation)
            {
                err="The automatic primary key cannot be set";
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
            if(!pJson.isInt())
            {
                err="Type error in the "+fieldName+" field";
                return false;
            }
            break;
        case 2:
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
        case 3:
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
        case 4:
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
            break;
        case 5:
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
            break;
        case 6:
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
            break;
        default:
            err="Internal error in the server";
            return false;
    }
    return true;
}
