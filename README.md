# 🚀 Flask DevOps CI/CD Project

A production-style Flask web application demonstrating an automated
CI/CD pipeline using GitHub, Jenkins, Docker, Docker Hub and AWS EC2.

## 🏗️ Architecture

GitHub
   ↓
Jenkins
   ↓
Automated Tests
   ↓
Docker Build
   ↓
Docker Hub
   ↓
AWS EC2
   ↓
Flask Application

## 🛠️ Tech Stack

- Python
- Flask
- HTML / CSS
- Git
- GitHub
- Jenkins
- Docker
- Docker Hub
- AWS EC2
- Amazon Linux
- pytest
- Gunicorn

## ✨ Features

- Flask web application
- Responsive HTML interface
- Application status page
- Health check endpoint
- REST API endpoint
- Application version endpoint
- Automated pytest testing
- Docker containerization
- Jenkins CI/CD pipeline
- Docker Hub image publishing
- AWS EC2 deployment

## 📁 Project Structure

```text
devops-flask-cicd/
│
├── app/
│   ├── app.py
│   ├── templates/
│   │   ├── index.html
│   │   ├── about.html
│   │   └── status.html
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
