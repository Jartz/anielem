#include "Helper.h"
#include "Blueprint/UserWidget.h"


UUserWidget* UHelper::LoadWidgetWithName(FString Value, UWorld* GetWorld)
{
		//Health_Main_UI
		UUserWidget* WidgetHealth = nullptr;
		FString WidgetName = Value;
		FString WidgetPath = FString::Printf(TEXT("/Game/Widget/%s.%s_C"), *WidgetName, *WidgetName);
		UClass* WidgetClassLoaded = LoadClass<UUserWidget>(nullptr, *WidgetPath);
		if (WidgetClassLoaded){
			WidgetHealth = CreateWidget<UUserWidget>(GetWorld, WidgetClassLoaded);
			if (WidgetHealth != nullptr)
			{
				WidgetHealth->AddToViewport();
			}
		}
		return WidgetHealth;
}





// void AAniels_mobileCharacter::LoadCharacter()
// {
//
// 	FString nameFile = TEXT("BP_animelCharacter");
// 	FString CharacterPath = FString::Printf(TEXT("/Game/ThirdPerson/Blueprints/%s.%s_C"), *nameFile, *nameFile);
// 	
// 	UClass* CharacterClass = LoadObject<UClass>(nullptr, *CharacterPath);
// 	if (CharacterClass && CharacterClass->IsChildOf(ACharacter::StaticClass()))
// 	{
// 		APlayerController* PlayerController = UGameplayStatics::GetPlayerController(GetWorld(), 0);
// 		ACharacter* Character = GetWorld()->SpawnActor<ACharacter>(CharacterClass, PlayerController->GetSpawnLocation(), FRotator::ZeroRotator);
//
// 		if (Character)
// 		{
// 			PlayerController->UnPossess();
// 			PlayerController->Possess(Character);
// 		}
// 		else
// 		{
// 			GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("No cargo el personaje"));
// 		}
// 	}
// }

