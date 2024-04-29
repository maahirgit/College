<xsl:stylesheet version="1.0" xmlns:xsl="http://www.w3.org/1999/XSL/Transform">	
	<xsl:template match="subject">
		<html>
			<head><title> Hellow world </title></head>
			<body>
				<h1> XSL DEMO</h1>
				<h3> <xsl:value-of select="info"/></h3>
			</body>

		</html>
	</xsl:template>
</xsl:stylesheet>


