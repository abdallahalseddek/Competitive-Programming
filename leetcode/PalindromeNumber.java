class PalindromeNumber {
    public boolean isPalindrome(int x) {
        String word = String.valueOf(x);
        boolean result = false;
        int length = word.length();
        String reverse="";
        for ( int i = length - 1 ; i >= 0 ; i-- )
            reverse = reverse + word.charAt(i);
        if (word.equals(reverse))
            return true;
        else
            return false;
    }
}