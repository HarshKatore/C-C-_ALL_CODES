/*
Containers, objects which store data, Algorithms, set of procedures to process data, and Iterators, objects which point to some element in a 
container. 
Containers are themselves of three types: 

Sequence Containers
Associative Containers
Derived Containers


Sequence Containers
A sequence container stores that data in a linear fashion. Refer to the illustration below to understand what storing something in a linear
 fashion means.new one get added to other end

 Sequence containers include Vector, List, Dequeue etc. These are some of the most used sequence containers.

 Associative Containers
An associative container is designed in such a way that enhances the accessing of some element in that container. It is very much used when the
 user wants to fastly reach some element. Some of these containers are, Set, Multiset, Map, Multimap etc.  They store their data in a tree-like
  structure.  basicallu tree like structure


  Derived Containers 
 As the name suggests, these containers are derived from either the sequence or the associative containers. They often provide you with some 
 better methods to deal with your data. They deal with real life modelling. Some examples of derived containers are Stack, Queue, Priority
  Queue, etc. The following illustration give you the idea of how a stack works.

  like stack add and remove from above only and lifo

  Now since we have got the basic idea of all the three types of containers, a question which might arise is when to use which.  So, let’s deal with that,

In sequence containers, we have Vectors, which has following properties:

Faster random access to elements in comparison to array
Slower insertion and deletion at some random position, except at the end.
Faster insertion at the end.
 

In Lists, we have,

Random accessing elements is too slow, because every element is traversed using pointers.
Insertion and deletion at any position is relatively faster, because they only use pointers, which can easily be manipulated.
In associative containers, every operation except random access is faster in comparison to any other containers, be it inserting or deleting any 
element.

In associative containers, we cannot specifically tell which operation is faster or slower, we’ll have to inspect every data structure separately,
 and to get a clearer picture of all of these, you can access my Data Structure course : Data Structures and Algorithms Course in Hindi

For now, I'd like to hold on to our topic STL, and get you a strong hold on this too. In the coming videos, we’ll deal with our vectors, list,
 dequeues, set, multiset, maps, stack and much more. Just bear with me.

Thank you, for being with me throughout, hope you liked the tutorial. If you haven’t checked out the whole playlist yet, move on to
 codewithharry.com or my YouTube channel to access it. I hope you enjoy them all. See you all in the next tutorial where we’ll talk about Vectors
  in C++ STL in detail. Till then keep coding.

Previous

*/