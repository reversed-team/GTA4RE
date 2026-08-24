// 0x5E7BF0

void SetupScriptCommands(void)

{
  uint Variableneedtodelete;
  char CREATE_HTML_VIEWPORT;
  char LOAD_WEB_PAGE;
  char RELOAD_WEB_PAGE;
  char DOES_WEB_PAGE_EXIST;
  char GET_WEB_PAGE_HEIGHT;
  char SET_WEB_PAGE_SCROLL;
  char GET_NUMBER_OF_WEB_PAGE_LINKS;
  char GET_WEB_PAGE_LINK_HREF;
  char GET_WEB_PAGE_LINK_POSN;
  char GET_WEB_PAGE_LINK_AT_POSN;
  char SET_WEB_PAGE_LINK_ACTIVE;
  char CREATE_HTML_SCRIPT_OBJECT;
  char DELETE_HTML_SCRIPT_OBJECT;
  char DELETE_ALL_HTML_SCRIPT_OBJECTS;
  char ADD_TO_HTML_SCRIPT_OBJECT;
  char ADD_FIRST_N_CHARACTERS_OF_STRING_TO_HTML_SCRIPT_OBJECT;
  char ADD_STRING_TO_HTML_SCRIPT_OBJECT;
  char CONVERT_THEN_ADD_STRING_TO_HTML_SCRIPT_OBJECT;
  
  Variableneedtodelete = REGISTER_BUILTIN_COMMAND(0x2fae4c6e,&LAB_005e7eb0);
  if ((char)Variableneedtodelete == '\0') {
    FUN_004036a0(CREATE_HTML_VIEWPORT);
  }
  Variableneedtodelete = REGISTER_BUILTIN_COMMAND(0x78c17971,&LAB_005e7ec0);
  if ((char)Variableneedtodelete == '\0') {
    FUN_004036a0(LOAD_WEB_PAGE);
  }
  Variableneedtodelete = REGISTER_BUILTIN_COMMAND(0x565b0c3e,&LAB_005e7ee0);
  if ((char)Variableneedtodelete == '\0') {
    FUN_004036a0(RELOAD_WEB_PAGE);
  }
  Variableneedtodelete = REGISTER_BUILTIN_COMMAND(0x1de062fd,&LAB_005e7ef0);
  if ((char)Variableneedtodelete == '\0') {
    FUN_004036a0(DOES_WEB_PAGE_EXIST);
  }
  Variableneedtodelete = REGISTER_BUILTIN_COMMAND(0x9fd24f3,FUN_005e7f40);
  if ((char)Variableneedtodelete == '\0') {
    FUN_004036a0(GET_WEB_PAGE_HEIGHT);
  }
  Variableneedtodelete = REGISTER_BUILTIN_COMMAND(0x55de40ee,FUN_005e7f70);
  if ((char)Variableneedtodelete == '\0') {
    FUN_004036a0(SET_WEB_PAGE_SCROLL);
  }
  Variableneedtodelete = REGISTER_BUILTIN_COMMAND(0x18a22ae4,FUN_005e8030);
  if ((char)Variableneedtodelete == '\0') {
    FUN_004036a0(GET_NUMBER_OF_WEB_PAGE_LINKS);
  }
  Variableneedtodelete = REGISTER_BUILTIN_COMMAND(0x750c1cd7,FUN_005e8050);
  if ((char)Variableneedtodelete == '\0') {
    FUN_004036a0(GET_WEB_PAGE_LINK_HREF);
  }
  Variableneedtodelete = REGISTER_BUILTIN_COMMAND(0x717b5efb,&LAB_005e8070);
  if ((char)Variableneedtodelete == '\0') {
    FUN_004036a0(GET_WEB_PAGE_LINK_POSN);
  }
  Variableneedtodelete = REGISTER_BUILTIN_COMMAND(0xc1c5b1b,FUN_005e8090);
  if ((char)Variableneedtodelete == '\0') {
    FUN_004036a0(GET_WEB_PAGE_LINK_AT_POSN);
  }
  Variableneedtodelete = REGISTER_BUILTIN_COMMAND(0x5f5e7f39,&LAB_005e80c0);
  if ((char)Variableneedtodelete == '\0') {
    FUN_004036a0(SET_WEB_PAGE_LINK_ACTIVE);
  }
  Variableneedtodelete = REGISTER_BUILTIN_COMMAND(0x6aa63375,FUN_005e80f0);
  if ((char)Variableneedtodelete == '\0') {
    FUN_004036a0(CREATE_HTML_SCRIPT_OBJECT);
  }
  Variableneedtodelete = REGISTER_BUILTIN_COMMAND(0x53456730,&LAB_005e8110);
  if ((char)Variableneedtodelete == '\0') {
    FUN_004036a0(DELETE_HTML_SCRIPT_OBJECT);
  }
  Variableneedtodelete = REGISTER_BUILTIN_COMMAND(0x31a77970,&LAB_005e8160);
  if ((char)Variableneedtodelete == '\0') {
    FUN_004036a0(DELETE_ALL_HTML_SCRIPT_OBJECTS);
  }
  Variableneedtodelete = REGISTER_BUILTIN_COMMAND(0x3ecc0086,&LAB_005e8170);
  if ((char)Variableneedtodelete == '\0') {
    FUN_004036a0(ADD_TO_HTML_SCRIPT_OBJECT);
  }
  Variableneedtodelete = REGISTER_BUILTIN_COMMAND(0x75fc34ef,&LAB_005e8190);
  if ((char)Variableneedtodelete == '\0') {
    FUN_004036a0(ADD_FIRST_N_CHARACTERS_OF_STRING_TO_HTML_SCRIPT_OBJECT);
  }
  Variableneedtodelete = REGISTER_BUILTIN_COMMAND(0x7eb70379,&LAB_005e81b0);
  if ((char)Variableneedtodelete == '\0') {
    FUN_004036a0(ADD_STRING_TO_HTML_SCRIPT_OBJECT);
  }
  Variableneedtodelete = REGISTER_BUILTIN_COMMAND(0x72ec0aa6,&LAB_005e81d0);
  if ((char)Variableneedtodelete == '\0') {
    FUN_004036a0(CONVERT_THEN_ADD_STRING_TO_HTML_SCRIPT_OBJECT);
  }
  return;
}