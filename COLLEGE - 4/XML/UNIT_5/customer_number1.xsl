<xsl:stylesheet version="1.0" xmlns:xsl="http://www.w3.org/1999/XSL/Transform">	
	<xsl:template match="/">
		<html>
			<body>
				<xsl:for-each select="customers/customer">
					<xsl:number level>
					<xsl:value-of select="name"/><br></br>
					<xsl:value-of select="address"/><br></br>
					<xsl:value-of select="state"/><br></br>
					<xsl:value-of select="phone"/><br></br><br></br>
				</xsl:for-each>
			</body>
		</html>
	</xsl:template>
</xsl:stylesheet>


