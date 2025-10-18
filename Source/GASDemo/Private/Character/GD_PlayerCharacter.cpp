// Fill out your copyright notice in the Description page of Project Settings.


#include "GASDemo/Public/Character/GD_PlayerCharacter.h"

#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/SpringArmComponent.h"


// Sets default values
AGD_PlayerCharacter::AGD_PlayerCharacter()
{
	PrimaryActorTick.bCanEverTick = false;
	CameraBoom=CreateDefaultSubobject<USpringArmComponent>("CameraBoom");
	CameraBoom->SetupAttachment(GetRootComponent());
	CameraBoom->TargetArmLength=600.f;
	CameraBoom->bUsePawnControlRotation=true;

	GetCapsuleComponent()->InitCapsuleSize(42.f,96.f);

	bUseControllerRotationPitch=false;
	bUseControllerRotationRoll=false;
	bUseControllerRotationYaw=false;

	GetCharacterMovement()->bOrientRotationToMovement=true;
	GetCharacterMovement()->RotationRate=FRotator(0.f,540.f,0.f);
	GetCharacterMovement()->JumpZVelocity=500.f;
	GetCharacterMovement()->AirControl=0.35f;
	GetCharacterMovement()->MaxWalkSpeed=500.f;
	GetCharacterMovement()->MinAnalogWalkSpeed=20.f;
	GetCharacterMovement()->BrakingDecelerationWalking=2000.f;
	GetCharacterMovement()->BrakingDecelerationFalling=1500.f;

	FollowCamera=CreateDefaultSubobject<UCameraComponent>("FollowCamera");
	FollowCamera->SetupAttachment(CameraBoom,USpringArmComponent::SocketName);
	FollowCamera->bUsePawnControlRotation=false;
}

