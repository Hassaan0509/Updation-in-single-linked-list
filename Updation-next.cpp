int list::updateNext(int prevValue, int value)
{
	node* temp = head;
	while (temp != NULL)
	{
		if (temp->data == prevValue)		//preValue = after which the updation is required
		{
			temp->next->data = value;
			return 1;
		}
		temp = temp->next;
	}
	return 0;
}