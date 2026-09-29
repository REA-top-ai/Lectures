namespace MyNamespace {
    int NAMESPACE_VARIABLE = 100500;
    int namespace_func() {
        int local_variable = NAMESPACE_VARIABLE;
        return NAMESPACE_VARIABLE;
    }
    class namespaced_class {
        int CLASS_VARIABLE = NAMESPACE_VARIABLE;
        int classed_func() {
            int another_local_variable = NAMESPACE_VARIABLE;
            return CLASS_VARIABLE + NAMESPACE_VARIABLE;
        }
    };
}

class MyClass {
    int ANOTHER_CLASS_VARIABLE = 100500;
};

int GLOBAL_VARIABLE = 100500;

int main() {
    int LOCAL_VARIABLE = 100500;

    MyNamespace::namespaced_class ns_class;

    MyNamespace::NAMESPACE_VARIABLE = 200500;

    {
        int LOCAL_VARIABLE = 0;
    }

    {
        int LOCAL_VARIABLE = 1;
    }
}