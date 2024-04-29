class Word{
    static void display(String name){
        System.out.println(name.length());
        int count=0;
        for(int i=0;i<name.length();i++){
            if(name.charAt(i)==97 || name.charAt(i)==101 || name.charAt(i)==105 || name.charAt(i)==111||name.charAt(i)==117){
                count++;
            }
        }
        System.out.println(count);
    }
}
class Seven{
    public static void main(String args[]){
        Word w1 = new Word();
        w1.display("Maahir");
    }
}