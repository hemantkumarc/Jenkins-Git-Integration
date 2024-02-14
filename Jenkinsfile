pipeline {

	agent any

	stages {

		stage('Clone Repository')
		{
			steps {
				sh "git clone https://github.com/hemantkumarc/Jenkins-Git-Integration.git"
			}
		}

		stage('Build Code')
		{
			steps {
				sh "chmod u+x sample.c"
				sh "cc sample.c"
				sh "./a.out 2 3"
			}
		}

		stage('Test Code')
		{
			steps {
				sh "chmod u+x test.c"
				sh "cc test.c"
				sh "./a.out"
			}
		}
	}
}