int main()
{
	int n,m,x,i,j;
	int a[10],b[10],c[10];
	int flag[10];
	scanf("%d %d",&n, &m);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<=m;i++)
	{
		scanf("%d",&c[i]);
	}

	for(i=1; i<=2n-1; i++)
	{
		flag[i]==0;
	}

	for(i=1;i<=2n-1;i++)
	{
		b[2i-1]=a[i];
		flag[2i-1]=1;
	}

	int x=b[2n-1];
	b[2n-2]=b[2n-1];
	flag[2n-1]=0;
	flag[2n-2]=1;

	for(i=2n-1; i>=1; i--)
	{
		if(flag[i]==1)
		{
			j=i-1;
			while(j>1)
			{
				if(flag[j]==0)
				{
					b[j]=b[i];
					flag[j]=1;
					flag[i]=0;
					break;
				}
				else
				{
					j--;
				}

			}
		}
		else
		{
			continue;
		}
	}



}