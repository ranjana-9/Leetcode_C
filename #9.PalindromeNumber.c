bool isPalindrome(int x) {
    long int temp=0;
    int val=x;
    if(x<0)
        return false;
    while(x>0){
        temp= temp*10 +x%10;
        x=x/10;
    }
    if(val==temp)
        return true;
    else
        return false;
}
