#include <string.h>
#include <stdlib.h>
#include <jni.h>

int main() {
	create_destroy_jvm();
	create_destroy_jvm();
	return 0;
}

int create_destroy_jvm() {
	JavaVMOption options[3];
	JavaVMInitArgs vm_args;
	JNIEnv *env;
	JavaVM *jvm;
	long status;

	options[0].optionString = "-Xms512m";
	options[1].optionString = "-Xmx512m";
//	options[2].optionString = "-verbose";

	memset(&vm_args, 0, sizeof(vm_args));
	vm_args.version = JNI_VERSION_1_8;
	vm_args.nOptions = 2;
	vm_args.options = options;
        vm_args.ignoreUnrecognized = JNI_TRUE;

	status = JNI_CreateJavaVM(&jvm, (void**)&env, &vm_args);
	
	if (status != JNI_ERR) {
		printf("jvm is created: %p\n", env);
		sleep(3);

		status = (*jvm)->DestroyJavaVM(jvm);
		printf("jvm is destroyed (%d)\n", status);
		sleep(3);
	} else {
		perror("fail to create jvm");
	}

	return 0;
}
