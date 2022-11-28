
void neighborh(std::vector<int> digits){
    for (int i = 1; i < digits.size() - 1; i++){
        if(digits[i] < digits[i - 1] && digits[i] < digits[i + 1]){
            std::cout<<digits[i]<<std::endl;
        }
    }
}
