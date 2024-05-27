/**
 *
 *  Contacts.h
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

class Contacts
{
  public:
    struct Cols
    {
        static const std::string _id;
        static const std::string _first_name;
        static const std::string _middle_name;
        static const std::string _last_name;
        static const std::string _phone;
        static const std::string _email;
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
    explicit Contacts(const drogon::orm::Row &r, const ssize_t indexOffset = 0) noexcept;

    /**
     * @brief constructor
     * @param pJson The json object to construct a new instance.
     */
    explicit Contacts(const Json::Value &pJson) noexcept(false);

    /**
     * @brief constructor
     * @param pJson The json object to construct a new instance.
     * @param pMasqueradingVector The aliases of table columns.
     */
    Contacts(const Json::Value &pJson, const std::vector<std::string> &pMasqueradingVector) noexcept(false);

    Contacts() = default;

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

    /**  For column first_name  */
    ///Get the value of the column first_name, returns the default value if the column is null
    const std::string &getValueOfFirstName() const noexcept;
    ///Return a shared_ptr object pointing to the column const value, or an empty shared_ptr object if the column is null
    const std::shared_ptr<std::string> &getFirstName() const noexcept;
    ///Set the value of the column first_name
    void setFirstName(const std::string &pFirstName) noexcept;
    void setFirstName(std::string &&pFirstName) noexcept;

    /**  For column middle_name  */
    ///Get the value of the column middle_name, returns the default value if the column is null
    const std::string &getValueOfMiddleName() const noexcept;
    ///Return a shared_ptr object pointing to the column const value, or an empty shared_ptr object if the column is null
    const std::shared_ptr<std::string> &getMiddleName() const noexcept;
    ///Set the value of the column middle_name
    void setMiddleName(const std::string &pMiddleName) noexcept;
    void setMiddleName(std::string &&pMiddleName) noexcept;

    /**  For column last_name  */
    ///Get the value of the column last_name, returns the default value if the column is null
    const std::string &getValueOfLastName() const noexcept;
    ///Return a shared_ptr object pointing to the column const value, or an empty shared_ptr object if the column is null
    const std::shared_ptr<std::string> &getLastName() const noexcept;
    ///Set the value of the column last_name
    void setLastName(const std::string &pLastName) noexcept;
    void setLastName(std::string &&pLastName) noexcept;

    /**  For column phone  */
    ///Get the value of the column phone, returns the default value if the column is null
    const std::string &getValueOfPhone() const noexcept;
    ///Return a shared_ptr object pointing to the column const value, or an empty shared_ptr object if the column is null
    const std::shared_ptr<std::string> &getPhone() const noexcept;
    ///Set the value of the column phone
    void setPhone(const std::string &pPhone) noexcept;
    void setPhone(std::string &&pPhone) noexcept;

    /**  For column email  */
    ///Get the value of the column email, returns the default value if the column is null
    const std::string &getValueOfEmail() const noexcept;
    ///Return a shared_ptr object pointing to the column const value, or an empty shared_ptr object if the column is null
    const std::shared_ptr<std::string> &getEmail() const noexcept;
    ///Set the value of the column email
    void setEmail(const std::string &pEmail) noexcept;
    void setEmail(std::string &&pEmail) noexcept;

    /**  For column created_at  */
    ///Get the value of the column created_at, returns the default value if the column is null
    const std::string &getValueOfCreatedAt() const noexcept;
    ///Return a shared_ptr object pointing to the column const value, or an empty shared_ptr object if the column is null
    const std::shared_ptr<std::string> &getCreatedAt() const noexcept;
    ///Set the value of the column created_at
    void setCreatedAt(const std::string &pCreatedAt) noexcept;
    void setCreatedAt(std::string &&pCreatedAt) noexcept;


    static size_t getColumnNumber() noexcept {  return 7;  }
    static const std::string &getColumnName(size_t index) noexcept(false);

    Json::Value toJson() const;
    Json::Value toMasqueradedJson(const std::vector<std::string> &pMasqueradingVector) const;
    /// Relationship interfaces
  private:
    friend drogon::orm::Mapper<Contacts>;
    friend drogon::orm::BaseBuilder<Contacts, true, true>;
    friend drogon::orm::BaseBuilder<Contacts, true, false>;
    friend drogon::orm::BaseBuilder<Contacts, false, true>;
    friend drogon::orm::BaseBuilder<Contacts, false, false>;
#ifdef __cpp_impl_coroutine
    friend drogon::orm::CoroMapper<Contacts>;
#endif
    static const std::vector<std::string> &insertColumns() noexcept;
    void outputArgs(drogon::orm::internal::SqlBinder &binder) const;
    const std::vector<std::string> updateColumns() const;
    void updateArgs(drogon::orm::internal::SqlBinder &binder) const;
    ///For mysql or sqlite3
    void updateId(const uint64_t id);
    std::shared_ptr<int32_t> id_;
    std::shared_ptr<std::string> firstName_;
    std::shared_ptr<std::string> middleName_;
    std::shared_ptr<std::string> lastName_;
    std::shared_ptr<std::string> phone_;
    std::shared_ptr<std::string> email_;
    std::shared_ptr<std::string> createdAt_;
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
        if(dirtyFlag_[0])
        {
            sql += "id,";
            ++parametersCount;
        }
        if(dirtyFlag_[1])
        {
            sql += "first_name,";
            ++parametersCount;
        }
        if(dirtyFlag_[2])
        {
            sql += "middle_name,";
            ++parametersCount;
        }
        if(dirtyFlag_[3])
        {
            sql += "last_name,";
            ++parametersCount;
        }
        if(dirtyFlag_[4])
        {
            sql += "phone,";
            ++parametersCount;
        }
        if(dirtyFlag_[5])
        {
            sql += "email,";
            ++parametersCount;
        }
        if(dirtyFlag_[6])
        {
            sql += "created_at,";
            ++parametersCount;
        }
        if(parametersCount > 0)
        {
            sql[sql.length()-1]=')';
            sql += " values (";
        }
        else
            sql += ") values (";

        if(dirtyFlag_[0])
        {
            sql.append("?,");

        }
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
