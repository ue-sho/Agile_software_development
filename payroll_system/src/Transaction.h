#ifndef TRANSACTION_H
#define TRANSACTION_H

// コマンドパターン
class Transaction {
public:
    virtual ~Transaction();
    virtual void Execute() = 0;
};

#endif