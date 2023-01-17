#include <iostream>
#include <cpr/cpr.h>

int main() {
	cpr::Response get = cpr::Get(cpr::Url("https://httpbin.org/html"));
	//std::cout << get.text;
	std::string getText = get.text, getTitle;
	for (int i = 0; i < getText.size(); ++i) {
		if (getText[i] == '<') {
			if (i + 1 < getText.size() && getText[i + 1] == 'h') {
				if (i + 2 < getText.size() && getText[i + 2] == '1') {
					if (i + 3 < getText.size() && getText[i + 3] == '>') {
						if (i + 4 < getText.size()) {
							int j = i + 4;
							getTitle = getText[j];
							j++;
							while (j < getText.size() && getText[j] != '<') {
								getTitle += getText[j];
								j++;
							}
							break;
						}
					}
				}
			}
		}
	}
	std::cout << "Title: " << getTitle << std::endl;
}
