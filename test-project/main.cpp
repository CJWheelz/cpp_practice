//
//  main.cpp
//  test-project
//
//  Created by CJ Wheelan on 8/3/22.
//

#include <iostream>

#include "sphere.hpp"
#include "ball.hpp"
#include "node.hpp"


int main() {
    Node node(6);
    Node newNode(7);
    
    node.append(&newNode);
    
    node.printList();
        
    Node another(8);
    node.append(&another);
    
    node.printList();
    
    Node n(9);
    
    another.insert(&n);
    
    
    node.printList();
    
}

//void print_divider() {
//    std::cout << "--------------------------\n";
//}
//
//int main(int argc, const char * argv[]) {
//
//    Sphere sphere(2);
//    sphere.get_info();
//
//    print_divider();
//
//    sphere.set_radius(3);
//    sphere.get_info();
//
//    print_divider();
//
//    Sphere sphere2;
//    sphere2.get_info();
//
//    print_divider();
//
//
//    // BALL
//    std::cout << "BALL:\n";
//
//    Ball ball(3, "Red");
//    ball.get_info();
//
//    print_divider();
//
//    ball.start_bouncing();
//    ball.get_info();
//
//    print_divider();
//
//    return 0;
//}
