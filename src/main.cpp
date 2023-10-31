#include "Window.h"
#include "VulkanEngine.h"

int main()
{
    vme::VulkanEngine::Builder engine_builder;
    auto engine = engine_builder.SetAppName("CGPlayground")
        .Build();
    return 0;
}