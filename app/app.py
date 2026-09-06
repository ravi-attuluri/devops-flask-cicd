from flask import Flask, render_template, jsonify
import os

app = Flask(__name__)

APP_NAME = "DevOps Flask CI/CD Application"
APP_VERSION = os.getenv("APP_VERSION", "1.0.0")
ENVIRONMENT = os.getenv("APP_ENV", "development")


@app.route("/")
def home():
    return render_template(
        "index.html",
        app_name=APP_NAME,
        version=APP_VERSION,
        environment=ENVIRONMENT
    )


@app.route("/about")
def about():
    return render_template("about.html")


@app.route("/status")
def status():
    return render_template(
        "status.html",
        version=APP_VERSION,
        environment=ENVIRONMENT
    )


@app.route("/health")
def health():
    return jsonify({
        "status": "healthy",
        "application": APP_NAME,
        "version": APP_VERSION,
        "environment": ENVIRONMENT
    })


@app.route("/api/info")
def api_info():
    return jsonify({
        "application": APP_NAME,
        "version": APP_VERSION,
        "environment": ENVIRONMENT,
        "platform": "AWS EC2"
    })


@app.route("/version")
def version():
    return jsonify({
        "version": APP_VERSION
    })


if __name__ == "__main__":
    app.run(host="0.0.0.0", port=5000)
