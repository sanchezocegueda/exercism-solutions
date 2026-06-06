pub fn reverse(input: &str) -> String {


    let mut reversed = String::new();

    for ch in input.chars() {
        reversed.insert(0, ch);
    }

    return reversed;

}
