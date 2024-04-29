<xsl:stylesheet version="1.0" xmlns:xsl="http://www.w3.org/1999/XSL/Transform">	
	<xsl:template match="myPerson">
		<html>
			<body>				
					<b><h1><xsl:value-of select="personName"></xsl:value-of></h1></b>
			</body>		
		</html>	
	</xsl:template>
</xsl:stylesheet>


