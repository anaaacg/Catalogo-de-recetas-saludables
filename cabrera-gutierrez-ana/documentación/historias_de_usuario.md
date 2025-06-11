# CATALOGO DE RECETAS SALUDABLES

## Introducción

### Cliente: 

Fundación “Vida Sana”

### Descripción general del sistema

El sistema permitirá gestionar un catálogo digital de recetas saludables, donde el usuario podra buscar y acceder recetas segun los ingredientes que este tenga disponible, categorias o preferencias. El usuario tambien podra valorar recetas, guardarlas, compartirlas o hacer propuestas nuevas para el catálogo.

### Objetivo General: 

Crear un sistema de recetas saludables filtrables por ingredientes.

### Objetivos especificos:
- Implementar una base de datos que almacene recetas con sus ingredientes, preparación y categoría.
- Implementar una funcion de busqueda rapida y eficiente por ingredientes.
- Facilitar la difusion, acceso y valoracion de recetas saludables a los usuarios.


## Historias de usuario

### Objetivo 1. Implementar una base de datos que almacene recetas con sus ingredientes, preparación y categoría.

- HU-01: Como encargado del cátalogo, quiero poder registrar, eliminar y editar recetas para mantener la calidad del en el catálogo.
    - Criterio positivo: Al realizar la accion, los cambios se efectuan en la base de datos de manera exitosa.
    - Criterio negativo: Al ingresar datos erroneos o intentar hacer cambios no autorizados, se muestra un error.
- HU-02: Como administrador, quiero organizar las recetas por categorías y caracteristicas para facilitar el acceso al contenido.
    - Criterio positivo: Si se clasifica una receta en una categoria, esta debe aparecer al aplicar el filtro en la busqueda.
    - Criterio negativo: Si la receta no tiene categoria, no aparecerá en la busqueda.
- HU-03: Como usuario, quiero proponer mi receta para publicarla en el catalogo.
    - Criterio positivo: Si los requerimientos del contenido de la receta estan completos, la solicitud para publicarla sera exitosa.
    - Criterio negativo: Si falta alguna parte de la receta, se dara un error.
- HU-04: Como encargado del cátalogo, quiero poder acceder a las propuestas de recetas para poder aceptarlas o rechazarlas.
    - Criterio positivo: Si los datos estan completos y verificados, se podra publicar la receta.
    - Criterio negativo: Si los datos son errados, se podra editar y publicar o eliminar la solicitud.
- HU-05: Como desarrollador, quiero implementar validaciones al registrar recetas, para asegurar que los datos almacenados sean consistentes y completos.
    - Criterio positivo: Si la receta tiene autor con usuario válido y demas partes, se podra registrar la receta. 
    - Criterio negativo: Si la receta no tiene un autor con usuario válido, no se registrará la receta.
- HU-06: Como usuario, quiero ver los ingredientes y pasos de preparación claramente organizados, para poder seguir la receta sin confusión.
    - Criterio positivo: Si los ingredientes y pasos estan ordenados, se mostraran al usuario al momento de acceder a la receta.
    - Criterio negativo: Si los pasos estan desordenados, no se deberan mostrar, ni permitir el acceso del usuario a la receta.
- HU-07: Como desarrollador, quiero registrar la actividad del usuario, para usar esa informacion en distintas funciones.
    - Criterio positivo: Si el usuario añade una receta a favoritos, esta se guardará en la carpeta del usuario. 
    - Criterio negativo: Si el usuario no inició sesion, no se registrará su actividad.

### Objetivo 2. Implementar una funcion de busqueda eficiente por ingredientes.

- HU-08: Como usuario, quiero buscar recetas ingresando uno o más ingredientes, para encontrar opciones que pueda cocinar con lo que tengo disponible. 
    - Criterio positivo: Se mostraran resultados que coincidan con los ingredientes buscados
    - Criterio negativo: Si no se ingresan ingredientes registrados, no se mostraran resultados.
