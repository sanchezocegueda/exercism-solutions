
pub fn is_armstrong_number(num: u32) -> bool {

    if num == 0 {
        return true;
    }

    let mut copy_1 = num;
    let mut copy_2 = num;
    let mut sum = 0;
    let mut num_digits = 0;
    while copy_1 > 0 {
        num_digits += 1;
        copy_1 = copy_1 / 10;


    }

    while copy_2 > 0 {
        let digit = copy_2 % 10;
        sum += digit.pow(num_digits);
        copy_2 = copy_2 / 10;
    }

    return sum == num;

}
