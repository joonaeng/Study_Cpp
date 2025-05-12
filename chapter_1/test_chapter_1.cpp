#include <iostream>
#include <map>
#include <string>

using namespace std;

void app();          // 메뉴 출력
void openAccount();  // 계좌 개설
void deposit();      // 입금
void withdraw();     // 출금
void infoAccount();  // 계좌 정보 조회

struct Member {
    int id;       // 계좌ID
    string name;  // 이름
    long money;   // 잔액
};

map<int, Member> mem;

int main(void) {
    int select;

    while (1) {
        app();
        cin >> select;
        cout << endl;

        switch (select) {
            case 1:
                openAccount();
                break;
            case 2:
                deposit();
                break;
            case 3:
                withdraw();
                break;
            case 4:
                infoAccount();
                break;
            case 5:
                return 0;
            default:
                cout << "잘못된 번호를 입력하셨습니다." << endl;
        }
        cout << endl;
    }
    return 0;
}

void app(void) {
    cout << "-----Menu-----" << endl;
    cout << "1. 계좌개설" << endl;
    cout << "2. 입 금" << endl;
    cout << "3. 출 금" << endl;
    cout << "4. 계좌정보 전체 출력" << endl;
    cout << "5. 프로그램 종료" << endl;
    cout << "선택 : ";
}

void openAccount(void) {
    int accountId;
    string name;
    int depositMoney;

    cout << "[계좌개설]" << endl;
    cout << "계좌ID : ";
    cin >> accountId;
    cout << "이름 : ";
    cin >> name;
    cout << "입금액 : ";
    cin >> depositMoney;

    Member member;
    member.id = accountId;
    member.name = name;
    member.money = depositMoney;

    mem.insert({accountId, member});
}

void deposit(void) {
    int accountId;
    long depositMoney;

    cout << "[입   금]" << endl;
    cout << "계좌ID : ";
    cin >> accountId;

    if (mem.find(accountId) != mem.end()) {
        cout << "입금액 : ";
        cin >> depositMoney;

        mem[accountId].money += depositMoney;
        cout << "입금 완료" << endl;
    } else {
        cout << "등록되지 않은 계좌ID 입니다." << endl;
    }
}

void withdraw(void) {
    int accountId;
    long withdrawMoney;

    cout << "[출   금]" << endl;
    cout << "계좌ID : ";
    cin >> accountId;

    if (mem.find(accountId) != mem.end()) {
        cout << "출금액 : ";
        cin >> withdrawMoney;

        if (mem[accountId].money >= withdrawMoney) {
            mem[accountId].money -= withdrawMoney;
            cout << "출금 완료" << endl;
        } else {
            cout << "계좌 잔액이 부족합니다." << endl;
        }
    } else {
        cout << "등록되지 않은 계좌ID 입니다." << endl;
    }
}

void infoAccount(void) {
    cout << "[계좌 정보 전체 조회]" << endl;
    for (auto iter : mem) {
        cout << "계좌ID : " << iter.second.id << endl;
        cout << "이 름 : " << iter.second.name << endl;
        cout << "잔 액 : " << iter.second.money << endl;
        cout << endl;
    }
}