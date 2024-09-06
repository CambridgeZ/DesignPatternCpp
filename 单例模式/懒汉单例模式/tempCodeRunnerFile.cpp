int main(){
    Singleton& s1 = Singleton::get_instance();
    Singleton& s2 = Singleton::get_instance();
    if(&s1 == &s2){
        std::cout << "s1 and s2 are the same instance." << std::endl;
    }else{
        std::cout << "s1 and s2 are different instances." << std::endl;
    }
    return 0;
}