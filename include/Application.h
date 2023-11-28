#include "VulkanEngine.h"

class Application {
std::unique_ptr<vme::VulkanEngine> m_engine_;
bool should_close = false;
public:
    static Application& GetApp();

    virtual ~Application();

    void Run();
    
private:
    Application();
    Application(const Application&) = delete;
    Application& operator=(const Application&) = delete;
    Application(Application&&) = delete;
    Application& operator=(Application&&) = delete;
};