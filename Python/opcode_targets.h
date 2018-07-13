static void *opcode_targets[256] = {
    &&_unknown_opcode,
    &&TARGET_POP_TOP,
    &&TARGET_ROT_TWO,
    &&TARGET_ROT_THREE,
    &&TARGET_DUP_TOP,
    &&TARGET_ROT_FOUR,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&TARGET_NOP,
    &&TARGET_UNARY_POSITIVE,
    &&TARGET_UNARY_NEGATIVE,
    &&TARGET_UNARY_NOT,
    &&TARGET_UNARY_CONVERT,
    &&_unknown_opcode,
    &&TARGET_UNARY_INVERT,
    &&TARGET_BINARY_MATRIX_MULTIPLY,
    &&TARGET_INPLACE_MATRIX_MULTIPLY,
    &&TARGET_INPLACE_ASSIGN,
    &&TARGET_BINARY_POWER,
    &&TARGET_BINARY_MULTIPLY,
    &&TARGET_BINARY_DIVIDE,
    &&TARGET_BINARY_MODULO,
    &&TARGET_BINARY_ADD,
    &&TARGET_BINARY_SUBTRACT,
    &&TARGET_BINARY_SUBSCR,
    &&TARGET_BINARY_FLOOR_DIVIDE,
    &&TARGET_BINARY_TRUE_DIVIDE,
    &&TARGET_INPLACE_FLOOR_DIVIDE,
    &&TARGET_INPLACE_TRUE_DIVIDE,
    &&TARGET_SLICE ,
    &&TARGET_SLICE_1,
    &&TARGET_SLICE_2,
    &&TARGET_SLICE_3,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&TARGET_STORE_SLICE ,
    &&TARGET_STORE_SLICE_1,
    &&TARGET_STORE_SLICE_2,
    &&TARGET_STORE_SLICE_3,
    &&TARGET_WITH_CLEANUP_FINISH,
    &&TARGET_GET_AITER,
    &&TARGET_GET_ANEXT,
    &&TARGET_BEFORE_ASYNC_WITH,
    &&TARGET_GET_YIELD_FROM_ITER,
    &&TARGET_GET_AWAITABLE,
    &&TARGET_DELETE_SLICE ,
    &&TARGET_DELETE_SLICE_1,
    &&TARGET_DELETE_SLICE_2,
    &&TARGET_DELETE_SLICE_3,
    &&TARGET_STORE_MAP,
    &&TARGET_INPLACE_ADD,
    &&TARGET_INPLACE_SUBTRACT,
    &&TARGET_INPLACE_MULTIPLY,
    &&TARGET_INPLACE_DIVIDE,
    &&TARGET_INPLACE_MODULO,
    &&TARGET_STORE_SUBSCR,
    &&TARGET_DELETE_SUBSCR,
    &&TARGET_BINARY_LSHIFT,
    &&TARGET_BINARY_RSHIFT,
    &&TARGET_BINARY_AND,
    &&TARGET_BINARY_XOR,
    &&TARGET_BINARY_OR,
    &&TARGET_INPLACE_POWER,
    &&TARGET_GET_ITER,
    &&TARGET_YIELD_FROM,
    &&TARGET_PRINT_EXPR,
    &&TARGET_PRINT_ITEM,
    &&TARGET_PRINT_NEWLINE,
    &&TARGET_PRINT_ITEM_TO,
    &&TARGET_PRINT_NEWLINE_TO,
    &&TARGET_INPLACE_LSHIFT,
    &&TARGET_INPLACE_RSHIFT,
    &&TARGET_INPLACE_AND,
    &&TARGET_INPLACE_XOR,
    &&TARGET_INPLACE_OR,
    &&TARGET_BREAK_LOOP,
    &&TARGET_WITH_CLEANUP_START,
    &&_unknown_opcode,
    &&TARGET_RETURN_VALUE,
    &&TARGET_IMPORT_STAR,
    &&TARGET_EXEC_STMT,
    &&TARGET_YIELD_VALUE,
    &&TARGET_POP_BLOCK,
    &&TARGET_END_FINALLY,
    &&TARGET_LOAD_BUILD_CLASS,
    &&TARGET_STORE_NAME,
    &&TARGET_DELETE_NAME,
    &&TARGET_UNPACK_SEQUENCE,
    &&TARGET_FOR_ITER,
    &&TARGET_LIST_APPEND,
    &&TARGET_STORE_ATTR,
    &&TARGET_DELETE_ATTR,
    &&TARGET_STORE_GLOBAL,
    &&TARGET_DELETE_GLOBAL,
    &&TARGET_DUP_TOPX,
    &&TARGET_LOAD_CONST,
    &&TARGET_LOAD_NAME,
    &&TARGET_BUILD_TUPLE,
    &&TARGET_BUILD_LIST,
    &&TARGET_BUILD_SET,
    &&TARGET_BUILD_MAP,
    &&TARGET_LOAD_ATTR,
    &&TARGET_COMPARE_OP,
    &&TARGET_IMPORT_NAME,
    &&TARGET_IMPORT_FROM,
    &&TARGET_JUMP_FORWARD,
    &&TARGET_JUMP_IF_FALSE_OR_POP,
    &&TARGET_JUMP_IF_TRUE_OR_POP,
    &&TARGET_JUMP_ABSOLUTE,
    &&TARGET_POP_JUMP_IF_FALSE,
    &&TARGET_POP_JUMP_IF_TRUE,
    &&TARGET_LOAD_GLOBAL,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&TARGET_CONTINUE_LOOP,
    &&TARGET_SETUP_LOOP,
    &&TARGET_SETUP_EXCEPT,
    &&TARGET_SETUP_FINALLY,
    &&_unknown_opcode,
    &&TARGET_LOAD_FAST,
    &&TARGET_STORE_FAST,
    &&TARGET_DELETE_FAST,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&TARGET_RAISE_VARARGS,
    &&TARGET_CALL_FUNCTION,
    &&TARGET_MAKE_FUNCTION,
    &&TARGET_BUILD_SLICE,
    &&TARGET_MAKE_CLOSURE,
    &&TARGET_LOAD_CLOSURE,
    &&TARGET_LOAD_DEREF,
    &&TARGET_STORE_DEREF,
    &&TARGET_DELETE_DEREF,
    &&_unknown_opcode,
    &&TARGET_CALL_FUNCTION_VAR,
    &&TARGET_CALL_FUNCTION_KW,
    &&TARGET_CALL_FUNCTION_VAR_KW,
    &&TARGET_SETUP_WITH,
    &&_unknown_opcode,
    &&TARGET_EXTENDED_ARG,
    &&TARGET_SET_ADD,
    &&TARGET_MAP_ADD,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&TARGET_SETUP_ASYNC_WITH,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode
};
