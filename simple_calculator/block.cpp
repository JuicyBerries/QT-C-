#include "block.h"

void Block::append(const QString& s) {
    if (current_input == "0") {
        current_input = s;
    }
    else if (current_input.size() > 0 || s != "0") {
        current_input += s;
    }
}

void Block::pop() {
    std::vector<QString> v = getOperators();
    if (std::find(v.begin(), v.end(), current_input[current_input.size()-1]) != v.end()) { //If operator in
        setOperatorPresence(false);
    }
    current_input.chop(1);

}

void Block::clear() {
    setOperatorPresence(false);
    current_input.clear();
}

const std::vector<QString>& Block::getOperators() const {
    return ope;
}

bool Block::getOperatorPresence() const {
    return isOperatorPresent;
}

const QString& Block::getResult() const {
    return current_input;
}

int Block::getOpPos() const {
    static const QRegularExpression opRegExp("[+\\-x/]");
    int opPos = current_input.indexOf(opRegExp);
    return opPos;
}

QString Block::getLeftComp() const {
    int opPos = getOpPos();
    return current_input.left(opPos);
}

QString Block::getOpComp() const {
    int opPos = getOpPos();
    return current_input.mid(opPos, 1);
}

QString Block::getRightComp() const {
    int opPos = getOpPos();
    return current_input.mid(opPos + 1);
}

void Block::evaluate() {
    int res;
    setOperatorPresence(false);
    QString leftComp = getLeftComp();
    QString rightComp = getRightComp();
    QString op = getOpComp();
    if (leftComp.size() > 0 && rightComp.size() > 0) {
        int leftCompInt = leftComp.toInt();
        int rightCompInt = rightComp.toInt();
        if (op == "+") {
            res = leftCompInt + rightCompInt;
        } else if (op == "-") {
            res = leftCompInt - rightCompInt;
        } else if (op == "x") {
            res = leftCompInt * rightCompInt;
        } else if (op == "/") {
            if (rightCompInt != 0) {
                res = leftCompInt / rightCompInt;
            } else {
                qDebug() << "Erreur : division par zéro !";
            }
        } else {
            qDebug() << "Opérateur inconnu : " << op;
        }
    }
    current_input = QString::number(res);
}


void Block::setOperatorPresence(bool b) {
    isOperatorPresent = b;
}

const QString& Block::getInput() const {
    return current_input;
}

