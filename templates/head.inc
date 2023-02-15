<!DOCTYPE html>
<html lang="<%=data.lang%>">
  <head>
    <meta charset="UTF-8">
    <meta name="description" content="<%=data.content.head[file].description%>">
    <meta name="keywords" content="<%=data.content.head[file].keywords%>">
    <meta name="author" content="Einabit">
    <title><%=data.content.head[file].title%></title>
    <link rel="stylesheet" href="global.css">
    <link rel="stylesheet" href="layout.css">
    <link rel="icon" href="img/Tuerca_Color.png">
    <meta name="viewport" content="width=device-width, initial-scale=0.8">
  </head>
  <body>
    <section class="primary header dflex">
      <a title="<%=data.content.menu.index.title%>" href="<%=data.lang%>-iot-as-service">
        <logo>
          <img src="img/Logo_Einabit_Negativo.png" alt="Einabit Logo"/>
        </logo>
      </a>
      <!-- https://codepen.io/alvarotrigo/pen/MWEJEWG -->
      <div class="nav" onclick="toggleNav()">
        <div>
          <a title="<%=data.content.menu.index.title%>" href="<%=data.lang%>-iot-as-service"><%=data.content.menu.index.value%></a>
        </div>
        <% if (data.lang === "es") { %>
        <div>
          <a title="<%=data.content.menu.industry.title%>" href="es-digitalization-industry-4-0"><%=data.content.menu.industry.value%></a>
        </div>
        <% } %>
        <div>
          <a title="<%=data.content.menu.projects.title%>" href="<%=data.lang%>-relevant-projects"><%=data.content.menu.projects.value%></a>
        </div>
        <div>
          <a title="<%=data.content.menu.tools.title%>" href="<%=data.lang%>-tools-for-developers"><%=data.content.menu.tools.value%></a>
        </div>
        <div>
          <a title="<%=data.content.menu.about.title%>" href="<%=data.lang%>-our-company"><%=data.content.menu.about.value%></a>
        </div>
        <div class="menu-highlight">
          <a href="<%=data.lang%>-our-company#contact"><%=data.content.about.contactHeader%></a>
        </div>
        <% if (data.lang === "es") { %>
        <div>
          <a title="English language" href="en-iot-as-service">🇬🇧</a>
        </div>
        <% } else if (data.lang === "en") { %>
        <div>
          <a title="Idioma español" href="es-iot-as-service">🇪🇸</a>
        </div>
        <% } %>
      </div>
      <script type="text/javascript">
        const navEl = document.querySelector("div.nav");

        if (window.innerWidth <= 1280) {
          navEl.classList.add("phone");
        }

        function toggleNav () {
          navEl.classList.toggle("open");
        }
      </script>
    </section>
