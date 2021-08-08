#include <string>
#include <map>
#include <list>

class L_BoSio_Space; // 스페이스 정보
class L_BoSio_Comp; // 컴포넌트 정보
class L_BoSio_Event; // 이벤트 정보

class Vertex_One; // 3D 버텍스 정보

class L_BoSio_Space{ // 스페이스 정보 
    public:
        L_BoSio_Space(std::string n, float h, float w);
        ~L_BoSio_Space();
        int Get_ID();
        bool Add_Comp(L_BoSio_Comp newComp);
        bool Fix_Comp(int ID);
        void Space_Draw(); // 화면 표시용
        int ID; // 스페이스 고유 ID
    private:
        std::string NAME; // 스페이스 이름
        std::map<int, L_BoSio_Comp> Comp_List; // 컴포넌트 리스트
};
class WorkSpace_Space:public L_BoSio_Space{ // 유저위치 고정 스페이스 위의 창 스페이스
    public:
        WorkSpace_Space();
    private:
        float angLR, angUD, Depth; // 좌우, 상하 각도, 깊이
};
class WorldSpace_Space:public L_BoSio_Space{ // 공간위치 스페이스 위의 창 스페이스
    public:
        WorldSpace_Space();
    private:
        float X, Y, Z; // 절대 좌표
};

class L_BoSio_Comp{
    public:
        int ID; // 컴포넌트 고유 ID
    private:
        std::string NAME;
        std::map<std::string, L_BoSio_Event> Events;
};
class Comp_2D{
    public:
        Comp_2D();
    private:
        int X, Y, Height, Width; // 위치, 높이, 너비
};
class Comp_3D{
    public:
        Comp_3D();
    private:
        std::list<Vertex_One> Vertex_List;
};

class L_BoSio_Event{
    public:
        L_BoSio_Event();
    private:
        std::string EventName;
        std::string EventNeeds;
};

class Vertex_One{
    public:
        float X1, X2, X3, Y1, Y2, Y3, Z1, Z2, Z3; // 꼭짓점 위치
        Vertex_One *Edge12, *Edge23, *Edge13;
};