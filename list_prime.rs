fn is_prime(n: i64) -> bool {
	for i in 2..f64::sqrt(n as f64) as i64 { if n % i == 0 { return false; } } return true;
}

fn list(max: i64) {
	for i in 0..max { if is_prime(i) { println!("{}",i); } } 
}

fn main() {
	let args: Vec<String> = std::env::args().collect();
	if args.len() == 1 { println!("No input!"); return; }
	let max = args[1].parse::<i64>().unwrap();
	list(max);
}
