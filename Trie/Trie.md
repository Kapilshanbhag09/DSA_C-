# Trie
* It is an efficient information re retrival data structure.
* Using trie, the search complexity can be brought to O(n).

## Node structure
```
Node{
  char data;
  hashmap(Key,Node *);
  bool isterminal;
}
```

## Application of Trie
* We can find a string in O(L) complexity where L is length of string to be searched
* We can print all words in alphabetical order
* Used for auto complete

## Disadvantage 
* Uses more space
