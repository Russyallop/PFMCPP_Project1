#if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1

Purpose:  This project will get you thinking correctly about choosing good names for the tasks that your objects will perform. 
This project will also introduce you to the review process, and how Pull Requests work.

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
 
 5) When you finish, commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].

Make a pull request after you make your first commit and pin the pull request link to our DM thread.

send me a DM to check your pull request

 Wait for my code review.
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
//  Noun: loudspeaker
//  action 1:
loudspeaker.makesSound();
//  action 2:
loudpeaker.makesHiss();
//  action 3:
loudspeaker.makesCrackle();
//  2)
//  Noun: juno60
//  action 1:
juno60.makesSineSound();
//  action 2:
juno60.makesPolyphonicSound();
//  action 3:
juno60.gathersDust(); 
//  3)
//  Noun: photoFrame
//  action 1:
photoFrame.reflectsLight();
//  action 2:
photoFrame.facesOutward();
//  action 3:
 photoFrame.gathersDust();
//  4)
//  Noun: dysonVacuum
//  action 1:
dysonVacuum.sucks();
//  action 2:
dysonVacuum.sucksMax();
//  action 3:
dysonVacuum.usesPower(); 
//  5)
//  Noun:printer  
//  action 1:
printer.scan();
//  action 2:
printer.print();
//  action 3:
printer.copy(); 
//  6)
//  Noun: tap
//  action 1:
tap.coldWater();
//  action 2:
tap.hotWater();
//  action 3:
tap.drips(); 
//  7)
//  Noun: oven
//  action 1:
oven.bakes();
//  action 2:
oven.grills();
//  action 3:
oven.fanBakes(); 
//  8)
//  Noun: microwave
//  action 1:
microwave.heats();
//  action 2:
microwave.defrosts();
//  action 3:
microwave.beeps(); 
//  9)
//  Noun: dog
//  action 1:
dog.barks();
//  action 2:
dog.sits();
//  action 3:
dog.shits(); 
//  10)
//  Noun: bus
//  action 1:
bus.pullsIn();
//  action 2:
bus.pullsOut();
//  action 3:
bus.drivesStraight(); 


#endif

#include <iostream>
int main()
{
    std::cout << "good to go" << std::endl;
    return 0;
}
