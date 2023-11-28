#include "Application.h"

Application& Application::GetApp()
{
    static Application app;
    return app;
}

Application::Application()
    : m_engine_(std::make_unique<vme::VulkanEngine>())
{
    m_engine_->CreateInstance("CGPlayGround");
    m_engine_->CreateDevice();
}

Application::~Application()
{

}

void Application::Run()
{
    
}