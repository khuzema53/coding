const Data = 
{
  "users": [
    {
      "name": "Test 1",
      "age": 30,
      "dob": 662497200000.00
    },
    {
      "name": "Test 2",
      "age": 20,
      "dob": 946839600000.00
    }
  ]
}

function getDates(searchName)
{
    let dob = null;
    Data.users.map((item) => {
        if (item.name == searchName) {
            dob = item.dob;
        } 
    });
    birthDate = new Date(dob);
    result = birthDate.getDate()+"_"+(birthDate.getMonth()+1)+"_"+birthDate.getFullYear();
    return result;
}

otherdate = new Date('09/16/1990');

console.log(getDates("Test 1"));