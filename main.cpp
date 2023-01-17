#include <iostream>
#include <cpr/cpr.h>

int main() {
	cpr::Response get = cpr::Get(cpr::Url("https://httpbin.org/html"));
	std::string getText =  get.text, getTitle;
	for (int i = (int)get.text.find("<h1>") + 4; i < (int)get.text.find("</h1>"); ++i) {
		getTitle += getText[i];
	}

	std::cout << "Title: " << getTitle << std::endl;
}
