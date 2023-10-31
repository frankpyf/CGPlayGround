#include "Window.h"
#include "VulkanEngine.h"

int main()
{
    vme::VulkanEngine core;
    vme::Window window(1920,1080, "test");
    return 0;
}