- HU-09: Como encargado del catalogo, quiero que se puedan aplicar filtros de busqueda ademas de los ingredientes, como categorias y tipos para facilitar la búsqueda de los usuarios.
    - Criterio positivo: Al aplicar los filtros, se muestran las recetas adecuadas a estos.
    - Criterio negativo: Si no se encuentran resultados, se mostrara un mensaje. 
- HU-10: Como desarrollador, quiero hacer que la busqueda de ingredientes sepa reconocer sinonimos de los ingredientes para resultados mas precisos.
    - Criterio positivo: si el usuario ingresa un sinonimo en el buscador, los resultados seran los mismos.
    - Criterio negativo: Si el nombre del ingrediente ingresado no coincide, se muestra un mensaje.
- HU-11: Como usuario, quiero tener sugerencias segun la calificacion de las recetas para facilitar mi eleccion.
    - Criterio positivo: El sistema sugiere las recetas con mejor calificacion
    - Criterio negativo: Si la calificacion es mala, no se mostrará.
- HU-12: Como encargado, quiero que la busqueda sea rapida, para mejor experiencia del usuario.
    - Criterio positivo: los resultados de la busqueda se mostraran en menos de 5 seg.
    - Criterio negativo: Si el sistema esta fallando, mostrará un mensaje y se notificará al encargado de soporte.
- HU-13: Como QA tester, quiero hacer todas las pruebas necesarias en la busqueda, para garantizar la eficiencia del sistema.
    - Criterio positivo: Se mostrara el debido resultado de las busquedas en todos los casos.
    - Criterio negativo: Si el sistema presenta un error, las respuestas serán incorrectas y deberá arreglarse.

### Objetivo 3. Facilitar la difusion, acceso y valoracion de recetas saludables a los usuarios.

- HU-14: Como usuario, quiero calificar una receta con estrellas, para que otros usuarios vean cuáles son las mejores.
    - Criterio positivo: luego de acceder a la receta, aparece la opcion de calificar y se guardan los datos. 
    - Criterio negativo: Si hay un error al guardar la calificación, el sistema mostrará un mensaje de error y no actualizará la puntuación.
- HU-15: Como usuario, quiero dejar comentarios en las recetas, para compartir mi experiencia o dar sugerencias.
    - Criterio positivo: Se guarda y publica el comentario en la seccion de comentarios de la receta.
    - Criterio negativo: Si existe un error de conexion o servidor al momento de enviar el comentario, se mostrará un mensaje en la pantalla. 
- HU-16: Como usuario, quiero poder guardar mis recetas favoritas para tener acceso a ellas cuando quiera.
    - Criterio positivo: El usuario marca como favorita una receta y esta se guarda en su perfil.
    - Criterio negativo: Si hubo un error en el sistema, o el usuario no incio sesion, la receta no se guardará.
- HU-17: Como administrador, quiero ver estadísticas sobre cuántas veces se comparte, califica o comenta una receta, para identificar cuáles son las más populares y mejorar el contenido del catálogo.
    - Criterio positivo: el usuario autorizado accede a los datos estadisticos de la receta
    - Criterio negativo: si el usuario no tiene autorizacion, no lo aparece la opcion de ver estos datos.
- HU-18: Como encargado de marketing, quiero que los usuarios puedan compartir recetas fácilmente en redes sociales para aumentar la difusión del catálogo y atraer a más personas.
    - Criterio positivo: Los usuarios tendran la opcion de compartir que generara un enlace funcional con imagen.
    - Criterio negativo: Si el usuario no inicio sesion podra compartir pero no se contará la accion.
- HU-19: Como encargado del catálogo, quiero que el sistema sugiera recetas personalizadas según los gustos o recetas favoritas del usuario, para mejorar su experiencia.
    - Criterio positivo: Se analiza las recetas favoritas y mas visitadas del usuario, y se muestra recetas con caracteristicas similares en una seccion especifica.
    - Criterio negativo: Si el usuario no tiene historial previo, se mostraran sugerencias de recetas populares.