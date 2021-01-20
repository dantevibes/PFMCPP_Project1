#if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1

Purpose:  This project will get you thinking correctly about choosing good names for the tasks that your objects will perform. 
This project will also introduce you to the review process, and how Pull Requests work.
I will request a change be made to one of your 10 nouns for the sole purpose of showing how the review process works.

 1) write out 10 nouns in the space provided below.
    Choose nouns that do things.  
    avoid choosing nouns that have things done TO them.
    If your noun consists of multiple words, use camelCaseToNameIt.
 
 2) for each of the 10 nouns, write out 3 actions it might perform, in plain english.
    a) AVOID state-checking actions, like "Car has a horn".  i.e.
        car.hasHorn()
    b) We use 'can' and 'has' to check the state of objects, so they aren't really 'action' verbs.
        "the Car blows its horn" is a better action, because the car is doing something.  its state is not being checked.  i.e.
            car.blowsHorn()
    c) choose actions that your noun does.  Do not write out actions that are performed on your noun.
        for example: 
            noun: lightBulb.
            action: turns on.  
                This is a bad action because someone else turns on the light.  the light doesn't turn itself on. 
            a better action would be: 
                illuminates room
                This is a better action, because this is what lightbulbs do.  
            other actions that would work:
                action: consume electricity
                action: burn out and destroy filament.

        
 3) write out how you'd call that action in pseudo code, in the space after the plain-english action
 
 4) If the action requires multiple words, use camelCaseToNameIt
     don't forget the semi-colon after each statement
 */

   
//  example)
//  Noun:       arm                     // 1)
//  action 1:   the arm extends         // 2)
arm.extend();                           // 3)
//  action 2:   the arm flexes          // 2)
arm.flex();                             // 3)
//  action 3:   the arm rotates conter-clockwise
arm.rotateCounterClockwise();           // 4) demonstrates CamelCase


//  1)
//  Noun: hammer
//  action 1: hammer hits a nail.
hammer.hitNail();
//  action 2: hammer pulls nail.
hammer.pullNail();
//  action 3: hammer breaks a PiggyBank
hammer.breakPiggyBank();

//  2) 
//  Noun: seal
//  action 1: the seal swims
seal.swim();
//  action 2: the seal flaps its flippers
seal.flapFlippers();
//  action 3: the seal catches fish
seal.catchFish();

//  3)
//  Noun: Bus Driver
//  action 1: tells kids to quiet down
busDriver.tellKidsToQuietDown();
//  action 2: parks bus
busDriver.parkBus();
//  action 3: presses on the gas pedal
busDriver.pressDownGasPedal();

//  4)
//  Noun: Pool Pump
//  action 1: pumps water
poolPump.pumpWater();
//  action 2: makes a loud noise
poolPump.makeLoudNoise();
//  action 3: filters water
poolPump.filterWater(); 

//  5)
//  Noun: Muddy human
//  action 1: turns on the shower
muddyHuman.turnOnShower();
//  action 2: tracks mud through the house
muddyHuman.trackMudThroughHouse();
//  action 3: put shampoo in hair
muddyHuman.putShampooInHair(); 

//  6)
//  Noun: BMX biker
//  action 1: pedals fast
bmxBiker.pedalFast();    
//  action 2: bunny hops
bmxBiker.bunnyHop();
//  action 3: ditches bike
bmxBiker.ditchBike();

//  7)
//  Noun: Baseball player
//  action 1: steps up to bat
baseballPlayer.stepUpToBat();
//  action 2: hits Home Run
baseballPlayer.hitHomeRun();
//  action 3: runs for glory
baseballPlayer.runForGlory();

//  8) 
//  Noun: one hot momma
//  action 1: Seduces the men
oneHotMomma.seduceTheMen();
//  action 2: Inspires the women
oneHotMomma.inspireTheWomen();
//  action 3: Handles the business.
oneHotMomma.handleTheBusiness();

//  9)
//  Noun: Saxophonist
//  action 1: plays beautiful melody
saxophonist.playBeautifulMelody();
//  action 2: rips an awesome solo
saxophonist.ripAwesomeSolo();
//  action 3: cleans saxophone
saxophonist.cleanSaxophone();

//  10)
//  Noun: Chef
//  action 1: cooks food
chef.cookFood();
//  action 2: chops veggies
chef.chopVeggies();
//  action 3: serves meal personally
chef.serveMealPersonally();

#endif

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main()
{
    std::cout << "good to go" << std::endl;
    return 0;
}
