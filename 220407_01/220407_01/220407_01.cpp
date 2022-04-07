//                      22.04.07



#include <iostream>
#include <string>

using namespace std;

/*
 연산자
    데이터를 가공(연산)하는 모든 명령에 필요한 것들
        1. 어떤 종류의 연산자들이 있는지?
        2. 우선 순위 : 어떤 순서로 연산이 진행되는지?
        3. 결합 순서 : 좌측부터 연산하는 연산자 / 우측부터 연산하는 연산자

            1)사칙연산 : 산술연산자 (좌측부터 연산), 나누기연산 실행시 나누는 값이 0이면 출력되지 않음.
                + : 더하기
                - : 빼기
                * : 곱하기
                / : 나누기         ex> 11 / 3 = 3
                % : 나머지         ex> 11 % 3 = 2
                (연산순서 : *, /, % > +, -)

            2)대입연산자 (우측부터 연산)
                = : 왼쪽 항에 오른쪽 항의 값을 대입한다. (복사한다)

            3)복합대입연산자 : 독립적인 값으로 표현되지 않음. 변수의 값을 바꾸고 싶을때 사용함.
                += : a += b;    ->      a = a + b
                -= : a -= b;    ->      a = a - b
                *= : a *= b;    ->      a = a * b
                /= : a /= b;    ->      a = a / b
                &= : a &= b;    ->      a = a & b

            4)증감연산자 : 특정 변수의 값을 1씩 증가시키거나 감소시킬때 사용, 변수의 앞이나 뒤에 ++, --를 붙여서 사용

            5)관계연산자 : 두 값을 비교한 결과가 '참(1,true)' 인지 '거짓(0, false)'인지 반환하는 연산자
                            < : a < b   -> a가 b보다 작으면 참을 반환
                            > : a > b   -> a가 b보다 크면 참을 반환
                            <= : a <= b -> a가 b 이하면 참을 반환
                            >= : a >= b -> a가 b 이상이면 참을 반환
                            == : a == b -> a와 b가 같으면 참을 반환
*/

int main()
{
        //사칙연산
    int left_value = 11;
    int right_value = 3;
    int right_value1 = 0;
    
    cout << left_value << " + " << right_value << " = " << left_value + right_value << endl;
    cout << left_value << " - " << right_value << " = " << left_value - right_value << endl;
    cout << left_value << " * " << right_value << " = " << left_value * right_value << endl;
    cout << left_value << " / " << right_value << " = " << left_value / right_value << endl;
    cout << left_value << " % " << right_value << " = " << left_value % right_value << endl;
    

        //복합대입연산자
    int value_a = 10;
    int value_b = 4;

    value_a += value_b;   
    //value_a -= value_b;   
    //value_a *= value_b;   
    //value_a /= value_b;   
    //value_a &= value_b;  

    cout << value_a << endl;

    
        //증감연산자
    int value_7 = 7;
    value_7++;
    cout << value_7 << endl;    // = 8
    ++value_7;
    cout << value_7 << endl;    // = 9
    
    int value_8 = 8;            //                  해당 경우 ' ; '세미콜론이 실행되는 순간 연산됨.
    cout << value_8++ << endl;  // = 8              출력=>8      메모리=>9
    ++value_8;                  //                  메모리=>10
    cout << value_8 << endl;    // = 10             출력=>10


        //관계연산자(실습)
    /*
        실습
        고객의 나이를 입력받아서 
        미성년자(19세 이하)면 true 출력, 성인이면 false 출력

        입력받은 나이를 기준으로, 주민등록증 발급대상(20살만)이면 true, 아니면 false 출력

        +입력받은 나이가 아홉수(1의 자리가 9이면)인지 확인해서 true, false
    */

    //int age;
    //cout << "나이를 입력하세요.";
    //cin >> age;

    //cout << boolalpha;  //true, false 출력 
    //cout << "미성년자 여부 : " << (age <= 19) << endl;
    //cout << "민증 발급자 대상 : " << (age == 20) << endl;
    //cout << "아홉수 : " << ((age % 10) == 9) << endl;

    /*
            복습
            숫자 입력받아서 19이상 27미만이면 true, 아니면 false
    
    int num;
    cout << "숫자 입력 : ";
    cin >> num;
    int num1 = num >= 19;
    int num2 = num < 27;
    int num3 = num1 + num2;

    cout << boolalpha;
    cout << ((num >= 19) + (num < 27) == 2) << endl;
    */
}

