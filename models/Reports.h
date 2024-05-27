/**
 *
 *  Reports.h
 *  DO NOT EDIT. This file is generated by drogon_ctl
 *
 */

#pragma once
#include <drogon/orm/Result.h>
#include <drogon/orm/Row.h>
#include <drogon/orm/Field.h>
#include <drogon/orm/SqlBinder.h>
#include <drogon/orm/Mapper.h>
#include <drogon/orm/BaseBuilder.h>
#ifdef __cpp_impl_coroutine
#include <drogon/orm/CoroMapper.h>
#endif
#include <trantor/utils/Date.h>
#include <trantor/utils/Logger.h>
#include <json/json.h>
#include <string>
#include <string_view>
#include <memory>
#include <vector>
#include <tuple>
#include <stdint.h>
#include <iostream>

namespace drogon
{
namespace orm
{
class DbClient;
using DbClientPtr = std::shared_ptr<DbClient>;
}
}
namespace drogon_model
{
namespace dro
{

class Reports
{
  public:
    struct Cols
    {
        static const std::string _id;
        static const std::string _users_id;
        static const std::string _participants_id;
        static const std::string _report_type;
        static const std::string _notes;
        static const std::string _status;
        static const std::string _created_at;
    };

    static const int primaryKeyNumber;
    static const std::string tableName;
    static const bool hasPrimaryKey;
    static const std::string primaryKeyName;
    using PrimaryKeyType = int32_t;
    const PrimaryKeyType &getPrimaryKey() const;

    /**
     * @brief constructor
     * @param r One row of records in the SQL query result.
     * @param indexOffset Set the offset to -1 to access all columns by column names,
     * otherwise access all columns by offsets.
     * @note If the SQL is not a style of 'select * from table_name ...' (select all
     * columns by an asterisk), please set the offset to -1.
     */
    explicit Reports(const drogon::orm::Row &r, const ssize_t indexOffset = 0) noexcept;

    /**
     * @brief constructor
     * @param pJson The json object to construct a new instance.
     */
    explicit Reports(const Json::Value &pJson) noexcept(false);

    /**
     * @brief constructor
     * @param pJson The json object to construct a new instance.
     * @param pMasqueradingVector The aliases of table columns.
     */
    Reports(const Json::Value &pJson, const std::vector<std::string> &pMasqueradingVector) noexcept(false);

    Reports() = default;

    void updateByJson(const Json::Value &pJson) noexcept(false);
    void updateByMasqueradedJson(const Json::Value &pJson,
                                 const std::vector<std::string> &pMasqueradingVector) noexcept(false);
    static bool validateJsonForCreation(const Json::Value &pJson, std::string &err);
    static bool validateMasqueradedJsonForCreation(const Json::Value &,
                                                const std::vector<std::string> &pMasqueradingVector,
                                                    std::string &err);
    static bool validateJsonForUpdate(const Json::Value &pJson, std::string &err);
    static bool validateMasqueradedJsonForUpdate(const Json::Value &,
                                          const std::vector<std::string> &pMasqueradingVector,
                                          std::string &err);
    static bool validJsonOfField(size_t index,
                          const std::string &fieldName,
                          const Json::Value &pJson,
                          std::string &err,
                          bool isForCreation);

    /**  For column id  */
    ///Get the value of the column id, returns the default value if the column is null
    const int32_t &getValueOfId() const noexcept;
    ///Return a shared_ptr object pointing to the column const value, or an empty shared_ptr object if the column is null
    const std::shared_ptr<int32_t> &getId() const noexcept;
    ///Set the value of the column id
    void setId(const int32_t &pId) noexcept;

    /**  For column users_id  */
    ///Get the value of the column users_id, returns the default value if the column is null
    const int32_t &getValueOfUsersId() const noexcept;
    ///Return a shared_ptr object pointing to the column const value, or an empty shared_ptr object if the column is null
    const std::shared_ptr<int32_t> &getUsersId() const noexcept;
    ///Set the value of the column users_id
    void setUsersId(const int32_t &pUsersId) noexcept;

    /**  For column participants_id  */
    ///Get the value of the column participants_id, returns the default value if the column is null
    const int32_t &getValueOfParticipantsId() const noexcept;
    ///Return a shared_ptr object pointing to the column const value, or an empty shared_ptr object if the column is null
    const std::shared_ptr<int32_t> &getParticipantsId() const noexcept;
    ///Set the value of the column participants_id
    void setParticipantsId(const int32_t &pParticipantsId) noexcept;

    /**  For column report_type  */
    ///Get the value of the column report_type, returns the default value if the column is null
    const std::string &getValueOfReportType() const noexcept;
    ///Return a shared_ptr object pointing to the column const value, or an empty shared_ptr object if the column is null
    const std::shared_ptr<std::string> &getReportType() const noexcept;
    ///Set the value of the column report_type
    void setReportType(const std::string &pReportType) noexcept;
    void setReportType(std::string &&pReportType) noexcept;

