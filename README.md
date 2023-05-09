# Push_swap

First, we start with two stacks called A and B.

A is filled with some random integers (without duplicate) and B is empty. 

We can perform certain instructions on these stacks, and the goal is to sort all these integers with the least instructions possible.

![image](https://github.com/izzypt/Push_swap/assets/73948790/5a04b89f-4ed9-48bf-bdd4-6bf56766cbb7)



And here is the list of instructions that we can perform :

- sa (swap a) : Swap the top two numbers in A

- sb (swap b) : Swap the top two numbers in B

- ss : sa + sb

- ra (rotate a) : Top number in A goes to bottom of A

- rb (rotate b) : Top number in B goes to bottom of B

- rr : ra + rb

- rra (reverse rotate a) : Bottom number in A goes to top of A

- rra (reverse rotate b) : Bottom number in B goes to top of B

- rrr : rra + rrb

- pa (push a) : Top number in B goes to top of A

- pb (push b) : Top number in A goes to top of B
