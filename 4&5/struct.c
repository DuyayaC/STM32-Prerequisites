struct tag { 
    member-list
    member-list 
    member-list  
    ...
} variable-list ;

/*工程惯例，一律使用typedef省略struct关键字*/
typedef struct {
    uint8_t  id;
    int16_t  speed;
    float    angle;
} Motor_t;

Motor_t m = { .id = 1, .speed = 1000, .angle = 0.0f };  /* C99 指定初始化器 */

typedef struct {
    char  a;    /* 1 字节，偏移 0 */
    /* 3 字节填充 */
    int   b;    /* 4 字节，偏移 4（必须 4 字节对齐）*/
    char  c;    /* 1 字节，偏移 8 */
    /* 3 字节填充：整个结构体大小要对齐到最大成员的对齐值 4 */
} S1;

sizeof(S1) == 12;      /* 不是 1+4+1 = 6 */

/* ❌ 按值传递：整个结构体被复制到栈上，慢 + 费栈 */
void update(Motor_t m) { m.speed = 100; }       /* 调用者看不到修改 */

/* ✅ 传指针：只复制 4 字节地址，且能修改原对象 */
void update(Motor_t *m) { m->speed = 100; }
