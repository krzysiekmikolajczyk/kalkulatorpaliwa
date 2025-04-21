document.getElementById('fuel-form').addEventListener('submit', function(e) {
    e.preventDefault();
  
    const consumption = parseFloat(document.getElementById('consumption').value);
    const distance = parseFloat(document.getElementById('distance').value);
    const price = parseFloat(document.getElementById('price').value);
  
    if (consumption > 0 && distance > 0 && price > 0) {
      const fuelUsed = (consumption / 100) * distance;
      const totalCost = fuelUsed * price;
      document.getElementById('result').textContent = 
        `Koszt przejazdu: ${totalCost.toFixed(2)} zł`;
    } else {
      document.getElementById('result').textContent = 'Wprowadź poprawne wartości.';
    }
  });
  