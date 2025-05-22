# C-basics
learning C language from basics to building projects(restarting from strach)

#avg- 
in my very first code of c language I chose to write a program of grading system. in this i chose a maximum of 5 subjects but the code works
for any number of subjects. based on number of subjects,score in the each subject,grades are allocated along with the average of the marks in all subjects 
in this I used the variable noofgrades to store the total number of subjects the candidate is appearing. based on that i wrote a for loop to save grades of all the subjects in the array grades. which are further added together in the variable sum which i used as integer value then to find the average i divided the total sum with the noofgrades variable to get the variable which is a decimal value but I preferred to keep it integer without using type conversion. then assigned the grades used a seperate function 

-> TOPICS USED:
-ARRAYS,LOOPS,DATA TYPES,FUNCTIONS,COMPARISON AND ASSIGNMENT OPERATORS

#simplecalculator-

I created a code where it reads 2 input variables in the float and a character which is the arithematic operator. in which I used the switch case to compare the character to the case and perform operations accordingly in each code block

this calculator performs addition,subtraction,multiplication.divison.

->TOPICS USED:
DATA TYPES,ARITHEMATIC OPERATORS,SWITCH 

#contact manager -

In this code we give the user a menu with options to add a contact,search for a contact,view all contacts,delete a contact. 

for this we initinally created a structure of name contact which contains name,phone,email strings.
then based on the chose of the user. we used switch case. if add a contact is chosen we create a sturture with contacts variable in which we store all the new contacts.

we took another int variable contact count to maintain the count of all the contants which updates after adding each contact

we display all the data avaiable in structure if view details is chosen.

if either delete or search a contact is chosen we ask the user to enter the name of the contact and using string comparison from <string.h> library.
if match we perform required operation.

if none of the above we ask the user to exit 

-> TOPICS USED

DATA TYPES,STRINGS,OPERATIONS ON STRINGS,STRUCTURES,LOOPS,SWITCH

