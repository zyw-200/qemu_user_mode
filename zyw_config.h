typedef struct 
{
  double handle_state_time;
  double handle_addr_time;
  double handle_syscall_time;
  double store_page_time;
  double restore_page_time;
  int user_syscall_count;
  int store_count;
} USER_MODE_TIME;

#define MEM_MAPPING
//#define SNAPSHOT_SYNC
#define PRE_MAPPING
#define STORE_PAGE_FUNC
//#define PADDR_MAP_CHECK