# Univercity_Assignment
## Purpose
#### 광운대 과제 저장용 레포지토리
## Copyright
#### 이 레포지토리는 순전히 공부를 위한 레포지토리이며 문제에 대한 모든 저작권은 광운대학교에 있습니다.
## Urls
https://youtube.com/playlist?list=PL0I7nUseaZ57vs2piA_v-e6DYo1ySqXJu
## Language
# C++ Coding Style Guide with Chatgpt
## 소개
### 이 문서는 K&R 방법을 사용하여 C++ 코드를 작성하는 데 필요한 지침을 제공합니다. K&R 스타일은 C 및 C++용 인기있는 코딩 스타일로 가독성과 간결함을 강조합니다. 이 스타일은 "The C Programming Language"의 저자인 브라이언 커니핸과 데니스 리치에서 이름을 따왔습니다.

#### 명명 규칙
변수, 함수 및 클래스에 대한 설명적인 이름을 사용하십시오. 한 문자 변수 이름을 피하십시오.
변수 및 함수 이름에는 camelCase를 사용하십시오.
클래스 이름에는 PascalCase를 사용하십시오.
상수에는 UPPER_CASE를 사용하십시오.
비공개 멤버 변수의 경우 밑줄로 시작하는 접두사를 사용하십시오.
```cpp
int numStudents;
void calculateAverageScore();
class StudentRecord;
const int MAX_SCORE = 100;
private:
  int _grade;
```
#### 들여쓰기
들여쓰기에는 4개의 공백을 사용하십시오.
탭 대신 공백을 사용하십시오.
```cpp
if (condition) {
    // do something
} else {
    // do something else
}
```
#### 중괄호
중괄호는 문장이나 선언과 같은 줄에 여는 중괄호를 놓습니다.
닫는 중괄호는 새 줄에 놓습니다.
```cpp
if (condition) {
    // do something
} else {
    // do something else
}
```
#### 줄 길이
줄 길이는 80자로 제한하십시오.
쉼표 다음과 같이 논리적인 지점에서 긴 줄을 나누십시오.
```cpp
void displayStudentRecord(const StudentRecord& record, bool showDetails) {
    cout << "Name: " << record.getName()
         << ", Age: " << record.getAge()
         << ", Gender: " << record.getGender();
    if (showDetails) {
        cout << ", GPA: " << record.getGPA()
             << ", Major: " << record.getMajor();
    }
    cout << endl;
}
```
#### 주석
코드의 목적과 동작을 설명하기 위해 주석을 사용하십시오.
설명하는 코드 위에 주석을 놓으십시오.
주석 블록 전후에 빈 줄을 사용하십시오.
```cpp
// This function calculates the average score of a list of scores.
// It takes a vector of integers as input and returns a double value.
double calculateAverageScore(const vector<int>& scores) {
    // Calculate the sum of scores
    int sum = 0;
    for (int score : scores) {
        sum += score;
    }
    // Calculate the average score
    double average = static_cast<double>(sum) / scores.size();
    // Return the average score
    return average;
}
```
