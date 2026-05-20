FROM httpd:2.4

# Habilita o módulo CGI no Apache
RUN sed -i '/#LoadModule cgid_module modules\/mod_cgid.so/s/^#//' /usr/local/apache2/conf/httpd.conf
RUN sed -i '/#LoadModule cgi_module modules\/mod_cgi.so/s/^#//' /usr/local/apache2/conf/httpd.conf

# Adiciona sua configuração personalizada do VirtualHost
COPY meu-site.conf /usr/local/apache2/conf/extra/httpd-vhosts.conf

# Garante que o arquivo principal do Apache inclua os VirtualHosts
RUN echo "Include conf/extra/httpd-vhosts.conf" >> /usr/local/apache2/conf/httpd.conf

# Cria a pasta para colocar seus scripts CGI
RUN mkdir -p /usr/local/apache2/cgi-bin
WORKDIR /usr/local/apache2/cgi-bin
COPY . .