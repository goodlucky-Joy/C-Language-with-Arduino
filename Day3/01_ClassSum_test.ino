//두수의 합을 구하는 클래스 정의
class Calc
{
  private:
    int a=0;
    int b=0;
  
  public:
    Calc(int val1, int val2){
      a=val1;
      b=val2;
    }
    int sum();
};

int Calc::sum(){
  return a+b;
}

//Calc 클래스의 객체변수 선언 및 메서드 사용
Calc obj(2,3);  //객체변수 선언

void setup(){
   Serial.begin(9600);
   Serial.println(obj.sum());
}

void loop(){

}
