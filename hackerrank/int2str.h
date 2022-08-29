string inttostr(int x){
    if (x > 9){
        if (x & 1) return "odd";
        else return "even";
    }
    else{
        if (x == 1) return "one";
        else if (x == 2) return "two";
        else if (x == 3) return "three";
        else if (x == 4) return "four";
        else if (x == 5) return "five";
        else if (x == 6) return "six";
        else if (x == 7) return "seven";
        else if (x == 8) return "eight";
        else if (x == 9) return "nine";
    }
    return;
}