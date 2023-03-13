fn is_prime(n: i64) -> bool {
	for i in 2..f64::sqrt(n as f64) as i64 { if n % i == 0 { return false; } } return true;
}

fn list(max: i64) {
	let white	= "\x1b[37m"; 
	let green	= "\x1b[32m";
	let red		= "\x1b[31m";
	for i in 0..max { 
		let mut col = green;
		if is_prime(i) {
			col = green;
		} else {
			col = red; 
		}
	
		print!("{}{}{} ",col,i,white);
	} 	
}

fn main() {
	let args: Vec<String> = std::env::args().collect();
	if args.len() == 1 { println!("No input!"); return; }
	let max = args[1].parse::<i64>().unwrap();
	list(max);
}
