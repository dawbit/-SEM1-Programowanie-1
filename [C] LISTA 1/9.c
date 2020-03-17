#include <stdio.h>
#include <stdlib.h>

int main()
{

    char zdanie[1024];
    int l, i=0;
    printf("Wprowadz zdanie: ");
    fgets(zdanie, 1024, stdin);
    l = strlen(zdanie)-2;
    for (l; l>=0; l--)
    {
        if (zdanie[i]==' '){
        	i++;
    	}
    	
        if (zdanie[l]== ' '){
			l--;
    	}
    	
    	
    	if (zdanie[i]!=zdanie[l]){
        	printf("Zdanie nie jest polindomem");
        	return 0;
    	}
		i++;
    }
    printf("Zdanie jest polindromem");   
    return 0;
}
