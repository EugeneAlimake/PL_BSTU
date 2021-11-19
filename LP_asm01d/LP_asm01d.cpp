extern "C"
{
	int getmax(int* arr, int length)
	{
		int rc = arr[0];

		for (int i = 0; i < length; i++)
			if (arr[i] > rc)
				rc = arr[i];

		return rc;
	}

	int getmin(int* arr, int length)
	{
		int rc = arr[0];

		for (int i = 0; i < length; i++)
			if (arr[i] < rc)
				rc = arr[i];

		return rc;
	}
}
