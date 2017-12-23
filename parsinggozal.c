//Leonard Gozal - 2015630017

//Program memeriksa sebuah input berupa syntax dalam bahasa C
//Input akan diperiksa apakah input tersebut berupa : identifier atau operator atau keyword yang tidak boleh digunakan

#include <stdio.h>
#include <string.h>

int periksa(char str[]){ //fungsi periksa apakah input = keyword
    char keywords[32][10] = {"auto","break","case","char","const","continue","default",
                            "do","double","else","enum","extern","float","for","goto",
                            "if","int","long","register","return","short","signed",
                            "sizeof","static","struct","switch","typedef","union",
                            "unsigned","void","volatile","while"}; //definisi string keyword
    int i, j = 0;
    
    //loop periksa string input dengan string keyword
    for(i = 0; i < 32; ++i){
        if(strcmp(keywords[i], str) == 0){
            j = 1;
            break;
        }
    }
    return j;
}

int main(){
	
	char input[1000], operators[] = "=-+*/%"; //definisi string input dan operator
	char *output; 
	
	printf("Masukkan input : ");
	scanf("%[^\n]",&input); //input sampai enter ditekan
	
	output=strtok(input," ,."); //bagi string input menjadi token saat ada space atau , atau .
	
	while(output!=NULL){ //loop
		if(strcmp(output,operators)!=1){ //bandingkan string input dengan string operator
			printf("%s adalah operator\n",output);
			output=strtok(NULL," ,.");
		}
		else if(periksa(output)==1){ //panggil fungsi periksa input = keyword
			printf("%s adalah keyword\n",output);
			output=strtok(NULL," ,.");
		}
		else
			printf("%s adalah identifier\n",output); //identifier
			output=strtok(NULL," ,.");
	}
}
