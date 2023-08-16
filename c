[33mcommit c1d7ec0486b7eb6308a2108f072294099029ba0a[m
Author: Sudeshna Mohanty <sudeshnamohanty@gmail.com>
Date:   Tue Aug 15 18:19:07 2023 -0500

    first commit

[1mdiff --git a/.classpath b/.classpath[m
[1mnew file mode 100644[m
[1mindex 0000000..2e2268a[m
[1m--- /dev/null[m
[1m+++ b/.classpath[m
[36m@@ -0,0 +1,40 @@[m
[32m+[m[32m<?xml version="1.0" encoding="UTF-8"?>[m
[32m+[m[32m<classpath>[m
[32m+[m	[32m<classpathentry kind="src" output="target/classes" path="src/main/java">[m
[32m+[m		[32m<attributes>[m
[32m+[m			[32m<attribute name="optional" value="true"/>[m
[32m+[m			[32m<attribute name="maven.pomderived" value="true"/>[m
[32m+[m		[32m</attributes>[m
[32m+[m	[32m</classpathentry>[m
[32m+[m	[32m<classpathentry excluding="**" kind="src" output="target/classes" path="src/main/resources">[m
[32m+[m		[32m<attributes>[m
[32m+[m			[32m<attribute name="maven.pomderived" value="true"/>[m
[32m+[m			[32m<attribute name="optional" value="true"/>[m
[32m+[m		[32m</attributes>[m
[32m+[m	[32m</classpathentry>[m
[32m+[m	[32m<classpathentry kind="src" output="target/test-classes" path="src/test/java">[m
[32m+[m		[32m<attributes>[m
[32m+[m			[32m<attribute name="optional" value="true"/>[m
[32m+[m			[32m<attribute name="maven.pomderived" value="true"/>[m
[32m+[m			[32m<attribute name="test" value="true"/>[m
[32m+[m		[32m</attributes>[m
[32m+[m	[32m</classpathentry>[m
[32m+[m	[32m<classpathentry excluding="**" kind="src" output="target/test-classes" path="src/test/resources">[m
[32m+[m		[32m<attributes>[m
[32m+[m			[32m<attribute name="maven.pomderived" value="true"/>[m
[32m+[m			[32m<attribute name="test" value="true"/>[m
[32m+[m			[32m<attribute name="optional" value="true"/>[m
[32m+[m		[32m</attributes>[m
[32m+[m	[32m</classpathentry>[m
[32m+[m	[32m<classpathentry kind="con" path="org.eclipse.jdt.launching.JRE_CONTAINER/org.eclipse.jdt.internal.debug.ui.launcher.StandardVMType/JavaSE-1.7">[m
[32m+[m		[32m<attributes>[m
[32m+[m			[32m<attribute name="maven.pomderived" value="true"/>[m
[32m+[m		[32m</attributes>[m
[32m+[m	[32m</classpathentry>[m
[32m+[m	[32m<classpathentry kind="con" path="org.eclipse.m2e.MAVEN2_CLASSPATH_CONTAINER">[m
[32m+[m		[32m<attributes>[m
[32m+[m			[32m<attribute name="maven.pomderived" value="true"/>[m
[32m+[m		[32m</attributes>[m
[32m+[m	[32m</classpathentry>[m
[32m+[m	[32m<classpathentry kind="output" path="target/classes"/>[m
[32m+[m[32m</classpath>[m
[1mdiff --git a/.project b/.project[m
[1mnew file mode 100644[m
[1mindex 0000000..b3ed06a[m
[1m--- /dev/null[m
[1m+++ b/.project[m
[36m@@ -0,0 +1,23 @@[m
[32m+[m[32m<?xml version="1.0" encoding="UTF-8"?>[m
[32m+[m[32m<projectDescription>[m
[32m+[m	[32m<name>GitHubDemo</name>[m
[32m+[m	[32m<comment></comment>[m
[32m+[m	[32m<projects>[m
[32m+[m	[32m</projects>[m
[32m+[m	[32m<buildSpec>[m
[32m+[m		[32m<buildCommand>[m
[32m+[m			[32m<name>org.eclipse.jdt.core.javabuilder</name>[m
[32m+[m			[32m<arguments>[m
[32m+[m			[32m</arguments>[m
[32m+[m		[32m</buildCommand>[m
[32m+[m		[32m<buildCommand>[m
[32m+[m			[32m<name>org.eclipse.m2e.core.maven2Builder</name>[m
[32m+[m			[32m<arguments>[m
[32m+[m			[32m</arguments>[m
[32m+[m		[32m</buildCommand>[m
[32m+[m	[32m</buildSpec>[m
[32m+[m	[32m<natures>[m
[32m+[m		[32m<nature>org.eclipse.jdt.core.javanature</nature>[m
[32m+[m		[32m<nature>org.eclipse.m2e.core.maven2Nature</nature>[m
[32m+[m	[32m</natures>[m
[32m+[m[32m</projectDescription>[m
[1mdiff --git a/.settings/org.eclipse.jdt.core.prefs b/.settings/org.eclipse.jdt.core.prefs[m
[1mnew file mode 100644[m
[1mindex 0000000..a3b98fd[m
[1m--- /dev/null[m
[1m+++ b/.settings/org.eclipse.jdt.core.prefs[m
[36m@@ -0,0 +1,8 @@[m
[32m+[m[32meclipse.preferences.version=1[m
[32m+[m[32morg.eclipse.jdt.core.compiler.codegen.targetPlatform=1.7[m
[32m+[m[32morg.eclipse.jdt.core.compiler.compliance=1.7[m
[32m+[m[32morg.eclipse.jdt.core.compiler.problem.enablePreviewFeatures=disabled[m
[32m+[m[32morg.eclipse.jdt.core.compiler.problem.forbiddenReference=warning[m
[32m+[m[32morg.eclipse.jdt.core.compiler.problem.reportPreviewFeatures=ignore[m
[32m+[m[32morg.eclipse.jdt.core.compiler.release=disabled[m
[32m+[m[32morg.eclipse.jdt.core.compiler.source=1.7[m
[1mdiff --git a/.settings/org.eclipse.m2e.core.prefs b/.settings/org.eclipse.m2e.core.prefs[m
[1mnew file mode 100644[m
[1mindex 0000000..f897a7f[m
[1m--- /dev/null[m
[1m+++ b/.settings/org.eclipse.m2e.core.prefs[m
[36m@@ -0,0 +1,4 @@[m
[32m+[m[32mactiveProfiles=[m
[32m+[m[32meclipse.preferences.version=1[m
[32m+[m[32mresolveWorkspaceProjects=true[m
[32m+[m[32mversion=1[m
[1mdiff --git a/pom.xml b/pom.xml[m
[1mnew file mode 100644[m
[1mindex 0000000..489925e[m
[1m--- /dev/null[m
[1m+++ b/pom.xml[m
[36m@@ -0,0 +1,6 @@[m
[32m+[m[32m<project xmlns="http://maven.apache.org/POM/4.0.0" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://maven.apache.org/POM/4.0.0 https://maven.apache.org/xsd/maven-4.0.0.xsd">[m
[32m+[m[32m  <modelVersion>4.0.0</modelVersion>[m
[32m+[m[32m  <groupId>GitHubDemo</groupId>[m
[32m+[m[32m  <artifactId>GitHubDemo</artifactId>[m
[32m+[m[32m  <version>0.0.1-SNAPSHOT</version>[m
[32m+[m[32m</project>[m
\ No newline at end of file[m
[1mdiff --git a/src/main/java/com/pages/LoginPage.java b/src/main/java/com/pages/LoginPage.java[m
[1mnew file mode 100644[m
[1mindex 0000000..6c042eb[m
[1m--- /dev/null[m
[1m+++ b/src/main/java/com/pages/LoginPage.java[m
[36m@@ -0,0 +1,10 @@[m
[32m+[m[32mpackage com.pages;[m
[32m+[m
[32m+[m[32mpublic class LoginPage {[m
[32m+[m[41m	[m
[32m+[m	[32mpublic void loginPage() {[m
[32m+[m		[32mSystem.out.println("This is login page");[m
[32m+[m		[32m//System.out.println("This is new comment");[m
[32m+[m	[32m}[m
[32m+[m
[32m+[m[32m}[m
[1mdiff --git a/src/test/java/com/testcases/LoginTest.java b/src/test/java/com/testcases/LoginTest.java[m
[1mnew file mode 100644[m
[1mindex 0000000..29ae35c[m
[1m--- /dev/null[m
[1m+++ b/src/test/java/com/testcases/LoginTest.java[m
[36m@@ -0,0 +1,9 @@[m
[32m+[m[32mpackage com.testcases;[m
[32m+[m
[32m+[m[32mpublic class LoginTest {[m
[32m+[m
[32m+[m	[32mpublic void loginTest() {[m
[32m+[m		[32mSystem.out.println("This is login test");[m
[32m+[m		[32m//System.out.println("This is new comment");[m
[32m+[m	[32m}[m
[32m+[m[32m}[m
[1mdiff --git a/target/classes/META-INF/MANIFEST.MF b/target/classes/META-INF/MANIFEST.MF[m
[1mnew file mode 100644[m
[1mindex 0000000..b55046a[m
[1m--- /dev/null[m
[1m+++ b/target/classes/META-INF/MANIFEST.MF[m
[36m@@ -0,0 +1,4 @@[m
[32m+[m[32mManifest-Version: 1.0[m
[32m+[m[32mBuild-Jdk-Spec: 17[m
[32m+[m[32mCreated-By: Maven Integration for Eclipse[m
[32m+[m
[1mdiff --git a/target/classes/META-INF/maven/GitHubDemo/GitHubDemo/pom.properties b/target/classes/META-INF/maven/GitHubDemo/GitHubDemo/pom.properties[m
[1mnew file mode 100644[m
[1mindex 0000000..875bdb0[m
[1m--- /dev/null[m
[1m+++ b/target/classes/META-INF/maven/GitHubDemo/GitHubDemo/pom.properties[m
[36m@@ -0,0 +1,7 @@[m
[32m+[m[32m#Generated by Maven Integration for Eclipse[m
[32m+[m[32m#Tue Aug 15 17:54:19 CDT 2023[m
[32m+[m[32mm2e.projectLocation=C\:\\Users\\Aarushi M\\eclipse-workspace\\GitHubDemo[m
[32m+[m[32mm2e.projectName=GitHubDemo[m
[32m+[m[32mgroupId=GitHubDemo[m
[32m+[m[32martifactId=GitHubDemo[m
[32m+[m[32mversion=0.0.1-SNAPSHOT[m
[1mdiff --git a/target/classes/META-INF/maven/GitHubDemo/GitHubDemo/pom.xml b/target/classes/META-INF/maven/GitHubDemo/GitHubDemo/pom.xml[m
[1mnew file mode 100644[m
[1mindex 0000000..489925e[m
[1m--- /dev/null[m
[1m+++ b/target/classes/META-INF/maven/GitHubDemo/GitHubDemo/pom.xml[m
[36m@@ -0,0 +1,6 @@[m
[32m+[m[32m<project xmlns="http://maven.apache.org/POM/4.0.0" xmlns:xsi="http:/