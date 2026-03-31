class ECE244 {
    int num_student;
    int num_TA;
    int get_num_instructor();

    public:
    int num_instructor;
    int get_num_student();
    int get_num_TA;
};

int main() {
    ECE244 year2022;
    int num_student = year2022.num_student;
    int num_TA = year2022.get_num_TA();
    int num_instructor = year2022.get_num_instructor();

    return 0;
}