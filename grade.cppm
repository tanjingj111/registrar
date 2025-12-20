export module Registrar:grade;
import std;

export class Grade {
public:
    Grade(string sid, string cid, double score = 0.0);

    // 获取信息
    string info() const;
    string getSid() const;
    string getCid() const;
    double getScore() const;
    // 设置成绩
    void setScore(double score);
    // 匹配学生+课程
    bool match(string sid, string cid) const;

private:
    string m_sid;    // 学生ID
    string m_cid;    // 课程ID
    double m_score;  // 成绩
};


Grade::Grade(string sid, string cid, double score)
    : m_sid(sid), m_cid(cid), m_score(score) {}

string Grade::info() const {
    return format("{} {} {:.1f}", m_sid, m_cid, m_score);
}

string Grade::getSid() const { return m_sid; }
string Grade::getCid() const { return m_cid; }
double Grade::getScore() const { return m_score; }

void Grade::setScore(double score) { m_score = score; }

bool Grade::match(string sid, string cid) const {
    return m_sid == sid && m_cid == cid;
}
