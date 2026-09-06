* {
    margin: 0;
    padding: 0;
    box-sizing: border-box;
}

body {
    font-family: Arial, sans-serif;
    background: #f5f7fb;
    color: #222;
}

nav {
    display: flex;
    justify-content: space-between;
    align-items: center;

    padding: 20px 8%;

    background: #111827;
    color: white;
}

.logo {
    font-size: 22px;
    font-weight: bold;
}

.nav-links {
    display: flex;
    gap: 25px;
}

.nav-links a {
    color: white;
    text-decoration: none;
}

.hero {
    min-height: 500px;

    display: flex;
    align-items: center;
    justify-content: center;

    text-align: center;

    background: #1f2937;
    color: white;
}

.hero-content {
    max-width: 800px;
    padding: 40px;
}

.tag {
    font-size: 14px;
    letter-spacing: 2px;
    margin-bottom: 20px;
}

.hero h1 {
    font-size: 48px;
    margin-bottom: 20px;
}

.description {
    font-size: 20px;
    line-height: 1.6;
    margin-bottom: 30px;
}

.buttons {
    display: flex;
    justify-content: center;
    gap: 15px;
}

.btn {
    padding: 12px 22px;

[O    background: white;
    color: #111827;

    text-decoration: none;

    border-radius: 6px;
}

.btn.secondary {
    background: transparent;
    color: white;
    border: 1px solid white;
}

.info {
    display: grid;

    grid-template-columns:
        repeat(auto-fit, minmax(200px, 1fr));

    gap: 20px;

    padding: 50px 8%;
}

.card {
    background: white;

    padding: 30px;

    border-radius: 10px;

    box-shadow:
        0 5px 20px rgba(0,0,0,0.08);

    text-align: center;
}

.card h3 {
    margin-bottom: 10px;
}

.page {
    max-width: 900px;

    margin: 60px auto;

    padding: 30px;
}

.page h1 {
    margin-bottom: 20px;
}

.page p {
    line-height: 1.7;
}

.tech-list {
    margin-top: 30px;
}

.tech-list p {
    padding: 12px;

    background: white;

    margin-bottom: 10px;

    border-radius: 6px;
}

.status-card {
    margin-top: 30px;

    background: white;

    padding: 30px;

    border-radius: 10px;

    box-shadow:
        0 5px 20px rgba(0,0,0,0.08);
}

.status-row {
    display: flex;

    justify-content: space-between;

    padding: 18px 0;

    border-bottom: 1px solid #eee;
}

footer {
    text-align: center;

    padding: 30px;

    background: #111827;

    color: white;
}
