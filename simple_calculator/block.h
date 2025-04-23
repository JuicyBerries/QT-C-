#ifndef BLOCK_H
#define BLOCK_H

#include <QString>
#include <QRegularExpression>

class Block {
public:
    void append(const QString& digit);
    void pop();
    void clear();
    void evaluate();

    int getOpPos() const;
    QString getLeftComp() const;
    QString getRightComp() const;
    QString getOpComp() const;

    const QString& getInput() const;
    const QString& getResult() const;
    const std::vector<QString>& getOperators() const;
    bool getOperatorPresence() const;

    void setOperatorPresence(bool);

private:
    QString current_input;

    bool isOperatorPresent{false};
    std::vector<QString> ope{"+", "-", "x", "/"};
};

#endif // BLOCK_H
