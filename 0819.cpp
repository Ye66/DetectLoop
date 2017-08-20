int Function{
  unordered_set<int> month
  for(int i=0; i<number; ++i){
    int a;
    cin << a;
      month.insert(a);
  }
  return month.size()
}

uint16 result=0;
int count=0;
for(int i=0; i<data_number; ++i){
  int a;
  cin >> a;
  unit16 month = 1;
  month << a-1;
  if(result != result | month){
    count++
    result = result | month
  }
}
