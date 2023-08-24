#include "lists.h" 
  
 /** 
  * frees a list 
  * @head: head of the linked list. 
  * No return. 
  */ 
  
 void free_list(list_t *head)

 { 
         list_t *current; 
  
         while ((current = head) != NULL) 
         { 
                 free(current->str); 
                 free(current); 
         } 
 }
