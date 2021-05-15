#include "pch.h"
#include "HookMessage.h"

/*
*   Developed by SpeedSterKawaii#8243
*   Download this from my github only.
* 
*   Go to HookMessage.h for The Main.
*/

void InitHook()
{
	MessageBoxCrashMessage()
		;
	MessageBoxA(0, "Speeds Custom Crash Message Loaded!\nWhen roblox crashes, this shows a custom message!\nIf you want to change it, click on HookMessage.h\nEnjoy this custom msg, give credits to speedsterkawaii.", "Speeds Custom Crash Message Loaded!", MB_ICONEXCLAMATION)
		;
}

BOOL APIENTRY DllMain(HMODULE Module, DWORD Reason, void* Reserved)
{
	switch (Reason)
	{
	case DLL_PROCESS_ATTACH:
		CreateThread(NULL, NULL, (LPTHREAD_START_ROUTINE)InitHook, NULL, NULL, NULL);
		break;
	case DLL_PROCESS_DETACH:
		break;
	default: break;
	}
	return TRUE;
}