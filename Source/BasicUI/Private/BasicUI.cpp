#include "BasicUI.h"

DEFINE_LOG_CATEGORY(BasicUI);

#define LOCTEXT_NAMESPACE "FBasicUI"

void FBasicUI::StartupModule()
{
	UE_LOG(BasicUI, Warning, TEXT("BasicUI module has been loaded"));
}

void FBasicUI::ShutdownModule()
{
	UE_LOG(BasicUI, Warning, TEXT("BasicUI module has been unloaded"));
}

#undef LOCTEXT_NAMESPACE

IMPLEMENT_MODULE(FBasicUI, BasicUI)