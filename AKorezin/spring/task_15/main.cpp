#include <iostream>
#include <cstring>
char *mystrstr(const char *, const char *);

int main(int argc,char** argv)
{
	char a[]="Specifies the protocol family to use. The protocol family identifier can be one of inet, inet6, bridge, ipx, dnet or link.  If this option is not present, the protocol family is guessed from other arguments. If the rest of the command line does not give enough information to guess the family, ip falls back to the default one, usually inet or any. link is a special family identifier meaning that no networking protocol is involved.";
	char b[]="any";
	char *c=mystrstr(a,b);
	std::cout<<c<<std::endl;
	c=strstr(a,b);
	std::cout<<c<<std::endl;
	return 0;
}

char *mystrstr(const char *str1,const char *str2)
{
	const char *mystr1=str1;
	const char *mystr2=str2;
	size_t str1_len,str2_len;

	while(*mystr1++);
	while(*mystr2++);
	str1_len=mystr1-str1-1;
	str2_len=mystr2-str2-1;

	if(str2_len>str1_len)
		return NULL;
	if(str2_len==0)
		return (char *)str1;

	int tab[255];
	for(int i=0;i<256;i++)
		tab[i]=str2_len;
	for(int i=0;i<str2_len-1;i++)
		tab[str2[i]]=str2_len-i-1;
	int i=str2_len-1;
	int k=i;
	int j=i;
	while(j>=0 && i<str1_len)
	{
		j=str2_len-1;
		k=i;
		while (j>=0 && str1[k]==str2[j])
		{
			k--;
			j--;
		}
		i+= tab[str1[i]];
	}
	
	if (k>=str1_len-str2_len)
		return NULL;
	else
	{
		for(i=0,mystr1=str1;i<k+1;i++,mystr1++);
		return (char *)mystr1;

	}
}

