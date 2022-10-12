public class BinaryString {
    public static int OperationBinaryString(String str){
        int result=0;
        for (int i = 0; i < str.length(); i++) {
            System.out.println(str.charAt(i));
            if(str.charAt(i)=='C'){
                result = (int)str.charAt(i-1) ^ (int) str.charAt(i+1);
                System.out.println(result);
            }
            else if(str.charAt(i)=='A'){
                result = (int)str.charAt(i-1) & (int) str.charAt(i+1);
                System.out.println(result);
            }
            else if(str.charAt(i)=='B'){
                result = (int)str.charAt(i-1) | (int) str.charAt(i+1);
                System.out.println(result);
            }
            
        }
        return 0;
    }

    public static void main(String[] args) {
        // OperationBinaryString("1C0C1C1A0B1");
        // System.out.println(1^1);
        System.out.println('0'-'0');
    }
}

