// Fill out your copyright notice in the Description page of Project Settings.


#include "CollectableWeapons.h"
#include "Components/BoxComponent.h" 
#include "AbilitySystemComponent.h" 
#include "AbilitySystemInterface.h" 
#include "Abilities/GameplayAbility.h" 


ACollectableWeapons::ACollectableWeapons()
{
    PrimaryActorTick.bCanEverTick = true;
    
    CollisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("CollisionBox"));
    RootComponent = CollisionBox;
    CollisionBox->SetBoxExtent(FVector(50.0f, 50.0f, 50.0f));
    CollisionBox->SetCollisionProfileName(TEXT("OverlapAllDynamic"));
    // CollisionBox->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
    // CollisionBox->SetGenerateOverlapEvents(true);
    // CollisionBox->SetCollisionResponseToAllChannels(ECR_Ignore);
    // CollisionBox->SetCollisionResponseToChannel(ECC_Pawn, ECR_Overlap);
    CollisionBox->OnComponentBeginOverlap.AddDynamic(this, &ACollectableWeapons::OnOverlapBegin);
}

void ACollectableWeapons::BeginPlay()
{
    Super::BeginPlay();
}

void ACollectableWeapons::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

void ACollectableWeapons::OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
    UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
    // UE_LOG(LogTemp, Warning, TEXT("CollectableWeapons: Overlap algılandı! Diğer Aktör: %s"), OtherActor ? *OtherActor->GetName() : TEXT("NULL"));
    //
    // if (OtherActor)
    // {
    //    IAbilitySystemInterface* AbilitySystemInterface = Cast<IAbilitySystemInterface>(OtherActor);
    //    if(AbilitySystemInterface)
    //    {
    //       UAbilitySystemComponent* AbilitySystem = AbilitySystemInterface->GetAbilitySystemComponent();
    //       if(AbilitySystem && AbilityClass)
    //       {
    //           FGameplayAbilitySpecHandle AbilityHandle = AbilitySystem->GiveAbility(FGameplayAbilitySpec(AbilityClass, 1, INDEX_NONE, this));
    //          if (AbilityHandle.IsValid())
    //          {
    //             AbilitySystem ->TryActivateAbility(AbilityHandle);
    //             UE_LOG(LogTemp, Warning, TEXT("CollectableWeapons: Yetenek verildi ve %s için etkinleştirildi. Toplanabilir yok edildi."), *OtherActor->GetName());
    //             Destroy(); 
    //          }
    //          else
    //          {
    //              UE_LOG(LogTemp, Warning, TEXT("CollectableWeapons: %s'e yetenek verilemedi."), *OtherActor->GetName());
    //          }
    //       }
    //       else
    //       {
    //           UE_LOG(LogTemp, Warning, TEXT("CollectableWeapons: AbilitySystem NULL veya AbilityClass %s için atanmamış."), OtherActor ? *OtherActor->GetName() : TEXT("NULL"));
    //       }
    //    }
    //    else
    //    {
    //        UE_LOG(LogTemp, Warning, TEXT("CollectableWeapons: Diğer Aktör %s, IAbilitySystemInterface'i uygulamıyor."), OtherActor ? *OtherActor->GetName() : TEXT("NULL"));
    //    }
    // }
}