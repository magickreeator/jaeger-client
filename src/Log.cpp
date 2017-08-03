#include "Log.h"
#include "Helper.h"

Log::Log(std::vector<Tag*>& logs, const Php::Value& timestamp) :
    _fields{ std::move(logs) }
{
    this->_timestamp = !timestamp.isNull() ? static_cast<int64_t>(timestamp) : Helper::now();
    Php::out << "    Log::time " << _timestamp << std::endl;

}

Log::~Log()
{
    for (auto iter : _fields)
        delete iter;
    _fields.clear();

    Php::out << "    ~Log" << std::endl;
}
