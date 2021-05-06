/*
	- Pure CPP actor doesn't have a root component defined(hence no transforms in the world outiner and level editor)
	- Create a CPP actor in the engine 
	- Attach USphereComponent as a root component in the code.
	- Place the actor in the level editor.
*/

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LevelGenActor.generated.h"

UCLASS()
class U426_IFCTST_API ALevelGenActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ALevelGenActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components");
	class USphereComponent* SphereComponent;
};
