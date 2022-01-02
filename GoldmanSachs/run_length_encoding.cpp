string encode(string src)
{     
  //Your code here 
  string result = "";
  int count = 1;
  result += src[0];
  for(int i = 1; i < src.length(); i++){
      if(src[i] == src[i-1]){
          count++;
      }
      else{
        result = result + to_string(count);
        result += src[i];
        count = 1;
      }
    }
    result = result + to_string(count);
    return result;
}
