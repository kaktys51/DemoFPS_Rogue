
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "CustomFPCaracter.generated.h"

class USkeletalMeshComponent;
class UCameraComponent;

UCLASS()
class DEMOFPS_API ACustomFPCaracter : public ACharacter
{
	GENERATED_BODY()

public:
	ACustomFPCaracter(const FObjectInitializer& ObjectInitializer);

protected:
	virtual void BeginPlay() override;

	UPROPERTY(EditDefaultsOnly, BlueprintReadonly, Category = Movement)
	class URogueMovementComponent* RogueMovementComponent;

public:	

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	UCameraComponent* FirstPersonCameraComponent;

	//UPROPERTY(VisibleDefaultsOnly, Category = Mesh)
	//USkeletalMeshComponent* MashHands;

	virtual void Tick(float DeltaTime) override;

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};