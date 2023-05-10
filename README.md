# Push_swap

First, we start with two stacks called A and B.

A is filled with some random integers (without duplicate) and B is empty. 

We can perform certain instructions on these stacks, and the goal is to sort all these integers with the least instructions possible.

![image](https://github.com/izzypt/Push_swap/assets/73948790/5a04b89f-4ed9-48bf-bdd4-6bf56766cbb7)



And here is the list of instructions that we can perform :

- sa (swap a): Swap the first 2 elements at the top of stack a. 
- sb (swap b): Swap the first 2 elements at the top of stack b.
- ss : sa and sb at the same time.

![image](https://github.com/izzypt/Push_swap/assets/73948790/407c667f-1eae-47d4-a0c3-a8c337168fd3)

- pa (push a): Take the first element at the top of b and put it at the top of a. 
- pb (push b): Take the first element at the top of a and put it at the top of b.

![image](https://github.com/izzypt/Push_swap/assets/73948790/47290d7c-112c-4de7-8b58-bac1a6bd1785)

- ra (rotate a): Shift up all elements of stack a by 1. The first element becomes the last one.
- rb (rotate b): Shift up all elements of stack b by 1. The first element becomes the last one.
- rr : ra and rb at the same time.

![image](https://github.com/izzypt/Push_swap/assets/73948790/c5bb74b4-8d3d-47bc-8622-22ad9feea6a8)


- rra (reverse rotate a): Shift down all elements of stack a by 1. The last element becomes the first one.
- rrb (reverse rotate b): Shift down all elements of stack b by 1. The last element becomes the first one.
- rrr : rra and rrb at the same time.

![image](https://github.com/izzypt/Push_swap/assets/73948790/a7ea4981-003b-48c3-b171-a48887ce7fd0)





# Implementing the stack

![image](https://github.com/izzypt/Push_swap/assets/73948790/04aac693-59b3-4f62-8d3c-4fe703f03206)



Decided to implement the stack by using a linked list.

### Another helpfull topics :

https://medium.com/@jamierobertdawson/push-swap-the-least-amount-of-moves-with-two-stacks-d1e76a71789a

https://medium.com/nerd-for-tech/push-swap-tutorial-fa746e6aba1e
