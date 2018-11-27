template <class T>
class AddElements {
T myElement;
public:
    AddElements(T element) {
        myElement = element;
    }
    T add(T element) {
        return myElement+element;
    }
};

template <>
class AddElements <string> {
string myElement;
public:
    AddElements(string element) {
        myElement = element;
    }
    string concatenate(string text){
        return myElement+text;
    }
};
