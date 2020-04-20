#include <Python.h>

static PyObject* new(PyObject *self, PyObject *args) {
    const char* token;
    if (!PyArg_ParseTuple(args, "s", &token)) {
        return NULL;
    }

    printf("Successfully loaded token: %s!", token);
    Py_RETURN_NONE;
}

static char bot_token_docs[] =
   "new(token): Bot token you want to put here!!\n";

static PyMethodDef new_funcs[] = {
   {"new", (PyCFunction)new, 
      METH_VARARGS, bot_token_docs},
      {NULL}
};

void initnew(void) {
   Py_InitModule3("bot", new_funcs,
                  "Extension module example!");
}
