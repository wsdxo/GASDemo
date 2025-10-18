// Fill out your copyright notice in the Description page of Project Settings.


#include "GASDemo/Public/Character/GD_CharacterBase.h"


// Sets default values
AGD_CharacterBase::AGD_CharacterBase()
{
	PrimaryActorTick.bCanEverTick = false;
	GetMesh()->VisibilityBasedAnimTickOption=EVisibilityBasedAnimTickOption::AlwaysTickPoseAndRefreshBones;
}


