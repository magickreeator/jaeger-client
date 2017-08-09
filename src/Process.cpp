#include <iostream>
#include "Process.h"
#include "Helper.h"

const std::string OpenTracing::Process::DEFAULT_SERVICE_NAME{ "unknown" };

OpenTracing::Process::Process(const std::string& serviceName) :
    _serviceName{ serviceName }
{
#ifdef TRACER_DEBUG
    Php::out << "    Process::Process addr: " << this << std::endl;
#endif    

    _tags.push_back(new Tag(Tag::TAG_TYPE_HOST, Helper::getHostName()));    
    _tags.push_back(new Tag(Tag::TAG_TYPE_IP, Helper::getCurrentIp()));
}

OpenTracing::Process::~Process()
{
    for (auto& iter : _tags)
        delete iter;
    _tags.clear();

#ifdef TRACER_DEBUG
    Php::out << "    ~Process" << std::endl;
#endif    
}
