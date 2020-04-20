#include <Python.h>
#include <stdio.h>

static PyObject* new(PyObject *self, PyObject *args) {
    const char* token;
    if (!PyArg_ParseTuple(args, "s", &token)) {
        return NULL;
    }

    printf("Successfully loaded token: %s!", token);
    Py_RETURN_NONE;
}

static PyMethodDef new_methods[] = { 
    {   
        "new", new, METH_VARARGS,
        "new(token): Bot token you want to put here!!\n";
    },  
    {NULL, NULL, 0, NULL}
};


static struct PyModuleDef new_definition = { 
    PyModuleDef_HEAD_INIT,
    "new",
    "A Python module integrated from C code.",
    -1, 
    new_methods
};


PyMODINIT_FUNC PyInit_new(void) {
    Py_Initialize();
    return PyModule_Create(&new_definition);
}
