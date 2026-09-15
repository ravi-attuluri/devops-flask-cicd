# 🚀 Flask DevOps CI/CD Project

A production-style Flask application demonstrating an automated CI/CD pipeline using GitHub, Jenkins, Docker, Docker Hub, and AWS EC2.

The project uses **Jenkins Poll SCM** to periodically check the GitHub repository for new commits and automatically trigger the deployment pipeline when changes are detected.

## 🏗️ Architecture

```text
Developer
    │
    ▼
  GitHub
    │
    │ Poll SCM
    ▼
 Jenkins
    │
    ├── Checkout
    ├── Test
    ├── Build
    ├── Security Scan
    ├── Docker Build
    └── Docker Push
             │
             ▼
        Docker Hub
             │
             ▼
       AWS EC2 Server
             │
             ▼
       Docker Container
             │
             ▼
      Flask Application
```

## 🛠️ Technology Stack

* Python
* Flask
* HTML5
* CSS3
* pytest
* Git
* GitHub
* Jenkins
* Jenkins Pipeline
* Docker
* Docker Hub
* AWS EC2
* Amazon Linux 2023
* Gunicorn
* Trivy

## ✨ Features

* Flask web application
* HTML/CSS user interface
* About page
* Application status page
* Health check endpoint
* REST API endpoint
* Application version endpoint
* Automated unit testing
* Docker containerization
* Jenkins CI/CD pipeline
* Jenkins Poll SCM trigger
* Docker Hub image publishing
* AWS EC2 deployment
* Deployment health verification

## 📁 Project Structure

```text
devops-flask-cicd/
│
├── app/
│   ├── app.py
│   │
│   ├── templates/
│   │   ├── index.html
│   │   ├── about.html
│   │   └── status.html
│   │
│   └── static/
│       └── css/
│           └── style.css
│
├── tests/
│   └── test_app.py
│
├── requirements.txt
├── Dockerfile
├── Jenkinsfile
├── .gitignore
└── README.md
```

## 🧪 Local Setup

Clone the repository:

```bash
git clone https://github.com/ravi-attuluri/devops-flask-cicd.git
cd devops-flask-cicd
```

Create and activate a virtual environment:

```bash
python -m venv venv
```

Windows:

```bash
venv\Scripts\activate
```

Install dependencies:

```bash
pip install -r requirements.txt
```

Start the application:

```bash
python -m app.app
```

Open:

```text
http://localhost:5000
```

## 🧪 Running Tests

Run:

```bash
pytest
```

Expected result:

```text
3 passed
```

## 🌐 Application Endpoints

| Endpoint    | Description                 |
| ----------- | --------------------------- |
| `/`         | Application homepage        |
| `/about`    | Project information         |
| `/status`   | Application status          |
| `/health`   | Health check                |
| `/api/info` | Application information API |
| `/version`  | Application version         |

## 🐳 Docker

The application will be packaged as a Docker image and published to Docker Hub.

Planned flow:

```text
Flask
  ↓
Gunicorn
  ↓
Docker Image
  ↓
Docker Hub
```

## 🔄 CI/CD Pipeline

The Jenkins pipeline will perform the following stages:

```text
Checkout
   ↓
Test
   ↓
Build
   ↓
Security Scan
   ↓
Docker Build
   ↓
Docker Push
   ↓
Deploy
   ↓
Health Check
```

### Jenkins Poll SCM

Jenkins will periodically check the GitHub repository for changes.

Example schedule:

```text
H/2 * * * *
```

When Jenkins detects a new commit, the CI/CD pipeline will start automatically.

```text
Git Push
   ↓
GitHub
   ↓
Jenkins Poll SCM
   ↓
Change Detected
   ↓
Pipeline
```

## ☁️ AWS Deployment

The project will use two EC2 instances running **Amazon Linux 2023**:

```text
┌──────────────────────────┐
│ EC2 #1                   │
│ Jenkins Server           │
│ Amazon Linux 2023        │
└────────────┬─────────────┘
             │
             │ SSH
             ▼
┌──────────────────────────┐
│ EC2 #2                   │
│ Application Server       │
│ Amazon Linux 2023        │
│ Docker                   │
└────────────┬─────────────┘
             │
             ▼
      Docker Container
             │
             ▼
      Flask Application
```

## 🔐 Security

The project will include security practices such as:

* GitHub credentials stored securely in Jenkins
* Docker Hub credentials stored in Jenkins Credentials
* SSH keys protected from source control
* Secrets excluded using `.gitignore`
* Docker image vulnerability scanning
* Minimal required EC2 security-group access

## 📌 Project Status

| Stage                      | Status         |
| -------------------------- | -------------- |
| Flask Application          | ✅ Completed    |
| GitHub Repository          | ✅ Completed    |
| README Documentation       | 🔄 In Progress |
| AWS EC2 Infrastructure     | ⬜ Planned      |
| Docker Containerization    | ⬜ Planned      |
| Docker Hub                 | ⬜ Planned      |
| Jenkins                    | ⬜ Planned      |
| Poll SCM CI/CD             | ⬜ Planned      |
| Security Scanning          | ⬜ Planned      |
| AWS Deployment             | ⬜ Planned      |
| Monitoring & Health Checks | ⬜ Planned      |

## 🎯 Project Goal

The goal of this project is to demonstrate a complete DevOps workflow from source-code management to automated application deployment.

```text
Code
 ↓
GitHub
 ↓
Jenkins Poll SCM
 ↓
Automated Testing
 ↓
Docker
 ↓
Security Scan
 ↓
Docker Hub
 ↓
AWS EC2
 ↓
Production-style Deployment
```

## 👨‍💻 Author

**Ravi Attuluri**

GitHub:
https://github.com/ravi-attuluri
