# Lab03

C++ Class Templates

## Background

Class templates...

## Objectives

The objectives of this lab are:

1. Have fun
1. Have more fun
1. And have even more fun

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

### Creating an Interface

Discuss how C++ doesn't support interfaces, per se.

1. Modify `PlainBox` to be a subclass of the abstract class `Box` as described on page 46.

### Implementing an Interface

Discuss how this is done in C++.

## Submission Details

As usual, prior to submitting your assignment to Teams, be sure that you have committed and pushed your final changes to GitHub. Once your final changes have been pushed, create a pull request that seeks to merge the changes in your `develop` branch into your `master` branch. Once your pull request has been created, submit the URL of your assignment repository (i.e., not the URL of the pull request) as a Link Resource in Teams. Please note: the timestamp of the submission on Teams is used to assess any late penalties if and when warranted, not the date/time you create your pull request. **No exceptions will be granted for this oversight**.

## Due Date

Your Teams submission is due by 11:59 PM, Friday, September 11, 2020.

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
* 
