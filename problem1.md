# Problem 1: Inclusive Speech Conversion

## Problem Description

Write a program that converts male speech to inclusive speech that includes both male and female. The
program will ask for a sentence, read the sentence into a string variable, and replace all occurrences of 
masculine pronouns with both-gender pronouns. For example, it will replace "he" with "he or she". 
Thus, the input sentence.

This will be a long program that requires a good deal of patience in order for your algorithm to consider 
all corner cases. Your program should not replace the string "he" when it occurs inside another word, 
such as "here". A word is any string consisting of the letters of the alphabet and delimited at each end 
by a blank, the end of the line, or any other punctuation letter, e.g. "Did you ask him?" is going to 
be "Did you ask him or her?" but "HE2 is a new store." will stay the same. You do 
not need to differentiate between cases when you put "her" and cases when you put "hers" but you 
can try

## Input

<pre> See an adviser and talk to him. He will guide you. </pre>

## Output
<pre> See an adviser and talk to him or her. He or she will guide you. </pre>

