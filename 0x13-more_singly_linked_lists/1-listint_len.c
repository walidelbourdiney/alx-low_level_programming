nclude "lists.h"

/*
 * listint_len - Entry point
 * Description: Retutrn the number of elements in a linked listint_t list.
 *@h: points to the head of the node of the list.
 */

size_t listint_len(const listint_t *h)
{
	/*counter initialization to zero*/
	size_t counter = 0;

	while(h)
	{
		counter++;
		/*moves to next node in list*/
		h = h->next;	
	}
	return (counter);
}