    /**  For column notes  */
    ///Get the value of the column notes, returns the default value if the column is null
    const std::string &getValueOfNotes() const noexcept;
    ///Return a shared_ptr object pointing to the column const value, or an empty shared_ptr object if the column is null
    const std::shared_ptr<std::string> &getNotes() const noexcept;
    ///Set the value of the column notes
    void setNotes(const std::string &pNotes) noexcept;
    void setNotes(std::string &&pNotes) noexcept;

    /**  For column status  */
    ///Get the value of the column status, returns the default value if the column is null
    const std::string &getValueOfStatus() const noexcept;
    ///Return a shared_ptr object pointing to the column const value, or an empty shared_ptr object if the column is null
    const std::shared_ptr<std::string> &getStatus() const noexcept;
    ///Set the value of the column status
    void setStatus(const std::string &pStatus) noexcept;
    void setStatus(std::string &&pStatus) noexcept;

    /**  For column created_at  */
    ///Get the value of the column created_at, returns the default value if the column is null
    const ::trantor::Date &getValueOfCreatedAt() const noexcept;
    ///Return a shared_ptr object pointing to the column const value, or an empty shared_ptr object if the column is null
    const std::shared_ptr<::trantor::Date> &getCreatedAt() const noexcept;
    ///Set the value of the column created_at
    void setCreatedAt(const ::trantor::Date &pCreatedAt) noexcept;


    static size_t getColumnNumber() noexcept {  return 7;  }
    static const std::string &getColumnName(size_t index) noexcept(false);

    Json::Value toJson() const;
    Json::Value toMasqueradedJson(const std::vector<std::string> &pMasqueradingVector) const;
    /// Relationship interfaces
  private:
    friend drogon::orm::Mapper<Reports>;
    friend drogon::orm::BaseBuilder<Reports, true, true>;
    friend drogon::orm::BaseBuilder<Reports, true, false>;
    friend drogon::orm::BaseBuilder<Reports, false, true>;
    friend drogon::orm::BaseBuilder<Reports, false, false>;
#ifdef __cpp_impl_coroutine
    friend drogon::orm::CoroMapper<Reports>;
#endif
    static const std::vector<std::string> &insertColumns() noexcept;
    void outputArgs(drogon::orm::internal::SqlBinder &binder) const;
    const std::vector<std::string> updateColumns() const;
    void updateArgs(drogon::orm::internal::SqlBinder &binder) const;
    ///For mysql or sqlite3
    void updateId(const uint64_t id);
    std::shared_ptr<int32_t> id_;
    std::shared_ptr<int32_t> usersId_;
    std::shared_ptr<int32_t> participantsId_;
    std::shared_ptr<std::string> reportType_;
    std::shared_ptr<std::string> notes_;
    std::shared_ptr<std::string> status_;
    std::shared_ptr<::trantor::Date> createdAt_;
    struct MetaData
    {
        const std::string colName_;
        const std::string colType_;
        const std::string colDatabaseType_;
        const ssize_t colLength_;
        const bool isAutoVal_;
        const bool isPrimaryKey_;
        const bool notNull_;
    };
    static const std::vector<MetaData> metaData_;
    bool dirtyFlag_[7]={ false };
  public:
    static const std::string &sqlForFindingByPrimaryKey()
    {
        static const std::string sql="select * from " + tableName + " where id = ?";
        return sql;
    }

    static const std::string &sqlForDeletingByPrimaryKey()
    {
        static const std::string sql="delete from " + tableName + " where id = ?";
        return sql;
    }
    std::string sqlForInserting(bool &needSelection) const
    {
        std::string sql="insert into " + tableName + " (";
        size_t parametersCount = 0;
        needSelection = false;
            sql += "id,";
            ++parametersCount;
        if(dirtyFlag_[1])
        {
            sql += "users_id,";
            ++parametersCount;
        }
        if(dirtyFlag_[2])
        {
            sql += "participants_id,";
            ++parametersCount;
        }
        if(dirtyFlag_[3])
        {
            sql += "report_type,";
            ++parametersCount;
        }
        if(dirtyFlag_[4])
        {
            sql += "notes,";
            ++parametersCount;
        }
        sql += "status,";
        ++parametersCount;
        if(!dirtyFlag_[5])
        {
            needSelection=true;
        }
        if(dirtyFlag_[6])
        {
            sql += "created_at,";
            ++parametersCount;
        }
        needSelection=true;
        if(parametersCount > 0)
        {
            sql[sql.length()-1]=')';
            sql += " values (";
        }
        else
            sql += ") values (";

        sql +="default,";
        if(dirtyFlag_[1])
        {
            sql.append("?,");

        }
        if(dirtyFlag_[2])
        {
            sql.append("?,");

        }
        if(dirtyFlag_[3])
        {
            sql.append("?,");

        }
        if(dirtyFlag_[4])
        {
            sql.append("?,");

        }
        if(dirtyFlag_[5])
        {
            sql.append("?,");

        }
        else
        {
            sql +="default,";
        }
        if(dirtyFlag_[6])
        {
            sql.append("?,");

        }
        if(parametersCount > 0)
        {
            sql.resize(sql.length() - 1);
        }
        sql.append(1, ')');
        LOG_TRACE << sql;
        return sql;
    }
};
} // namespace dro
} // namespace drogon_model
