//soln 1
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findWordsContaining(char** words, int wordsSize, char x, int* returnSize) {
    char *word;
    int k=0;
    int *arr=(int *)malloc(wordsSize*sizeof(int));
    for(int i=0;i<wordsSize;i++){
        word=words[i];
        for(int j=0;j<strlen(word);j++){
            if(word[j]==x){
                arr[k++]=i;
                break;
            }
        }
    }
    *returnSize=k;
    return arr;
}

/*soln 2 (the better soln)
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findWordsContaining(char** words, int wordsSize, char x, int* returnSize) {
    int k=0;
    int *arr=(int *)malloc(wordsSize*sizeof(int));
    for(int i=0;i<wordsSize;i++){
        int j=0;
        while(words[i][j]!='\0'){
            if(x==words[i][j]){
                arr[k++]=i;
                break;
            }
            j++;
        }
    }
    *returnSize=k;
    return arr;
}
*/
