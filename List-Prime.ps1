# |-------------------------------------------------------------------------|
# |  ____                 _     _      ____                        _        |
# | |  _ \ ___ _   _  ___| |__ (_) ___|  _ \ ___ _ __   __ _ _   _(_)_ __   |
# | | |_) / __| | | |/ __| '_ \| |/ __| |_) / _ \ '_ \ / _` | | | | | '_ \  |
# | |  __/\__ \ |_| | (__| | | | | (__|  __/  __/ | | | (_| | |_| | | | | | |
# | |_|   |___/\__, |\___|_| |_|_|\___|_|   \___|_| |_|\__, |\__,_|_|_| |_| |
# |           |___/                                   |___/                 |
# |-------------------------------------------------------------------------| 

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
	
	$n = [math]::Sqrt($n)
	
	for ($i = 2; $i -le $n / 2; $i++) {
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