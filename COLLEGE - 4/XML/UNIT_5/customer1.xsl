<xsl:stylesheet version="1.0" xmlns:xsl="http://www.w3.org/1999/XSL/Transform">	
	<xsl:template match="/">
		<html>
			<body>
			<table border="2">
				<xsl:apply-templates/>
			</table>
			</body>
		</html>
	</xsl:template>

	<xsl:template match="customers/customer">
		<tr>
			<td><xsl:value-of select="name"/></td>
			<td><xsl:value-of select="address"/></td>
			<td><xsl:value-of select="state"/></td>
			<td><xsl:value-of select="phone"/></td>
		</tr>
	</xsl:template>
</xsl:stylesheet>
