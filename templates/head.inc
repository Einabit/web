<!DOCTYPE html>
<html>
  <head>
    <meta charset="utf-8">
    <title><%=data.content.head.title%></title>
    <link rel="stylesheet" href="global.css">
    <link rel="stylesheet" href="layout.css">
    <link rel="icon" href="img/Tuerca_Color.png">
  </head>
  <body>
    <section class="header">
      <logo>
        <img src="img/Logo_Einabit_Negativo.png" />
      </logo>
      <nav>
        <div>
          <select>
            <option selected disabled>Lang</option>
            <option onclick="location.href = 'index.en.html';">EN</option>
            <option onclick="location.href = 'index.es.html';">ES</option>
          </select>
        </div>
        <div>
          <a title="<%=data.content.menu.index.title%>" href="index.<%=data.lang%>.html"><%=data.content.menu.index.value%></a>
        </div>
        <div>
          <a title="<%=data.content.menu.industry.title%>" href="industry.<%=data.lang%>.html"><%=data.content.menu.industry.value%></a>
        </div>
        <div>
          <a title="<%=data.content.menu.clients.title%>" href="clients.<%=data.lang%>.html"><%=data.content.menu.clients.value%></a>
        </div>
        <div>
          <a title="<%=data.content.menu.tools.title%>" href="tools.<%=data.lang%>.html"><%=data.content.menu.tools.value%></a>
        </div>
        <div>
          <a title="<%=data.content.menu.about.title%>" href="about.<%=data.lang%>.html"><%=data.content.menu.about.value%></a>
        </div>
      </nav>
    </section>
