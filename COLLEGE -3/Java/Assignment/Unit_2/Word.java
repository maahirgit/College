// Question 6

class Word{
    public static void WordStatus(String word){
        int size = word.length();
        int count=0;
        String Word;
        System.out.println(size);
        Word = word.toLowerCase();
        for(int i=0;i<size;i++){
            if(Word.charAt(i)=='a' || Word.charAt(i)=='e' || Word.charAt(i)=='i' || Word.charAt(i)=='o' || Word.charAt(i)=='u'){
                count++;
            }
        }
        System.out.println(count);
    }

    public static void main(String args[]){
        String inputword = "Hello";
        WordStatus(inputword);
    }
}