# Lab03

C++ Class Templates

## Background

**Class templates** are a C++ construct that gives us the power to specify the data type of the items contained in a data structure in a very generic way. Class templates allow you to define classes that are independent of the type of data stored in the structure.

**Header** (`.h`), or **specification, files** in C++ provide a mechanism to partially separate the design of the class from the implementation in the **source**, or **implementation** (`.cpp`) **file**. The header file must also contain a description of both the data fields for the class and any private methods used by the class. A client does not need to know about the private methods or data fields to use the class in a program. To provide a public interface for an ADT, you can write an abstract base class, thereby separating design from implementation. An abstract base class allows the client to take full advantage of polymorphism when using our class.

### A Problem to Solve

Suppose that a friend who is creating a video game asked you to design and develop a group of classes to represent three types of boxes carried by the characters in the game. Each type of box can only hold one item. A character can put an item in the box or look at the item in the box. The three types of boxes are:

* **Plain box**--a plain old box that holds only one item.
* **Toy box**--a box that has color and holds only one item.
* **Magic box**--a box that holds only one item, but magically changes it to the first item that was ever stored in the box.

Thus, our ADT needs to provide a way to create these boxes, put something in them, and look at what's in them.

## Objectives

The objectives of this lab are:

1. Understand the fundamental structure and syntax of class template declarations.
1. Recognize a nuance when working with class templates that have separate specification and implementation files.
1. Learn how to design and implement an interface in C++.

## Getting Started

As usual, these steps assume you have a GitHub account and that you have linked that account to our GitHub Classroom. If this isn't the case, please review the steps necessary as outlined in [Lab00](https://github.com/msu-csc232-fa20/lab00).

1. Accept this assignment by visiting the [GitHub Classroom Assignment Link](https://classroom.github.com/a/fX9TTJgc).
1. Once your repository is created on GitHub, clone your repository to your local development machine.
1. In whatever shell you use for `git` commands, navigate to the cloned repository and create a branch named `develop`:

    ```bash
    cd $WORKING_DIRECTORY
    git checkout -b develop
    ```

    where `WORKING_DIRECTORY` is the cloned repository folder.

1. Set yourself up for tracking local changes with GitHub by performing an initial push:

    ```bash
    git push -u origin develop
    ```

Now you are ready to begin development on this lab.

## Tasks

Following are a numberof tasks necessary to meet the lab's objectives.

### Pre-Lab Reading

C++ Interlude 1 provides all the context needed to actively engage in today's lab. After reading C++ Interlude 1, 

### Study Examples

1. Study Box class hierarchy and how instances of these classes are created in [BoxDriver.cpp](src/BoxDriver.cpp)
1. Compile and execute the Box driver. Once you have successfully done this, create additional types of box objects and explore their other operations. Recompile and observe the output of your updated program. Once that is working correctly, commit your changes with an appropriate commit message. _Make sure you're on your develop branch before you commit any changes_.

### Creating an Interface

C++ does not include the concept of an interface, _per se_ as other languages like Java. Instead, in order to create an interface, one usually creates an abstract class with all public, pure virtual method declarations and a destructor (See List C1-9).

1. Create a new file in the `src` folder named `BoxInterface.h`.
1. Type the code presented in C1-9 into this file.
1. When you have completed this task, stage your new file and commit it:

    ```bash
    git add src/BoxInterface.h
    git commit -m"LAB03 - Initial import of Box interface."
    ```

### Implementing an Interface

Again, since C++ doesn't really support the notion of an "interface," we don't really _implement_ an interface like the way we do in other languages like Java. Instead, we ultimately _extend_ the abstract class that represents our interface.

1. Modify `PlainBox` to be a subclass of the abstract class `Box` as described on page 46.
1. Recompile and execute the `BoxDriver`. Once you have this working, stage and commit your changes.

## Submission Details

As usual, prior to submitting your assignment to Teams, be sure that you have committed and pushed your final changes to GitHub. Once your final changes have been pushed, create a pull request that seeks to merge the changes in your `develop` branch into your `master` branch. Once your pull request has been created, submit the URL of your assignment repository (i.e., not the URL of the pull request) as a Link Resource in Teams. Please note: the timestamp of the submission on Teams is used to assess any late penalties if and when warranted, not the date/time you create your pull request. **No exceptions will be granted for this oversight**.

## Due Date

Your Teams submission is due by 11:59 PM, Saturday, September 12, 2020.

## Grading Rubric

This assignment is not graded, but future lab assignments are worth **3 points**.

Criteria          | Exceeds Expectations        | Meets Expectations             | Below Expectations | Failure                                                 |
------------------|-----------------------------|--------------------------------|--------------------|---------------------------------------------------------|
Pull Request (20%)| Submitted early, correct url| Submitted on-time; correct url | Incorrect URL            | No pull request was created or submitted          |
Code Style (20%)  | Exemplary code style        | Consistent, modern coding style    | Inconsistent coding style| No style whatsoever or no code changes present|
Correctness^ (80%)| All unit tests pass         | At least 80% of the unit tests pass| At least 60% of the unit tests pass| Less than 50% of the unit tests pass|

^ _The Google Test unit runner will calculate the correctness points based purely on the fraction of tests passed_. In this lab, there are no unit tests as this lab actually won't get graded; it's merely for practice.

### Late Penalty

If this lab really were graded, the following late penalties would be applied if necessary:

* In the first 24 hour period following the due date, this lab will be penalized 0.75 point meaning the grading starts at 2.25 (out of 3 total possible) points.
* In the second 24 hour period following the due date, this lab will be penalized 1.50 points meaning the grading starts at 1.5 (out of 3 total possible) points.
* After 48 hours, the assignment will not be graded and thus earns no points, i.e., 0 out of 3 possible points.

---

For those of you who do not have your textbook with you, the contents of Listing C1-9 are presented below:

```c++
#ifndef BOX_INTERFACE_
#define BOX_INTERFACE_

template<typename ItemType>
class BoxInterface
{
public:
    virtual void setItem( const ItemType& theItem ) = 0;
    virtual ItemType getItem( ) const = 0;
    virtual ~BoxInterface( ) = default;
}; // end BoxInterface

#endif
```

We can then indicate that our class `PlainBox` is derived from `BoxInterface` by changing its class header to

```c++
class PlainBox : public BoxInterface<ItemType>
```

In the future, when we design the public interface for an ADT, we will express that interface as an abstract class. When we introduce pointers in C++ Interlude 2, we will explore the importance and use of abstract classes in depth. Until then, we will use only abstract classes as a design tool for our ADTs.
