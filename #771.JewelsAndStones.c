int numJewelsInStones(char* jewels, char* stones) {
    int flag=0;
    for(int i=0;jewels[i]!='\0';i++){
        for(int j=0;stones[j]!='\0';j++){
            if(stones[j]==jewels[i])
                flag++;
        }
    }
    return flag;
}
