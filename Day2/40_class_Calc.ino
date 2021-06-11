//클래스 정의부
class Calc
{
  private:
    int a = 0;
    int b = 0;

  public:
    Calc(int val1, int val2){
      a = val1;
      b = val2;
    }
    int sum();
    int sub();
};

int Calc::sum(){
  return a+b;
}
int Calc::sub(){
  return a-b;
}

//클래스 객체 생성
Calc obj(10,3);
Calc obj2(5,5);


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println(obj.sum()); //클래스(객체) 함수 호출
  Serial.println(obj.sub());
  Serial.println(obj2.sum());
  Serial.println(obj2.sub());

}

void loop() {
  // put your main code here, to run repeatedly:

}
