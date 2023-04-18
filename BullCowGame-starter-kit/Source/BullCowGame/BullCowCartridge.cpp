// Fill out your copyright notice in the Description page of Project Settings.
#include "BullCowCartridge.h"

void UBullCowCartridge::BeginPlay() // When the game starts
{
    Super::BeginPlay();

    // Welcoming the player
    PrintLine(TEXT("Welcome to the Bulls & Cows Game!"));
    PrintLine(TEXT("Guess the 4 letter word!")); // Magic number remove!
    PrintLine(TEXT("Press enter to continue."));

    InitGame(); // Setting up game

    // Prompt guess from player
}

void UBullCowCartridge::OnInput(const FString& Input) // When the player hits enter
{
    ClearScreen();

    // Checking if player guess is correct

    if (Input == HiddenWord)
    {
        PrintLine(TEXT("You win!!"));
    }
    else
    {
        PrintLine(TEXT("You lose!"));
    }

    // Check if input is an isogram, then prompt to guess again
    // Check if right number of chars, then prompt to guess again
    // Remove life if guess is incorrect & doesn't have right amount of chars
    // Check how many lives are remaining; if > 0 prompt user input again & show lives left, else print losing msg & hidden word(?)
    // Ask user to guess again (or press enter to play again?); if yes (check user input), set lives & hidden word again(?) & prompt guess, else quit game

}

void UBullCowCartridge::InitGame()
{
    HiddenWord = TEXT("torchwood");
    Lives = 3;
}