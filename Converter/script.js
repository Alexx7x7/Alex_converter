function convert() {  
    const inputValue = parseFloat(document.getElementById('inputValue').value);  
    const conversionType = document.querySelector('input[name="conversionType"]:checked').value;  
    let result;  

    if (isNaN(inputValue)) {  
        result = "Будь ласка, введіть коректне число.";  
    } else {  
        if (conversionType === "metersToKilometers") {  
            result = inputValue / 1000 + " км";  
        } else if (conversionType === "kilometersToMeters") {  
            result = inputValue * 1000 + " м";  
        }  
    }  

    document.getElementById('result').innerText = result;  
}