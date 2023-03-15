import java.util.HashMap;
import java.util.Map;

public class RomanToIntegar {
    public int romanToInt(String inputWord) {

        int result = 0;
        Map<Character,Integer> map = new HashMap<Character,Integer>();
        map.put('I',1);
        map.put('V',5);
        map.put('X',10);
        map.put('L',50);
        map.put('C',100);
        map.put('D',500);
        map.put('M',1000);

        inputWord = inputWord.replace("IV","IIII");
        inputWord = inputWord.replace("IX","VIIII");
        inputWord = inputWord.replace("XL","XXXX");
        inputWord = inputWord.replace("XC","LXXXX");
        inputWord = inputWord.replace("CD","CCCC");
        inputWord = inputWord.replace("CM","DCCCC");

        char[] chars = inputWord.toCharArray();

        for (int i=0;i<chars.length;i++){

            result +=map.get(Character.valueOf(chars[i]));
        }
        System.out.println(result);

        return result;
    }
}
