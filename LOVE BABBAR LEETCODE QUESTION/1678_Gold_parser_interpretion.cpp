/*
1678. Goal Parser Interpretation
Easy
1.2K
79
Companies
You own a Goal Parser that can interpret a string command. The command consists of an alphabet of "G", "()" and/or "(al)" in some order. The Goal Parser will interpret "G" as the string "G", "()" as the string "o", and "(al)" as the string "al". The interpreted strings are then concatenated in the original order.

Given the string command, return the Goal Parser's interpretation of command.

 

Example 1:

Input: command = "G()(al)"
Output: "Goal"
Explanation: The Goal Parser interprets the command as follows:
G -> G
() -> o
(al) -> al
The final concatenated result is "Goal".
Example 2:

Input: command = "G()()()()(al)"
Output: "Gooooal"
Example 3:

Input: command = "(al)G(al)()()G"
Output: "alGalooG"
 

Constraints:

1 <= command.length <= 100
command consists of "G", "()", and/or "(al)" in some order.


*/

class Solution {
public:
    string interpret(string command) {
        string temp;
        for(int i=0;i<command.size();) // yaha pe i ke andar increment nhi ho ga loop
                                    // ke bahar condition me incremment ho ga
        {
            if(command[i]=='G')
            {
            temp=temp+'G';
            i++;
            }

// yaha pe elseif hi lage ga na ki if because elseif means agr 
// if condition false then elseif condition execue kare ga
// agr true rahe gi to elseif check nhi ho ga
             else if((command[i+1]==')'))
            {
            temp=temp+'o';
            i+=2;
            }
            else
            {
            temp=temp+"al";
            i+=4;
            }
        }
        return temp;
        
    }
};