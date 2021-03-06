#define maxSize 10

int getPriority(char str)
{
	return 1;
}
void infixToPostFix(char infix[], char s2[], int& top2)
{
	char s1[maxSize];
	int top1 = -1;
	int i = 0;
	while (infix[i] != '\0')
	{
		if ('0' <= infix[i] && infix[i] <= '9')
		{
			s2[++top2] = infix[i];
			i++;
		}
		else if (infix[i] == '(')
		{
			s1[++top1] = '(';
			i++;
		}
		else if (infix[i] == '+' ||
			 	 infix[i] == '-' ||
				 infix[i] == '*' ||
				 infix[i] == '/' )
		{
			if (top1 == -1 ||
				s1[top1] == '(' ||
				getPriority(infix[i]) > getPriority(s1[top1]) )			
			{
				s1[++top1] = infix[i];
				i++;
			}
			else
			{
				s2[++top2] = s1[top1--];
			}
		}
		else if (infix[i] == ')')
		{
			while (s1[top1] != '(')
			{
				s2[++top2] = s1[top1--];
			}
			top1--;
			i++;
		}
		while (top1 != -1)
		{
			s2[++top2] = s1[top1--];
		}
	}

}