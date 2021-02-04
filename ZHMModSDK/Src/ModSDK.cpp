#include "ModSDK.h"

#include "ModLoader.h"
#include "DebugConsole.h"
#include "HookImpl.h"
#include "Hooks.h"
#include "Logging.h"
#include "Util/ProcessUtils.h"

ZHMSDK_API IModSDK* SDK()
{
	return ModSDK::GetInstance();
}

ModSDK* ModSDK::g_Instance = nullptr;

ModSDK* ModSDK::GetInstance()
{
	if (g_Instance == nullptr)
		g_Instance = new ModSDK();

	return g_Instance;
}

void ModSDK::DestroyInstance()
{
	delete g_Instance;
	g_Instance = nullptr;
}

ModSDK::ModSDK()
{
	m_DebugConsole = new DebugConsole();
	m_ModLoader = new ModLoader();

	HMODULE s_Module = GetModuleHandleA(nullptr);
	
	m_ModuleBase = reinterpret_cast<uintptr_t>(s_Module) + Util::ProcessUtils::GetBaseOfCode(s_Module);
	m_SizeOfCode = Util::ProcessUtils::GetSizeOfCode(s_Module);
	m_ImageSize = Util::ProcessUtils::GetSizeOfImage(s_Module);
}

ModSDK::~ModSDK()
{
	delete m_ModLoader;
	delete m_DebugConsole;

	Trampolines::ClearTrampolines();
}

bool ModSDK::Startup()
{
	m_DebugConsole->StartRedirecting();
	m_ModLoader->LoadAllMods();

	return true;
}
