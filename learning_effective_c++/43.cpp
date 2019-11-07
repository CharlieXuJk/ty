#include<string>

class CompanyA{
public:
    void sendClearTxt(const std::string &msg);
    void sendEncrypted(const std::string &msg);
};

class CompanyB{
public:
    void sendClearTxt(const std::string &msg);
    void sendEncrypted(const std::string &msg);
};

class CompanyZ{
public:
    void sendEncrypted(const std:: string& msg);
};

class MsgInfo{
public:
    std::string getMsg() const;
};

template<typename Company>
class MsgSender{
public:
    void sendClear(const MsgInfo &Info){
        std::string msg;
        msg = Info.getMsg();
        Company c;
        c.sendClearMsg(msg);
    }
};

template<>
class MsgSender<CompanyZ>
{
public:
    void sendSecret(const MsgInfo &Info){
        std::string msg;
        msg = Info.getMsg();
        CompanyZ c;
        c.sendEncrypted(msg);
    }
};
/**
template <typename Company>
class LoggingMsgSender : public MsgSender<Company>
{
public:
    void sendClearMsg(const MsgInfo &Info){
        sendClear(Info);
    }
};
**/
template<typename Company>
class LoggingMsgSender :public MsgSender<Company>{
    public:
        void sendClearMsg(const MsgInfo& info){
            this->sendClear(info);
        }
};