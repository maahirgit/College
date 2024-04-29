<xsl:stylesheet version="1.0" xmlns:xsl="http://www.w3.org/1999/XSL/Transform">	
	<xsl:template match="/">
		<html>
			<body>
			<table border="2">
				<th style="color:red">Stock Name</th>
				<th style="color:red">Price</th>
				<xsl:for-each select="portfolio/stock">
					<tr>
						<td style="color:yellow"><xsl:value-of select="name"/></td>
						<td style="color:yellow"><xsl:value-of select="price"/></td>
					</tr>
				</xsl:for-each>
			</table>
			</body>
		</html>
	</xsl:template>
</xsl:stylesheet>


