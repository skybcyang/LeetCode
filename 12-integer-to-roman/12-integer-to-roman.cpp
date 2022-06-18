class Solution {
public:
    string intToRoman(int num) {
        string res = "";
        if(num>=1000){
            for(int mn=num/1000; mn>0; mn--){
                res += 'M';
            }
            num = num%1000;
        }
        if(num>=900){
            res += "CM";
            num -= 900;
        }
        if(num>=500){
            res += 'D';
            num -= 500;
        }
        if(num>=400){
            res += "CD";
            num -= 400;
        }
        if(num>=100){
            for(int mn=num/100; mn>0; mn--){
                res += 'C';
            }
            num = num%100;
        }
        if(num>=90){
            res += "XC";
            num -= 90;
        }
        if(num>=50){
            res += "L";
            num -= 50;
        }
        if(num>=40){
            res += "XL";
            num -= 40;
        }
        if(num>=10){
            for(int mn=num/10; mn>0; mn--){
                res += 'X';
            }
            num = num%10;
        }
        if(num>=9){
            res += "IX";
            num -= 9;
        }
        if(num>=5){
            res += "V";
            num -= 5;
        }
        if(num>=4){
            res += "IV";
            num -= 4;
        }
        if(num>=1){
            for(int mn=num; mn>0; mn--){
                res += 'I';
            }
        }
        
        return res;
    }
};