use std::f64;
use std::io::{self, Write};

fn y(x: f64) -> Option<f64> {
    if (1.0 - x).abs() < f64::EPSILON {
    } else {
        Some(0.5 * ((1.0 + x) / (1.0 - x)).ln())
    }
}

fn term(x: f64, k: usize) -> f64 {
    x.powi((2 * k + 1) as i32) / (2 * k + 1) as f64
}

fn sum1(x: f64, n: usize) -> f64 {
    let mut z = 0.0;
    for k in 0..=n {
        z += term(x, k);
    }
    z
}

fn sum2(x: f64, eps: f64) -> f64 {
    let mut z = 0.0;
    let mut ak: f64 = 1.0; 
    let mut k = 0;

    while ak.abs() > eps {
        ak = term(x, k);
        z += ak;
        k += 1;
    }

    z
}

fn main() {
    let mut input = String::new();

    print!("Enter the number of terms n: ");
    io::stdout().flush().unwrap();
    io::stdin().read_line(&mut input).unwrap();
    let n: usize = input.trim().parse().unwrap();

    input.clear();
    print!("Enter the precision delta: ");
    io::stdout().flush().unwrap();
    io::stdin().read_line(&mut input).unwrap();
    let delta: f64 = input.trim().parse().unwrap();

    let x1 = 0.0;
    let x2 = 1.0; 

    println!("{:<10}{:<15}{:<15}{:<15}", "x", "Sn", "Se", "y");
    println!("{}", "-".repeat(55));

    for j in 0..=10 {
        let x = x1 + j as f64 * (x2 - x1) / 10.0;

        if let Some(y_val) = y(x) { 
            let sn = sum1(x, n);     
            let se = sum2(x, delta); 

            println!(
                "{:<10.4}{:<15.6}{:<15.6}{:<15.6}",
                x,
                sn,
                se,
                y_val 
            );
        }
        
    }
}

