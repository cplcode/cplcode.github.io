function tsearch() {
  // Declare variables
  var input, filter, table, tr, td, i, txtValue;
  table = document.getElementsByTagName("table")[0];
  if(table) {
    input = document.getElementsByTagName("input")[0];
    filter = input.value;
    if (filter && filter[0].toLowerCase()==filter[0]) {filter=filter.toLowerCase();}
    tr = table.getElementsByTagName("tr");
  
    // Loop through all table rows, and hide those that don't match the search query
    for (i = 0; i < tr.length; i++) {
      td = tr[i].getElementsByTagName("td")[1];
      if (td) {
        txtValue = td.textContent || td.innerText;
        if (filter && filter[0].toLowerCase()==filter[0]) {txtValue=txtValue.toLowerCase();}
        if (txtValue.indexOf(filter) >= 0) {
          tr[i].style.display = "";
        } else {
          tr[i].style.display = "none";
        }
      }
    }
  }
}
