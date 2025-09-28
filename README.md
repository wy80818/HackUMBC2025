# **HackUMBC Cyber Track Submission**
### *By Jakub Kotoulek*

This challenge is expected to be completed on linux.
There are 3 parts, the first two could be completed on windows, but the 3rd one requires to 
get information that only exists on linux.

After completing the 3 parts, the flag will be revealed.

The program is called `notMalware`, it's true.
(If you really want to check, you can compile the source code and compare the md5sum)

You only need to run the program using `./notMalware`

Other than that, have fun!

## Important Notes
Part 2 features a vulnerability that when "overdone" will cause a segfault at the end of the program's runtime and won't return the flag. 
To circumvent this, reduce the "answer" and find the sweetspot.
This bug mainly exists because of a design oversight, and should probably be used not in conjunction with other parts in the same file.
