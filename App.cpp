#include <bits/stdc++.h>
#include <filesystem>
using namespace std;
namespace fs = std::filesystem;

void cppComp(string name) {
    string in = name + ".cpp";
    ofstream f(in);
    f << "/*******************************************************************************/\n"
"#include <bits/stdc++.h>\n"
"#include <ext/pb_ds/assoc_container.hpp>\n"
"#include <ext/pb_ds/tree_policy.hpp>\n"
"using namespace __gnu_pbds\n"
"using namespace std;\n\n\n"
"typedef long long ll;\n\n"

"#define F first\n"
"#define S second\n"
"#define PB push_back\n"
"#define MP make_pair\n\n"

"#define all(x) x.begin(), x.end()\n\n"

"typedef vector<int> vi;\n"
"typedef vector<char> vc;\n"
"typedef vector<double> vd;\n"
"typedef vector<string> vs;\n"
"typedef vector<vi> vvi;\n"
"typedef map<string, int> msp;\n"
"typedef map<int, int> mii;\n"
"typedef long int int32;\n"
"typedef unsigned long int uint32;\n"
"typedef long long int int64;\n"
"typedef unsigned long long int uint64;\n\n\n"

"#define INF (int)1e9\n"
"#define EPS 1e-9\n"
"#define PI 3.1415926535897932384626433832795\n"
"#define MOD 1000000007\n"

"#define FOR(i,a,b) for (int i = a; i <= b; i++)\n"
"#define FLP(i,a,b) for (int i = a; i < b; i++)\n"

"mt19937_64 rang(chrono::high_resolution_clock::now().time_since_epoch().count());\n"
"int rng(int lim) {\n"
    "\tuniform_int_distribution<int> uid(0,lim-1);\n"
    "\treturn uid(rang);\n"
"}\n\n\n\n\n\n"


"int main(void) {\n"
    "\tios_base::sync_with_stdio(0), cin.tie(nullptr), cout.tie(nullptr);\n"
    "\treturn 0;\n"
"}\n";
    f.close();
}

void javaComp(string name) {
    string in = name + ".java";
    ofstream f(in);
    f <<
"import java.io.*;\nimport java.math.*;\nimport java.security.*;\nimport java.text.*;\nimport java.util.*;\nimport java.util.concurrent.*;\nimport java.util.regex.*;\n"
"public class " + name + "{ " + "\n"
    "\tpublic static void main(String[] args) {\n\n"
    "\t}\n"
"}\n";

    f.close();

}
void pyComp(string name) {
    string in = name + ".py";
    ofstream f(in);
    f << "import sys\nimport math\n\n";
    f.close();
}

void webdev() {
    ofstream index("index.html");
    fs::create_directories("./assets/css");
    fs::create_directories("./assets/js");
    fs::create_directories("./assets/img");
    ofstream css("./assets/css/styles.css");
    ofstream js("./assets/js/index.html");

    index <<
        "<!DOCTYPE html>\n<html lang='en'>\n<head>\n<meta charset='utf-8' />\n<meta name='viewport' content='width=device-width, initial-scale=1' />\n<title>Made with C++ Template Builder</title>\n<meta name='description' content='Made with C++ Template Builder' />\n<meta property='og:title' content='Hello World' />\n<meta property='og:type' content='article' />\n<meta property='og:url' content='https://www.google.com/' />\n<meta property='og:description' content='Made with C++ Template Builder' />\n<link rel='stylesheet' href='assets/css/style.css' />\n<script src='assets/js/index.js' defer></script>\n</head>\n\n\n\n<body>\n\n</body>";
    index.close();
}

int main(void) {
    int choice;
    cout << "[1] C++ / CP Template, [2] Java / CP Template, [3] Python / CP Template, [4] HTML/CSS/JS webdev Template: ";
    cin >> choice;

    string name;
    cout << "\n";
    if (choice == 1 || choice == 2 || choice == 3) {
        cout << "Name: ";
        cin >> name;
    }

    switch(choice) {
        case 1:
            cppComp(name);
            break;
        case 2:
            javaComp(name);
            break;
        case 3:
            pyComp(name);
            break;
        case 4:
            webdev();
            break;
    }
    return 0;
}
