param(
	[string]$MaxValue
) 

if ($MaxValue -eq "") {
	$MaxValue = Read-Host "Enter Max"
}

try {
	[Int32]$max = $MaxValue
} catch {
	Write-Host "Invalid Input"
	return
}

function Is-Prime {
	param (
		[Int32]$n
	)
	
	for ($i = 2; $i -le [math]::Sqrt($n); $i++) {
		if ($n % $i -eq 0) {
			return $FALSE
		}
	}
	return $TRUE
}

function List-Prime {
	param (
		[Int32]$max
	)
	
	for ($i = 2; $i -le $max; $i++) {
		if (Is-Prime $i -eq $TRUE) {
			Write-Host $i
		}
	}
}

List-Prime $max
