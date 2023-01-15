// Fill out your copyright notice in the Description page of Project Settings.
#include "BullCowCartridge.h"

void UBullCowCartridge::BeginPlay() // When the game starts
{
    Super::BeginPlay();
    PrintLine(TEXT("Welcome to the Bulls & Cows Game!"));
    PrintLine(TEXT("Guess the 4 letter word!")); // Magic number remove!
    PrintLine(TEXT("Press enter to continue."));

    HiddenWord = TEXT("torchwood");
}

void UBullCowCartridge::OnInput(const FString& Input) // When the player hits enter
{
    ClearScreen();

    if (Input == HiddenWord)
    {
        PrintLine(TEXT("You win!!"));
    }
    else
    {
        PrintLine(TEXT("You lose!"));
    }
}