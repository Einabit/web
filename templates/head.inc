<!DOCTYPE html>
<html lang="<%=$each.lang%>">
  <head>
    <meta charset="UTF-8">
    <meta name="description" content="<%=$each.content.head[$file].description%>">
    <meta name="keywords" content="<%=$each.content.head[$file].keywords%>">
    <meta name="author" content="Einabit">
    <base href="https://einabit.com/" />
    <title><%=$each.content.head[$file].title%></title>
    <link rel="stylesheet" href="css/global.css">
    <link rel="stylesheet" href="css/layout.css">
    <link rel="icon" href="img/Tuerca_Color.png">
    <meta name="viewport" content="width=device-width, initial-scale=0.8">
  </head>
  <body>
    <section class="primary header dflex">
      <a title="Einabit" href="<%=$each.content.url.index%>">
        <logo>
          <img src="img/Logo_Einabit_Negativo.png" alt="Einabit Logo"/>
        </logo>
      </a>
      <div class="nav" onclick="toggleNav()">
        <div>
          <a title="<%=$each.content.menu.index.title%>" href="<%=$each.content.url.index%>"><%=$each.content.menu.index.value%></a>
        </div>
        <% if ($each.lang === "es") { %>
        <div>
          <a title="<%=$each.content.menu.industry.title%>" href="<%=$each.content.url.industry%>"><%=$each.content.menu.industry.value%></a>
        </div>
        <% } %>
        <div>
          <a title="<%=$each.content.menu.projects.title%>" href="<%=$each.content.url.projects%>"><%=$each.content.menu.projects.value%></a>
        </div>
        <div>
          <a title="<%=$each.content.menu.tools.title%>" href="<%=$each.content.url.tools%>"><%=$each.content.menu.tools.value%></a>
        </div>
        <div>
          <a title="<%=$each.content.menu.about.title%>" href="<%=$each.content.url.about%>"><%=$each.content.menu.about.value%></a>
        </div>
        <div class="menu-highlight">
          <a href="<%=$each.content.url.about%>#contact"><%=$each.content.about.contactHeader%></a>
        </div>
        <% if ($each.lang === "es") { %>
        <div>
          <a title="English language" href="iot-integration-as-service">🇬🇧</a>
        </div>
        <% } else if ($each.lang === "en") { %>
        <div>
          <a title="Idioma español" href="integracion-iot-como-servicio">🇪🇸</a>
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
