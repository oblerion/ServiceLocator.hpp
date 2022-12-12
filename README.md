## easy to use ServiceLocator c++
### for register class Service
```c++
Service service = new Service();
ServiceLocator.Register<Service>(&service);
```
or
```
ServiceLocator.Register<Service>(new Service());
```
### for get class Service
```
Service service = *(ServiceLocator.Get<Service>());
```

