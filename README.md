# DPS-Fest-Problem-A-2023


Pokémon-Multiplier


QUESTION :


Mad Scientist Okarin has created a marvelous machine! In this machine, if he places one Pokémon in the morning, by nightfall, it magically doubles in number. Okarin's goal is to acquire "n" Pokémon from this extraordinary machine.

However, there are some rules Okarin must follow:

1)He can only put "one" Pokémon in the machine on a particular day, and only in the morning.

2)Placing a Pokémon is entirely Okarin's choice. He may choose not to put a Pokémon on a specific date without any consequences.

3)Every night, the number of Pokémon in the machine doubles automatically.

4)Initially, Okarin starts with one Pokémon in the machine, which sets the Pokémon-Multiplier.

Now, we need to determine the minimum number of Pokémons Okarin must place in the machine (including the first Pokémon to initialize the machine) over the entire time period to achieve his desired number, "n".

EL PSY CONGROO!

INPUT : 

The one and only line of input contains the  "n" number of Pokémons that Okarin wants.
Okarin is not a greedy man. Hence (1<=n<=10^9).

OUTPUT : 

Print a single output statement which shows the minimum number of Pokémons Okarin himself should place inside the Pokémon-Multiplier over the entire period to get the desired "n".


RESTRAINTS :

time limit per test : 2 seconds

memory limit per test : 256 megabytes

input :  standard input

output : standard output



EXAMPLE :

INPUT :

39

OUTPUT :

4

EXPLANATION : 

(Originally 0 Pokémons in the Pokémon-Multiplier)

DAY 1 Morning : 1 Pokémon added (0+1 Pokémon in the machine)

DAY 2 Morning : 0 Pokémon added (2 Pokémon in the machine)

DAY 3 Morning : 0 Pokémon added (4 Pokémon in the machine)

DAY 4 Morning : 1 Pokémon added (8+1 Pokémon in the machine)

DAY 5 Morning : 1 Pokémon added (18+1 Pokémon in the machine)

DAY 6 Morning : 1 Pokémon added (38+1 Pokémon in the machine)

Therefore, Okarin himself had to add 4 Pokémons to get 39 Pokémons frim the Pokémon-Multiplier.


OTHER TEST  CASES THAT CAN BE REFERRED TO : 


TEST CASE 1 :


INPUT : 12

EXPECTED OUTPUT : 2


TEST CASE 2 :


INPUT : 20

EXPECTED OUTPUT : 2


TEST CASE 3 :


INPUT : 8

EXPECTED OUTPUT : 1


TEST CASE 4 :


INPUT : 12

EXPECTED OUTPUT : 2


TEST CASE 5 :


INPUT : 157

EXPECTED OUTPUT : 5


NOTE : MY SOLUTION USES GREEDY ALGORITHM. THE TIME COMPLEXITY OF MY CODE IS O(log n)

THANK YOU,

ABDUL RIYAN

8/02/2023





