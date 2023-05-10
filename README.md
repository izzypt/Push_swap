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

![image](https://github.com/izzypt/Push_swap/assets/73948790/407c667f-1eae-47d4-a0c3-a8c337168fd3)

![image](https://github.com/izzypt/Push_swap/assets/73948790/c5bb74b4-8d3d-47bc-8622-22ad9feea6a8)

![image](https://github.com/izzypt/Push_swap/assets/73948790/a7ea4981-003b-48c3-b171-a48887ce7fd0)

![image](https://github.com/izzypt/Push_swap/assets/73948790/47290d7c-112c-4de7-8b58-bac1a6bd1785)

# Implementing the stack

Decided to implement the stack by using a lined list.

### Another helpfull topics :

https://medium.com/@jamierobertdawson/push-swap-the-least-amount-of-moves-with-two-stacks-d1e76a71789a

https://medium.com/nerd-for-tech/push-swap-tutorial-fa746e6aba1e
