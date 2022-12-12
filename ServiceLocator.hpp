#ifndef servicelocator_hpp
#define servicelocator_hpp
#include <typeinfo>
#include <string>
#include <map>
#include <stdlib.h>
class ServiceLocator
{
private:
    std::map<std::string ,void*> list;
public:
    template<class T>
    void Register(void* service){
        list.emplace(typeid(T).name(),service);
    }
    template<class T>
    T* Get()
    {
        if(list[typeid(T).name()]!=NULL)
            return (T*)list[typeid(T).name()];
        return NULL;
    }

} static ServiceLocator;
#endif
