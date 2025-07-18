fn main() {
  
    let arr: [f64; 47] = [
        1.2, -3.4, 0.0, 5.6, -7.8, 9.1, 3.2, -2.1, 0.9, 4.5, 6.3, -8.1, 1.0, -0.7, 3.8, 
        7.2, 4.1, -5.4, 2.0, 1.1, 3.3, -6.7, 8.8, -9.9, 5.5, 6.1, -4.2, 7.7, -1.3, 2.5,
        0.0, 3.6, -7.0, 5.4, 6.9, 7.8, 8.5, -0.4, 2.2, -6.8, 1.7, 9.3, 0.5, -2.6, 4.4, 8.2,
        3.1 
    ];

    let mut max_index = None;
    let mut max_value = f64::NEG_INFINITY;
    
    for (i, &value) in arr.iter().enumerate() {
        if value > max_value {
            max_value = value;
            max_index = Some(i);
        }
    }

    if let Some(max_index) = max_index {
        let sum_of_squares: f64 = arr[..max_index] 
            .iter()
            .map(|&x| x.powi(2)) 
            .sum(); 

        println!(
            "Сума квадратів елементів до найбільшого додатного елемента ({:.2}): {:.2}",
            max_value, sum_of_squares
        );
    } else {
        println!("Немає додатних елементів у масиві.");
    }
}
