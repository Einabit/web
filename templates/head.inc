<!DOCTYPE html>
<html>
  <head>
    <meta charset="utf-8">
    <title><%=data.content.head.title%></title>
    <link rel="stylesheet" href="global.css">
    <link rel="stylesheet" href="layout.css">
    <link rel="icon" href="img/Tuerca_Color.png">
    <meta name="viewport" content="width=device-width, initial-scale=0.8">
  </head>
  <body>
    <section class="primary header dflex">
      <a title="<%=data.content.menu.index.title%>" href="index.<%=data.lang%>.html">
        <logo>
          <img src="img/Logo_Einabit_Negativo.png" />
        </logo>
      </a>
      <!-- https://codepen.io/alvarotrigo/pen/MWEJEWG -->
      <div class="nav" onclick="toggleNav()">
        <div>
          <a title="<%=data.content.menu.index.title%>" href="index.<%=data.lang%>.html"><%=data.content.menu.index.value%></a>
        </div>
        <% if (data.lang === "es") { %>
        <div>
          <a title="<%=data.content.menu.industry.title%>" href="industry.es.html"><%=data.content.menu.industry.value%></a>
        </div>
        <% } %>
        <div>
          <a title="<%=data.content.menu.projects.title%>" href="projects.<%=data.lang%>.html"><%=data.content.menu.projects.value%></a>
        </div>
        <div>
          <a title="<%=data.content.menu.tools.title%>" href="tools.<%=data.lang%>.html"><%=data.content.menu.tools.value%></a>
        </div>
        <div>
          <a title="<%=data.content.menu.about.title%>" href="about.<%=data.lang%>.html"><%=data.content.menu.about.value%></a>
        </div>
        <div class="menu-highlight">
          <a href="about.<%=data.lang%>.html#contact"><%=data.content.about.contactHeader%></a>
        </div>
        <% if (data.lang === "es") { %>
        <div>
          <a title="English language" href="index.en.html">🇬🇧</a>
        </div>
        <% } else if (data.lang === "en") { %>
        <div>
          <a title="Idioma español" href="index.es.html">🇪🇸</a>
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
