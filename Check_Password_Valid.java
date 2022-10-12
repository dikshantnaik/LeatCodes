public class Check_Password_Valid {
    public static int Check_Password_Valid1(String pass){

        int n = pass.length();
        if(n<4){
            return 0;
        }
        else if(pass.charAt(0)>='0' && pass.charAt(0)<='9'){
            return 0;
        }
        boolean oneNumeric=false;
        boolean oneCaps= false;
        boolean noSlash=true;
        for (int i = 0; i < n; i++) {
            if(pass.charAt(i)>='0' && pass.charAt(i)<='9'){
                oneNumeric=true;
            }
            else if(pass.charAt(i)>='A' && pass.charAt(i)<='Z'){
                oneCaps=true;
            }
            else if(pass.charAt(i)=='/' || pass.charAt(i)==' '){
                noSlash=false;
            }
        }
        if(!oneNumeric || !oneCaps ){
            return 0;
        }
        else if(noSlash){
            return 1;
        }
        else {
            return 0;
        }
    }
    public static void main(String[] args) {
        int res = Check_Password_Valid1("Breadjamd23");
        System.out.println(res);
    }

}
