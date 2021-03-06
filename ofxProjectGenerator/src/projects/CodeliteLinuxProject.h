/*
 * CBLinuxProject.h
 *
 *  Created on: 28/12/2011
 *      Author: arturo
 */

#ifndef CODELITELINUXROJECT_H_
#define CODELITELINUXROJECT_H_

#include "ofConstants.h"
#include "ofAddon.h"
#include "baseProject.h"

class CodeliteLinuxProject: virtual public baseProject  {
public:
    CodeliteLinuxProject(std::string target):baseProject(target){};

    void setup();

    bool createProjectFile();
    bool loadProjectFile();
    bool saveProjectFile();

	void addSrc(std::string srcName, string folder, SrcType type=DEFAULT);
	void addInclude(std::string includeName);
	void addLibrary(const LibraryBinary & lib);
	
	std::string getPlatformTemplateDir();

	std::string getName();
	std::string getPath();

	static std::string LOG_NAME;
	string projectDirCodelite;

private:

};

#endif /* CODELITELINUXROJECT_H_ */
