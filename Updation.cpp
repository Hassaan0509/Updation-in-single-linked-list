int list::update(int oldValue, int newValue)
{
	node* temp = head;
	while (temp != NULL)
	{
		if (temp->data == oldValue)		//oldValue = the value which we want to update
		{
			temp->data = newValue;		//newValue = the value which we want after update
			return 1;
		}
		temp = temp->next;
	}
	return 0;
}