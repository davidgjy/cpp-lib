#ifndef _Algorithm_Sorter_H_
#define _Algorithm_Sorter_H_

template <typename Item>
class Sorter
{
public:
	static void selectionSort(Item a[], int l, int r);
	static void show(Item a[], int length);
private:
	static void exch(Item &A, Item &B);
};

template <typename Item>
void Sorter<Item>::show(Item a[], int length)
{
	for (int i = 0; i < length; i++)
		cout << a[i] << " ";
	cout << endl;
}

template <typename Item>
void Sorter<Item>::exch(Item &A, Item &B)
{
	Item t = A; A = B; B = t;
}

template <typename Item>
void Sorter<Item>::selectionSort(Item a[], int l, int r)
{
	for (int i = l; i < r; i++)
	{
		int min = i;
		for (int j = i + 1; j <= r; j++)
		if (a[j] < a[min]) min = j;
		exch(a[i], a[min]);
	}
}

#endif